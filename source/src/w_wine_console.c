/****************************************************************************/
/* w_wine_console.c : Gestion des évènements de W_WINE_CONSOLE              */
/* Auteur           : Philippe BOUSQUET                                     */
/* Modifié le       : 05/02/2003                                            */
/* Crée le          : 05/02/2003                                            */
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
/* EVENEMENTS DE LA FENETRE W_WINE_CONSOLE                                  */
/****************************************************************************/
void
on_w_wine_console_destroy              (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_CONSOLE=create_W_WINE_CONSOLE();
}

void
on_bt_wine_console_ok_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  int findit=0;
  char enr[512];
  char strf[512];
  char enr2[512];
  char mde[512];
  char taille[512];
  char ftemp[512];
  strcpy(strf,"[Console]");
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
  // Registry
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,strf))
    {
      find=1;
      findit=1;
      fputs(enr,fo);
      /* standard */
      fputs("\"Drivers\" = \"tty\"\n",fo);
      fputs("\"TerminalType\" = \"nxterm\"\n",fo);
      /* autres */
      strcpy(enr2,"\"XtermProg\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_CONSOLE,"E_PROGRAM"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(mde,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_CONSOLE,"E_WIDTH"))));
      strcpy(taille,"\0");
      taille[0]=mde[0];
      taille[1]=mde[1];
      taille[2]='\0';
      strcpy(enr2,"\"InitialColumns\" = \"");
      strcat(enr2,taille);
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(taille,"\0");
      taille[0]=mde[3];
      taille[1]=mde[4];
      taille[2]='\0';
      strcpy(enr2,"\"InitialRows\" = \"");
      strcat(enr2,taille);
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  if (!findit)
  {
      fputs(strf,fo);
      /* standard */
      fputs("\"Drivers\" = \"tty\"\n",fo);
      fputs("\"TerminalType\" = \"nxterm\"\n",fo);
      /* autres */
      strcpy(enr2,"\"XtermProg\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_CONSOLE,"E_PROGRAM"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(mde,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_CONSOLE,"E_WIDTH"))));
      strcpy(taille,"\0");
      taille[0]=mde[0];
      taille[1]=mde[1];
      taille[2]='\0';
      strcpy(enr2,"\"InitialColumns\" = \"");
      strcat(enr2,taille);
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(taille,"\0");
      taille[0]=mde[3];
      taille[1]=mde[4];
      taille[2]='\0';
      strcpy(enr2,"\"InitialRows\" = \"");
      strcat(enr2,taille);
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
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
  ecrire_dans_log(texte[178],texte[187]);
  gtk_widget_destroy(W_WINE_CONSOLE);
}