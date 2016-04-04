/****************************************************************************/
/* w_executer.c : Gestion des évènements sur la fenêtre W_EXECUTER          */
/* Auteur       : Philippe BOUSQUET                                         */
/* Modifié le   : 05/02/2003                                                */
/* Crée le      : 05/02/2003                                                */
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
/* on_w_executer_destroy : revenir sur la fenêtre W_XWINE                   */
/****************************************************************************/
void
on_w_executer_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
  int i;
  W_EXECUTER=create_W_EXECUTER();
  for(i=9;i>=0;i--)
  {
    if (strcmp(LHistorique[i],"\0")!=0)
    {
      gnome_entry_append_history(GNOME_ENTRY(lookup_widget(W_EXECUTER,"CB_EXEC_PROG")),i,LHistorique[i]);
    }
  }
}


/****************************************************************************/
/* on_bt_exec_parcour_clicked : on recherche une appli via W_PARCOUR_EXE    */
/****************************************************************************/
void
on_bt_exec_parcour_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  Provenance=1;
  gtk_widget_show(W_PARCOUR_EXE);
}


/****************************************************************************/
/* on_bt_exec_ok_clicked : on execute une application                       */
/****************************************************************************/
void
on_bt_exec_ok_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  char cm[512];
  char rep[512];
  int i;
  strcpy(Commande,"wine ");
  if (Debug==1)
  {
    strcat(Commande," --debugmsg warn+all,err+all");
  }
  strcat(Commande," \"");
  strcpy(cm,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_EXECUTER,"E_EXEC_PROG"))));
  if (strcmp(cm,"\0")==0) gtk_widget_show(ERR_PROG_EMPTY);
  else
  {
    strcat(Commande,cm);
    strcat(Commande,"\" 2>>");
    strcat(Commande,FichierLog);
    strcat(Commande," &");
    fichier_seul(cm);
    strcpy(Programme,FichierSeul);
    //changement de répertoire
    repertoire_seul(cm);
    strcpy(rep,RepertoireSeul);
    chdir(rep);
    ecrire_dans_log(texte[175],Programme);
    system(Commande);
    task(Programme);
    // mise à jour de l'historique
    for (i=8;i>=0;i--) strcpy(LHistorique[i+1],LHistorique[i]);
    strcpy(LHistorique[0],cm);
    gtk_widget_destroy(W_EXECUTER);
  }
}
