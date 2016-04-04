/****************************************************************************/
/* w_gest_app.c  : Gestion des évènements de W_EDIT_FILE_SELEC              */
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
/* EVENEMENTS DE LA FENETRE W_EDIT_FILE_SELEC                               */
/****************************************************************************/
void
on_w_edit_file_selec_destroy           (GtkObject       *object,
                                        gpointer         user_data)
{
  W_EDIT_FILE_SELEC=create_W_EDIT_FILE_SELEC();
}

void
on_bt_file_ok_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
   char nomfic [256];

    strcpy(nomfic,gtk_file_selection_get_filename(GTK_FILE_SELECTION(W_EDIT_FILE_SELEC)));
    fichier_seul(nomfic);
    if (strcmp(FichierSeul,"\0")!=0)
    {
      // on est en ouverture
      if (Provenance==0)
      {
          FILE * ficcfg; 
          int nb, nbc;
          char enr[512];
          nbc=gtk_text_get_length(GTK_TEXT(lookup_widget(W_EDITEUR,"TXT_EDIT")));
          gtk_text_backward_delete(GTK_TEXT(lookup_widget(W_EDITEUR,"TXT_EDIT")),nbc);
          gtk_text_forward_delete(GTK_TEXT(lookup_widget(W_EDITEUR,"TXT_EDIT")),nbc);
          ficcfg=fopen(nomfic,"rt");
          while (!feof(ficcfg))
          {
            nb=fread(enr,sizeof(char),512,ficcfg);
            gtk_text_insert(GTK_TEXT(lookup_widget(W_EDITEUR,"TXT_EDIT")),NULL,NULL,NULL,enr,nb);
          }
          gtk_widget_hide(W_EDIT_FILE_SELEC);
      }
      // on est en ecriture
      else
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
          ficcfg=fopen(nomfic,"wt");
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
          gtk_widget_hide(W_EDIT_FILE_SELEC);
      }
    }
}
