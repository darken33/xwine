/****************************************************************************/
/* w_gest_app.c  : Gestion des évènements de W_EDITEUR                      */
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
/* EVENEMENTS DE LA FENETRE W_EDITEUR                                       */
/****************************************************************************/
void
on_w_editeur_destroy                   (GtkObject       *object,
                                        gpointer         user_data)
{
  W_EDITEUR=create_W_EDITEUR();
}

void
on_m_edit_new_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
    int nbc;
    nbc=gtk_text_get_length(GTK_TEXT(lookup_widget(W_EDITEUR,"TXT_EDIT")));
    gtk_text_backward_delete(GTK_TEXT(lookup_widget(W_EDITEUR,"TXT_EDIT")),nbc);
    gtk_text_forward_delete(GTK_TEXT(lookup_widget(W_EDITEUR,"TXT_EDIT")),nbc);
}

void
on_m_edit_open_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
    Provenance=0;
    gtk_widget_show(W_EDIT_FILE_SELEC);  
}

void
on_m_edit_save_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
    Provenance=1;
    gtk_widget_show(W_EDIT_FILE_SELEC);  
}

void
on_m_edit_print_activate               (GtkMenuItem     *menuitem,
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

          cfgtext=GTK_TEXT(lookup_widget(W_EDITEUR,"TXT_EDIT"));
          tlen=cfgtext->text_end - cfgtext->gap_size;
          ficcfg=fopen("/tmp/temporaire","wt");
          while (end==0)
          {
	      if (tlen<256) pend=pos+tlen;
	      else pend=pos+256;
              tlen-=256;
              if (tlen<0) tlen=0;
              strcpy(enr,gtk_editable_get_chars(&cfgtext->editable,pos,pend));
              nb=strlen(enr);
              fwrite(enr,sizeof(char),nb,ficcfg);
              if (nb<256) end=1;
              pos+=256;
              passage++;
          }
          fclose(ficcfg);
          system("cat /tmp/temporaire | lp &");
          system("rm -f /tmp/temporaire");          
}

void
on_m_edit_quit_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
    gtk_widget_show(WARN_EDIT_QUIT);
}
