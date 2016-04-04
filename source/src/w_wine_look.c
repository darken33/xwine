/****************************************************************************/
/* w_wine_look.c : Gestion des évènements de W_WINE_LOOK                    */
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
/* EVENEMENTS DE LA FENETRE W_WINE_LOOK                                     */
/****************************************************************************/
extern void
on_w_wine_look_destroy                 (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_LOOK=create_W_WINE_LOOK();
}

extern void
on_bt_wine_look_ok_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  char enr[512];
  char enr2[512];
  char ftemp[512];
  char style[50];
  int i;
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
  /* Le Look */
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,"[Tweak.Layout]"))
    {
      find=1;
      fputs(enr,fo);
      strcpy(enr2,"\"WineLook\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_LOOK"))));
      strcat(enr2,"\"\n\n");
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  fclose(fd);
  fclose(fo);
  /* Les Polices */
  fo=fopen(FichierConfig,"wt");
  fd=fopen(ftemp,"rt");
  fgets(enr, 512, fd);
  find=0;
  i=0;
  while (!feof(fd))
  {
    if ((chaine_contient(enr,"[Tweak.Fonts]"))||((chaine_contient(enr,"# </wineconf>"))&&(i==0)))
    {
      find=1;
      i=1;
      fputs("[Tweak.Fonts]\n",fo);
      /* System */
      sprintf(enr2,"\"System.Height\" = \"%d\"\n",gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_SYSTEM"))));
      fputs(enr2,fo);
      strcpy(style, gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_STYLE"))));
      fputs("\"System.StrikeOut\" = \"false\"\n",fo);
      if (strcmp(style,"Gras")==0) fputs("\"System.Bold\" = \"true\"\n",fo);
      else fputs("\"System.Bold\" = \"false\"\n",fo);
      if (strcmp(style,"Italique")==0) fputs("\"System.Italic\" = \"true\"\n",fo);
      else fputs("\"System.Italic\" = \"false\"\n",fo);
      if (strcmp(style,"Souligné")==0) fputs("\"System.Underline\" = \"true\"\n",fo);
      else fputs("\"System.Underline\" = \"false\"\n",fo);

      /* SystemFixed */
      sprintf(enr2,"\"SystemFixed.Height\" = \"%d\"\n",gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_SYSTEM_FIX"))));
      fputs(enr2,fo);
      strcpy(style, gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_FIX_STYLE"))));
      fputs("\"SystemFixed.StrikeOut\" = \"false\"\n",fo);
      if (strcmp(style,"Gras")==0) fputs("\"SystemFixed.Bold\" = \"true\"\n",fo);
      else fputs("\"SystemFixed.Bold\" = \"false\"\n",fo);
      if (strcmp(style,"Italique")==0) fputs("\"SystemFixed.Italic\" = \"true\"\n",fo);
      else fputs("\"SystemFixed.Italic\" = \"false\"\n",fo);
      if (strcmp(style,"Souligné")==0) fputs("\"SystemFixed.Underline\" = \"true\"\n",fo);
      else fputs("\"SystemFixed.Underline\" = \"false\"\n",fo);

      /* OEM */
      sprintf(enr2,"\"OEMFixed.Height\" = \"%d\"\n",gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_OEM_FIX"))));
      fputs(enr2,fo);
      strcpy(style, gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_OEM_FIX_STYLE"))));
      fputs("\"OEMFixed.StrikeOut\" = \"false\"\n",fo);
      if (strcmp(style,"Gras")==0) fputs("\"OEMFixed.Bold\" = \"true\"\n",fo);
      else fputs("\"OEMFixed.Bold\" = \"false\"\n",fo);
      if (strcmp(style,"Italique")==0) fputs("\"OEMFixed.Italic\" = \"true\"\n",fo);
      else fputs("\"OEMFixed.Italic\" = \"false\"\n",fo);
      if (strcmp(style,"Souligné")==0) fputs("\"OEMFixed.Underline\" = \"true\"\n",fo);
      else fputs("\"OEMFixed.Underline\" = \"false\"\n",fo);

      /* AnsiFixed */
      sprintf(enr2,"\"AnsiFixed.Height\" = \"%d\"\n",gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_ANSI_FIX"))));
      fputs(enr2,fo);
      strcpy(style, gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_FIX_STYLE"))));
      fputs("\"AnsiFixed.StrikeOut\" = \"false\"\n",fo);
      if (strcmp(style,"Gras")==0) fputs("\"AnsiFixed.Bold\" = \"true\"\n",fo);
      else fputs("\"AnsiFixed.Bold\" = \"false\"\n",fo);
      if (strcmp(style,"Italique")==0) fputs("\"AnsiFixed.Italic\" = \"true\"\n",fo);
      else fputs("\"AnsiFixed.Italic\" = \"false\"\n",fo);
      if (strcmp(style,"Souligné")==0) fputs("\"AnsiFixed.Underline\" = \"true\"\n",fo);
      else fputs("\"AnsiFixed.Underline\" = \"false\"\n",fo);

      /* Ansi */
      sprintf(enr2,"\"Ansi.Height\" = \"%d\"\n",gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_ANSI"))));
      fputs(enr2,fo);
      strcpy(style, gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_STYLE"))));
      fputs("\"Ansi.StrikeOut\" = \"false\"\n",fo);
      if (strcmp(style,"Gras")==0) fputs("\"Ansi.Bold\" = \"true\"\n",fo);
      else fputs("\"Ansi.Bold\" = \"false\"\n",fo);
      if (strcmp(style,"Italique")==0) fputs("\"Ansi.Italic\" = \"true\"\n",fo);
      else fputs("\"Ansi.Italic\" = \"false\"\n",fo);
      if (strcmp(style,"Souligné")==0) fputs("\"Ansi.Underline\" = \"true\"\n",fo);
      else fputs("\"Ansi.Underline\" = \"false\"\n",fo);

      if (chaine_contient(enr,"# </wineconf>")) find=0;
    }
    else if ((chaine_contient(enr,"["))||((chaine_contient(enr,"# </wine>")))) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  fclose(fd);
  fclose(fo);
  ecrire_dans_log(texte[178],texte[189]);
  gtk_widget_destroy(W_WINE_LOOK);
}