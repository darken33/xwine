/****************************************************************************/
/* w_wine_version.c : Gestion des évènements de W_WINE_VERSION              */
/* Auteur           : Philippe BOUSQUET                                     */
/* Modifié le       : 05/02/2003                                            */
/* Crée le          : 05/02/2003                                            */
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
/* EVENEMENTS DE LA FENETRE W_WINE_VERSION                                  */
/****************************************************************************/
void
on_w_wine_version_destroy              (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_VERSION=create_W_WINE_VERSION();
}

void
on_chk_wine_msdos_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) EmuleMsDos=!EmuleMsDos;
}

void
on_bt_wine_version_ok_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  int findit=0;
  char enr[512];
  char strf[512];
  char enr2[512];
  char ftemp[512];
  strcpy(strf,"[Version]");
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
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
      strcpy(enr2,"\"Windows\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_VERSION,"E_VERSION"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      if (EmuleMsDos) fputs("\"DOS\" = \"6.22\"\n",fo);
    }
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  if (!findit)
  {
      fputs(strf,fo);
      strcpy(enr2,"\"Windows\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_VERSION,"E_VERSION"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      if (EmuleMsDos) fputs("\"DOS\" = \"6.22\"\n",fo);
  }
  fclose(fd);
  fclose(fo);
  /* Recopier le Fichier Config */
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
  ecrire_dans_log(texte[178],texte[194]);
  gtk_widget_destroy(W_WINE_VERSION);
}
