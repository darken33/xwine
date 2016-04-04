/****************************************************************************/
/* w_app_dll  : Gestion des évènements de W_APP_DLL                         */
/* Auteur     : Philippe BOUSQUET                                           */
/* Modifié le : 05/02/2003                                                  */
/* Crée le    : 05/02/2003                                                  */
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
/* EVENEMENTS DE LA FENETRE W_APP_DLL                                       */
/****************************************************************************/
void
on_w_app_dll_destroy                   (GtkObject       *object,
                                        gpointer         user_data)
{
  W_APP_DLL=create_W_APP_DLL();
}

void
on_tab_app_dll_select_row              (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data)
{
  SelectRow=row;
  SelectCol=column;
}

void
on_bt_app_dll_new_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  gtk_entry_set_editable(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_DLL")),1);
  Provenance=3;
  gtk_widget_show(W_DLL_OVERRIDE);
}

void
on_bt_app_dll_modify_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * Liste;
  char * Item;

  Liste = GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL"));
  if (Liste->selection!=NULL)
  {
    gtk_clist_get_text(GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL")),SelectRow,SelectCol,&Item);
    extract_dll(Item);
    Provenance=2;
    gtk_entry_set_editable(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_DLL")),0);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_DLL")),NomDll);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_OVERRIDE")),OverrideDll);
    gtk_widget_show(W_DLL_OVERRIDE);
  }
  else gtk_widget_show(ERR_DLL_SEL);
}

void
on_bt_app_dll_del_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * Liste;

  Liste = GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL"));
  if (Liste->selection!=NULL)
  {
    gtk_clist_remove(GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL")),SelectRow);
  }
  else gtk_widget_show(ERR_DLL_SEL);
}

void
on_bt_app_dll_ok_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  int findit=0;
  char enr[512];
  char Prg[512];
  char strf[512];
  char enr2[512];
  char ftemp[512];
  int i;
  char * item;
  GtkCList * Liste;

  Liste = GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL"));
  strcpy(Prg,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG"))));
  fichier_seul(Prg);
  strcpy(strf,"[AppDefaults\\\\");
  strcat(strf,FichierSeul);
  strcat(strf,"\\\\DllOverrides]");
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
  // Les DLL overrides
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,strf))
    {
      find=1;
      findit=1;
      fputs(enr,fo);
      for (i=0;i<Liste->rows;i++)
      {
        gtk_clist_get_text(GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL")),i,0,&item);
        extract_dll(item);
        strcpy(enr2,"\"");
        strcat(enr2,NomDll);
        strcat(enr2,"\" = \"");
        strcat(enr2,OverrideDll);
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
  if (!findit)
  {
    find=1;
    findit=1;
    fputs(strf,fo);
    fputs("\n",fo);
    for (i=0;i<Liste->rows;i++)
    {
      gtk_clist_get_text(GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL")),i,0,&item);
      extract_dll(item);
      strcpy(enr2,"\"");
      strcat(enr2,NomDll);
      strcat(enr2,"\" = \"");
      strcat(enr2,OverrideDll);
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
    }
    strcpy(enr2,"\n");
    fputs(enr2,fo);
  }
  fclose(fd);
  fclose(fo);
  /* Recopie du fichier de config */
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
  gtk_widget_destroy(W_APP_DLL);
}
