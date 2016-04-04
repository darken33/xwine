/****************************************************************************/
/* w_wine_media.c : Gestion des évènements de W_WINE_MEDIA                  */
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
/* EVENEMENTS DE LA FENETRE W_WINE_MEDIA                                    */
/****************************************************************************/
void
on_w_wine_media_destroy                (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_MEDIA=create_W_WINE_MEDIA();
}

void
on_bt_wine_media_ok_clicked            (GtkButton       *button,
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
  strcpy(strf,"[WinMM]");
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
      strcpy(enr2,"\"Drivers\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_DRIVER"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"WaveMapper\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_WAVE"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"MidiMapper\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_MIDI"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  if (!findit)
  {
      fputs(strf,fo);
      strcpy(enr2,"\"Drivers\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_DRIVER"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"WaveMapper\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_WAVE"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"MidiMapper\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_MIDI"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
  }
  fclose(fd);
  fclose(fo);
  /* Recopie du fichier Config */
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
  ecrire_dans_log(texte[178],texte[190]);
  gtk_widget_destroy(W_WINE_MEDIA);
}