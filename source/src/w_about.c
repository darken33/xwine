/****************************************************************************/
/* w_about.c  : Gestion des évènements sur la fenêtre W_ABOUT               */
/* Auteur     : Philippe BOUSQUET                                           */
/* Modifié le : 05/02/2003                                                  */
/* Crée le    : 05/02/2003                                                  */
/*==========================================================================*/
/*                                                                          */
/* Ce fichier permet la gestion des évènements de la fenêtre W_ABOUT        */
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
/* on_w_about_destroy : revenir sur la fenêtre W_XWINE                      */
/****************************************************************************/
void
on_w_about_destroy                     (GtkObject       *object,
                                        gpointer         user_data)
{
  W_ABOUT=create_W_ABOUT();
}

