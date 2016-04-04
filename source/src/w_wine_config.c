/****************************************************************************/
/* w_wine_config : Gestion des évènements sur la fenêtre W_WINE_CONFIG      */
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
/* GESTION DES EVENEMENTS DE LA FENETRE W_WINE_CONFIG                       */
/****************************************************************************/
void
on_w_wine_config_destroy               (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_CONFIG=create_W_WINE_CONFIG();
}

void
on_bt_wine_config_ok_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkText * cfgtext;
  FILE * ficcfg;
  int pos=0;
  int pend=0;
  int end=0;
  int nb;
  char enr[256];
  int passage=1;
  int tlen;

  cfgtext=GTK_TEXT(lookup_widget(W_WINE_CONFIG,"TXT_WINE_CONFIG"));
  tlen=cfgtext->text_end - cfgtext->gap_size;

  ficcfg=fopen(FichierConfig,"wt");
  while (end==0)
  {
    if (tlen<256)
    {
      pend=pos+tlen;
      tlen=0;
    }
    else
    {
      pend=pos+256;
      tlen-=256;
    }
    strcpy(enr,gtk_editable_get_chars(&cfgtext->editable,pos,pend));
    nb=strlen(enr);
    fwrite(enr,sizeof(char),nb,ficcfg);
    if (nb<256) end=1;
    pos+=256;
    passage++;
  }
  fclose(ficcfg);
  ecrire_dans_log(texte[178],"");
  gtk_object_destroy(GTK_OBJECT(W_WINE_CONFIG));
}
