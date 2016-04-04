/****************************************************************************/
/* w_dirve_cfg.c : Gestion des évènements de W_DRIVE_CFG                    */
/* Auteur        : Philippe BOUSQUET                                        */
/* Modifié le    : 05/02/2003                                               */
/* Crée le       : 05/02/2003                                               */
/****************************************************************************/
#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gnome.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "donnees.h"
#include "commun.h"

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE W_DRIVE_CFG                                     */
/****************************************************************************/
void
on_w_drive_cfg_destroy                 (GtkObject       *object,
                                        gpointer         user_data)
{
  W_DRIVE_CFG=create_W_DRIVE_CFG();
}

void
on_bt_drive_path_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  gtk_widget_show(W_DRIVE_SEL_PATH);
}

void
on_bt_drive_cfg_ok_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  int i=0;
  char ftemp[512];
  char item[512];
  char * item_1;
  char enr2[512];
  char nomD[10];
  char pathD [512];
  char typeD [512];
  char labelD [512];
  char serialD [512];
  char deviceD [512];
  char filesysD [512];
  char enr[512];
  strcpy(nomD,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_DRIVE"))));
  strcpy(labelD,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_NAME"))));
  strcpy(pathD,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_PATH"))));
  strcpy(serialD,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_SERIAL"))));
  strcpy(filesysD,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_FILESYSTEM"))));
  strcpy(typeD,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_TYPE"))));
  strcpy(deviceD,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_DEVICE"))));
  if (strlen(pathD)>0)
  {
    gtk_widget_destroy(W_DRIVE_CFG);
    strcpy(ftemp,XWineDir);
    strcat(ftemp,"/temp.conf");
    fd=fopen(FichierConfig,"rt");
    fo=fopen(ftemp,"wt");
    fgets(enr, 512, fd);
    /* Mise à jour d'un disque */
    if (Provenance!=1)
    {
      while (!feof(fd))
      {
        if (chaine_contient(enr,nomD))
        {
          find=1;
          fputs(enr,fo);
          strcpy(enr2,"\"Path\" = \"");
          strcat(enr2,pathD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Label\" = \"");
          strcat(enr2,labelD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Type\" = \"");
          strcat(enr2,typeD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Filesystem\" = \"");
          strcat(enr2,filesysD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Serial\" = \"");
          strcat(enr2,serialD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          if ((strcmp(typeD,"floppy")==0)||(strcmp(typeD,"cdrom")==0))
          {
            strcpy(enr2,"\"Device\" = \"");
            strcat(enr2,deviceD);
            strcat(enr2,"\"\n");
            fputs(enr2,fo);
          }
          strcpy(enr2,"\n");
          fputs(enr2,fo);
        }
        else if (chaine_contient(enr,"[")) find=0;
        if (!find) fputs(enr,fo);
        fgets(enr, 512, fd);
      }
      for (i=0;i<26;i++)
      {
        if (Disques[i]==1)
        {
          gtk_clist_remove(GTK_CLIST(lookup_widget(W_GEST_DRIVE,"TAB_DRIVE")),0);
        }
      }
      Disques[((int)nomD[7])-((int)'A')]=1;
      strcpy(Labels[((int)nomD[7])-((int)'A')],labelD);
      for (i=0;i<26;i++)
      {
        if (Disques[i]==1)
        {
          strcpy(item,"[Drive ");
          item[7]=(char)(i+((int)'A'));
          item[8]=']';
          item[9]='\0';
          if (strcmp(Labels[i],"\0")!=0)
          {
            strcat(item," *** ");
            strcat(item,Labels[i]);
          }
          item_1=item;
          gtk_clist_insert(GTK_CLIST(lookup_widget(W_GEST_DRIVE,"TAB_DRIVE")),(i+1),&item_1);
        }
      }
    }
    /* Ajout d'un nouveau disque */
    else
    {
      while (!feof(fd))
      {
        if (chaine_contient(enr,"[wine]"))
        {
          strcpy(enr2,nomD);
          strcat(enr2,"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Path\" = \"");
          strcat(enr2,pathD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Label\" = \"");
          strcat(enr2,labelD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Type\" = \"");
          strcat(enr2,typeD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Filesystem\" = \"");
          strcat(enr2,filesysD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          strcpy(enr2,"\"Serial\" = \"");
          strcat(enr2,serialD);
          strcat(enr2,"\"\n");
          fputs(enr2,fo);
          if ((strcmp(typeD,"floppy")==0)||(strcmp(typeD,"cdrom")==0))
          {
            strcpy(enr2,"\"Device\" = \"");
            strcat(enr2,deviceD);
            strcat(enr2,"\"\n");
            fputs(enr2,fo);
          }
          strcpy(enr2,"\n");
          fputs(enr2,fo);
          for (i=0;i<26;i++)
          {
            if (Disques[i]==1)
            {
              gtk_clist_remove(GTK_CLIST(lookup_widget(W_GEST_DRIVE,"TAB_DRIVE")),0);
            }
          }
          Disques[((int)nomD[7])-((int)'A')]=1;
          strcpy(Labels[((int)nomD[7])-((int)'A')],labelD);
          for (i=0;i<26;i++)
          {
            if (Disques[i]==1)
            {
              strcpy(item,"[Drive ");
              item[7]=(char)(i+((int)'A'));
              item[8]=']';
              item[9]='\0';
              if (strcmp(Labels[i],"\0")!=0)
              {
                strcat(item," *** ");
                strcat(item,Labels[i]);
              }
              item_1=item;
              gtk_clist_insert(GTK_CLIST(lookup_widget(W_GEST_DRIVE,"TAB_DRIVE")),(i+1),&item_1);
            }
          }
        }
        fputs(enr,fo);
        fgets(enr, 512, fd);
      }
    }
    fclose(fd);
    fclose(fo);
    /* Recopier le fichier config */
    fd=fopen(FichierConfig,"wt");
    fo=fopen(ftemp,"rt");
    fgets(enr, 512, fo);
    while (!feof(fo))
    {
      fputs(enr,fd);
      fgets(enr, 512, fo);
    }
    fclose(fd);
    fclose(fo);
    if (Provenance==1) ecrire_dans_log(texte[180],nomD);
    else ecrire_dans_log(texte[181],nomD);
  }
  else gtk_widget_show(ERR_DRIVE_PATH);
}
