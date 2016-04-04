/****************************************************************************/
/* w_about.c  : Gestion des �v�nements sur la fen�tre W_ABOUT               */
/* Auteur     : Philippe BOUSQUET                                           */
/* Modifi� le : 05/02/2003                                                  */
/* Cr�e le    : 05/02/2003                                                  */
/*==========================================================================*/
/*                                                                          */
/* Ce fichier permet la gestion des �v�nements de la fen�tre W_ABOUT        */
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
/* on_w_about_destroy : revenir sur la fen�tre W_XWINE                      */
/****************************************************************************/
void
on_w_about_destroy                     (GtkObject       *object,
                                        gpointer         user_data)
{
  W_ABOUT=create_W_ABOUT();
}

