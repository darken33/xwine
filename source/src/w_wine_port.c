/****************************************************************************/
/* w_wine_port.c : Gestion des évènements de W_WINE_PORT                    */
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
/* EVENEMENTS DE LA FENETRE W_WINE_PORT                                     */
/****************************************************************************/
void
on_w_wine_port_destroy                 (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_PORT=create_W_WINE_PORT();
}

void
on_bt_wine_port_ok_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  char enr[512];
  char enr2[512];
  char ftemp[512];
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
  /* Ports Séries */
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,"[serialports]"))
    {
      find=1;
      fputs(enr,fo);
      strcpy(enr2,"\"Com1\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_COM1"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Com2\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_COM2"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Com3\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_COM3"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Com4\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_COM4"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"#") || chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  fclose(fd);
  fclose(fo);
  // Ports Parallèles
  fo=fopen(FichierConfig,"wt");
  fd=fopen(ftemp,"rt");
  find=0;
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,"[parallelports]"))
    {
      find=1;
      fputs(enr,fo);
      strcpy(enr2,"\"Lpt1\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPT1"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Lpt2\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPT2"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Lpt3\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPT3"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Lpt4\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPT4"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"#") || chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  fclose(fd);
  fclose(fo);
  // Imprimantes
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  find=0;
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,"[spooler]"))
    {
      find=1;
      fputs(enr,fo);
      strcpy(enr2,"\"LPT1:\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPR1"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"LPT2:\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPR2"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"LPT3:\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPR3"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"LPT4:\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPR4"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"#") || chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  fclose(fd);
  fclose(fo);
  /* Recopier le fichier Config */
  fd=fopen(FichierConfig,"wt");
  fo=fopen(ftemp,"rt");
  fgets(enr, 512, fo);
  while (!feof(fo))
  {
    fputs(enr,fd);
    fgets(enr, 512, fo);
  }
  fclose(fd);
  fclose(fo);
  ecrire_dans_log(texte[178],texte[191]);
  gtk_widget_destroy(W_WINE_PORT);
}