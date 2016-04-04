/****************************************************************************/
/* w_dll_gest.c  : Gestion des évènements de W_GEST_APP                     */
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
/* EVENEMENTS DE LA FENETRE W_DLL_GEST                                      */
/****************************************************************************/
void
on_w_dll_gest_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
  W_DLL_GEST=create_W_DLL_GEST();
}

void
on_tab_override_select_row             (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data)
{
  SelectRow=row;
  SelectCol=column;
}

void
on_bt_dll_gest_new_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  gtk_entry_set_editable(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_DLL")),1);
  Provenance=1;
  gtk_widget_show(W_DLL_OVERRIDE);

}

void
on_bt_dll_gest_modify_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * Liste;
  char * Item;

  Liste = GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE"));
  if (Liste->selection!=NULL)
  {
    gtk_clist_get_text(GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE")),SelectRow,SelectCol,&Item);
    extract_dll(Item);
    Provenance=0;
    gtk_entry_set_editable(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_DLL")),0);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_DLL")),NomDll);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_OVERRIDE")),OverrideDll);
    gtk_widget_show(W_DLL_OVERRIDE);
  }
  else gtk_widget_show(ERR_DLL_SEL);
}

void
on_bt_dll_gest_del_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * Liste;

  Liste = GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE"));
  if (Liste->selection!=NULL)
  {
    gtk_clist_remove(GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE")),SelectRow);
  }
  else gtk_widget_show(ERR_DLL_SEL);
}

void
on_dll_gest_ok_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  char enr[512];
  char enr2[512];
  char ftemp[512];
  int i;
  char * item;
  GtkCList * Liste=GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE"));
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
  // Les DLL defaults
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,"[DllDefaults]"))
    {
      find=1;
      fputs(enr,fo);
      strcpy(enr2,"\"DefaultLoadOrder\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"; \"EXTRA_LD_LIBRARY_PATH\" = \"${HOME}/wine/cvs/lib\"\n\n");
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  fclose(fd);
  fclose(fo);
  /* Recopier le fichier de config */
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
  // Les DLL overrides
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,"[DllOverrides]"))
    {
      find=1;
      fputs(enr,fo);
      for (i=0;i<Liste->rows;i++)
      {
        gtk_clist_get_text(GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE")),i,0,&item);
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
  ecrire_dans_log(texte[178],texte[179]);
  gtk_widget_destroy(W_DLL_GEST);
}