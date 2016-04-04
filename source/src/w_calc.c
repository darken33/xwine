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
/* EVENEMENTS DE LA FENETRE W_CALC                                          */
/****************************************************************************/
void
on_w_calc_destroy                      (GtkObject       *object,
                                        gpointer         user_data)
{
  W_CALC=create_W_CALC();
}
