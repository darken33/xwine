/****************************************************************************/
/* w_quitter.c : Gestion des évènements sur la fenêtre W_QUITTER            */
/* Auteur      : Philippe BOUSQUET                                          */
/* Modifié le  : 05/02/2003                                                 */
/* Crée le     : 05/02/2003                                                 */
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
/* on_w_quitter_destroy : revenir sur la fenêtre W_XWINE                    */
/****************************************************************************/
void
on_w_quitter_destroy                   (GtkObject       *object,
                                        gpointer         user_data)
{
  W_QUITTER=create_W_QUITTER();
}


/****************************************************************************/
/* on_rb_del_log_toggled : le fichier log est à supprimer                   */
/****************************************************************************/
void
on_rb_del_log_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
  DeleteLog=1;
}


/****************************************************************************/
/* on_rb_del_log_toggled : le fichier log est à conserver                   */
/****************************************************************************/
void
on_rb_keep_log_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
  DeleteLog=0;
}


/****************************************************************************/
/* on_bt_quitter_ok_clicked : on quitte XWine                               */
/****************************************************************************/
void
on_bt_quitter_ok_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE *fd;
  int i=0;
  ecrire_dans_log(texte[186],"\0");
  if (DeleteLog)
  {
    strcpy(Commande,"> ");
    strcat(Commande,FichierLog);
    system(Commande);
  }
  fd=fopen(FichierHisto,"wt");
  if (fd!=NULL)
  {
    for (i=0;i<10;i++)
    {
      strcat(LHistorique[i],"\n");
      fputs(LHistorique[i], fd);
    }
    fclose(fd);
  }  
  gtk_main_quit();
}
