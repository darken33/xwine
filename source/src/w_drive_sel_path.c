/****************************************************************************/
/* w_gest_app.c  : Gestion des évènements de W_DRIVE_SEL_PATH               */
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
/* EVENEMENTS DE LA FENETRE W_DRIVE_SEL_PATH                                */
/****************************************************************************/
void
on_w_drive_sel_path_destroy            (GtkObject       *object,
                                        gpointer         user_data)
{
  W_DRIVE_SEL_PATH=create_W_DRIVE_SEL_PATH();
}

void
on_bt_sel_path_ok_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  char chemin[512];      
  strcpy(chemin,gtk_file_selection_get_filename(GTK_FILE_SELECTION(W_DRIVE_SEL_PATH)));
  fichier_seul(chemin);
  if (strlen(FichierSeul)>0)
  {
    gtk_widget_show(ERR_NOT_PATH);      
  }        
  else
  {
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DRIVE_CFG,"E_PATH")),chemin);
    gtk_widget_hide(W_DRIVE_SEL_PATH);
  }  
}
