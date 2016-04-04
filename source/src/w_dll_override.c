/****************************************************************************/
/* w_gest_app.c  : Gestion des évènements de W_GEST_APP                     */
/* Auteur        : Philippe BOUSQUET                                        */
/* Modifié le    : 05/02/2003                                               */
/* Crée le       : 05/02/2003                                               */
/*==========================================================================*/
/*                                                                          */
/* Ce fichier permet la gestion des évènements de W_GEST_APP                */
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
/* EVENEMENTS DE LA FENETRE W_DLL_OVERRIDE                                  */
/****************************************************************************/
void
on_w_dll_override_destroy              (GtkObject       *object,
                                        gpointer         user_data)
{
  W_DLL_OVERRIDE=create_W_DLL_OVERRIDE();
}

void
on_bt_dll_override_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  char dll[512];
  char * item;
  strcpy(dll,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_DLL"))));
  if (strlen(dll)>0)
  {
    strcat(dll," = ");
    strcat(dll,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_DLL_OVERRIDE,"E_OVERRIDE"))));
    item=dll;
    /* Ajout d'une DLL dans W_APP_DLL */
    if (Provenance==3)
    {
      gtk_clist_append(GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL")),&item);
    }
    /* Mise à jour d'une DLL dans W_APP_DLL */
    else if (Provenance==2)
    {
      gtk_clist_set_text(GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL")),SelectRow,SelectCol,item);
    }
    /* Ajout d'une DLL dans W_DLL_GEST */
    else if (Provenance==1)
    {
      gtk_clist_append(GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE")),&item);
    }
    /* Mise à jour d'une DLL dans W_DLL_GEST */
    else gtk_clist_set_text(GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE")),SelectRow,SelectCol,item);
    gtk_widget_destroy(W_DLL_OVERRIDE);
  }
  else gtk_widget_show(ERR_DLL_NAME);
}
