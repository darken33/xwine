/****************************************************************************/
/* w_parcour_exe : Gestion des évènements sur la fenêtre W_PARCOUR_EXE      */
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
/* GESTION DES EVENEMENTS DE W_PARCOUR_EXE                                  */
/****************************************************************************/
void
on_w_parcour_exe_destroy               (GtkObject       *object,
                                        gpointer         user_data)
{
  W_PARCOUR_EXE=create_W_PARCOUR_EXE();
}


void
on_bt_parcour_exe_ok_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
  char fichier [512];
  strcpy(fichier,gtk_file_selection_get_filename(GTK_FILE_SELECTION(W_PARCOUR_EXE)));
  fichier_seul(fichier);
  if (strcmp(FichierSeul,"\0")!=0)
  {
    if (Provenance==1)
    {
//      gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_EXECUTER,"E_EXEC_PROG")),fichier);
      gtk_entry_set_text(GTK_ENTRY(gnome_entry_gtk_entry(lookup_widget(W_EXECUTER,"CB_EXEC_PROG"))),fichier);
    }
    else
    {
      gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG")),fichier);
    }
    gtk_widget_hide(W_PARCOUR_EXE);
  }
}

