/****************************************************************************/
/* w_log.c    : Gestion des évènements sur la fenêtre W_LOG                 */
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
/* on_w_log_destroy : revenir sur la fenêtre W_XWINE                        */
/****************************************************************************/
void
on_w_log_destroy                       (GtkObject       *object,
                                        gpointer         user_data)
{
  W_LOG=create_W_LOG();
}

/****************************************************************************/
/* on_bt_log_imprime_clicked : imprimer le fichier log                      */
/****************************************************************************/
void
on_bt_log_imprime_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  strcpy(Commande,"cat ");
  strcat(Commande,FichierLog);
  //strcat(Commande," | lp &");
  //else if (system("which lpr >/dev/null 2>/dev/null")!=0) strcat(Commande," | lpr &");
  strcat(Commande," >/dev/lp0 2>/dev/null &");
  system(Commande);
}

/****************************************************************************/
/* on_bt_log_clear_clicked : effacer le fichier log                         */
/****************************************************************************/
void
on_bt_log_clear_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
  strcpy(Commande,"rm -f ");
  strcat(Commande,FichierLog);
  strcat(Commande," 2>/dev/null");
  system(Commande);
  ecrire_dans_log(texte[205],"");
  gtk_widget_destroy(W_LOG);
}
