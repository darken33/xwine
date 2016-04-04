/****************************************************************************/
/* w_gest_drive.c : Gestion des évènements de W_GEST_DRIVE                  */
/* Auteur         : Philippe BOUSQUET                                       */
/* Modifié le     : 05/02/2003                                              */
/* Crée le        : 05/02/2003                                              */
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
/* EVENEMENTS DE LA FENETRE W_GEST_DRIVE                                    */
/****************************************************************************/
void
on_w_gest_drive_destroy                (GtkObject       *object,
                                        gpointer         user_data)
{
  W_GEST_DRIVE=create_W_GEST_DRIVE();
}

void
on_tab_drive_select_row                (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data)
{
  SelectRow=row;
  SelectCol=column;
}

void
on_bt_drive_new_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  char LabelD[26][10];
  char enr[512];
  int j=0;
  char titre[10];
  GList * diske=NULL;
  for (j=0;j<26;j++) Disques[j]=0;
  fd=fopen(FichierConfig,"rt");
  while (!feof(fd))
  {
    fgets(enr, 512, fd);
    if (chaine_contient(enr,"[Drive"))
    {
      Disques[((int)enr[7])-((int)'A')]=1;
    }  
  }        
  fclose(fd);
  for (j=0;j<26;j++)
  {
    if (Disques[j]==0) 
    {
      strcpy(titre,"[Drive ");
      titre[7]=(char)(j+((int)'A'));
      titre[8]=']';
      titre[9]='\0';
      strcpy((char *)LabelD[j],titre);
      diske=g_list_append(diske, (gpointer) _((char *)LabelD[j]));
    }
  }
  if (diske!=NULL)
  {
    gtk_combo_set_popdown_strings(GTK_COMBO(lookup_widget(W_DRIVE_CFG,"CB_DRIVE")),diske);
    g_list_free(diske);
    Provenance=1;
    gtk_widget_show(W_DRIVE_CFG);
  }
}

void
on_bt_drive_modify_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * liste;
  FILE * fd;
  int find=0;
  int i=0;
  int j=0;
  char nomD[10];
  char pathD [512];
  char typeD [512];
  char labelD [512];
  char serialD [512];
  char deviceD [512];
  char filesysD [512];
  char enr[512];
  liste = GTK_CLIST(lookup_widget(W_GEST_DRIVE,"TAB_DRIVE"));
  if (liste->selection!=NULL)
  {
    strcpy(nomD,"[Drive ");
    i=0;
    j=-1;
    while (i<26 && j<SelectRow)
    {
      if (Disques[i]) j++;
      i++;
    }      
    nomD[7]=(char)((i-1)+(int)'A');
    nomD[8]=']';
    nomD[9]='\0';      
    fd=fopen(FichierConfig,"rt");
    while ((!feof(fd))&& (!find))
    {
      fgets(enr, 512, fd);
      find = (chaine_contient(enr,nomD));
    }        
    fgets(enr, 512, fd);
    pathD[0]='\0';
    typeD[0]='\0';
    labelD[0]='\0';
    serialD[0]='\0';
    deviceD[0]='\0';
    filesysD[0]='\0';
    while ((!feof(fd))&& (!chaine_contient(enr,"[")))
    {
      if (chaine_contient(enr,"\"Path\" ="))
      {
        for (i=10;i<strlen(enr);i++) pathD[i-10]=enr[i];
        pathD[i-12]='\0';
      }
      if (chaine_contient(enr,"\"Label\" ="))
      {
        for (i=11;i<strlen(enr);i++) labelD[i-11]=enr[i];
        labelD[i-13]='\0';
      }
      if (chaine_contient(enr,"\"Serial\" ="))
      {
        for (i=12;i<strlen(enr);i++) serialD[i-12]=enr[i];
        serialD[i-14]='\0';
      }
      if (chaine_contient(enr,"\"Filesystem\" ="))
      {
        for (i=16;i<strlen(enr);i++) filesysD[i-16]=enr[i];
        filesysD[i-18]='\0';
      }
      if (chaine_contient(enr,"\"Type\" ="))
      {
        for (i=10;i<strlen(enr);i++) typeD[i-10]=enr[i];
        typeD[i-12]='\0';
      }
      if (chaine_contient(enr,"\"Device\" ="))
      {
        for (i=12;i<strlen(enr);i++) deviceD[i-12]=enr[i];
        deviceD[i-14]='\0';
      }
      fgets(enr, 512, fd);
    }
    fclose(fd);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_DRIVE")),nomD);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_NAME")),labelD);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_PATH")),pathD);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_SERIAL")),serialD);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_FILESYSTEM")),filesysD);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_TYPE")),typeD);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_DEVICE")),deviceD);
    Provenance=0;
    gtk_widget_show(W_DRIVE_CFG);
  }  
  else gtk_widget_show(ERR_DRIVE_SEL);
}

void
on_bt_drive_del_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * liste;

  liste = GTK_CLIST(lookup_widget(W_GEST_DRIVE,"TAB_DRIVE"));
  if (liste->selection!=NULL) 
  {
    gtk_widget_show(WARN_DRIVE_DEL);      
  }
  else gtk_widget_show(ERR_DRIVE_SEL);
}
