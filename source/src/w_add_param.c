/****************************************************************************/
/* w_add_param.c : Gestion des évènements de W_ADD_PARAM                    */
/* Auteur        : Philippe BOUSQUET                                        */
/* Modifié le    : 05/02/2003                                               */
/* Crée le       : 05/02/2003                                               */
/*==========================================================================*/
/*                                                                          */
/* Ce fichier permet la gestion des évènements de W_ADD_PARAM               */
/*                                                                          */
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
/* on_w_add_param_destroy : revenir sur la fenêtre W_XWINE                  */
/****************************************************************************/
void
on_w_add_param_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
  W_ADD_PARAM=create_W_ADD_PARAM();
  if (strlen(programToLaunch)>0) gtk_main_quit();
}

/****************************************************************************/
/* on_bt_param_ok_clicked : executer l'application avec des paramètres      */
/****************************************************************************/
void
on_bt_param_ok_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
  char Param [512];
  strcpy(Param,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_ADD_PARAM,"E_PARAM"))));
  strcat(Commande," -- ");
  strcat(Commande,Param);
  strcat(Commande," 2>>");
  strcat(Commande,FichierLog);
  strcat(Commande," &");
  gtk_widget_hide(W_ADD_PARAM);
  if (UseCd)
  {
    gtk_widget_show(INF_USE_CD);
  }
  else
  {
    system(Commande);
    ecrire_dans_log(texte[175],Programme);
    task(Programme);
    if (strlen(programToLaunch)>0) gtk_main_quit();
  }
}