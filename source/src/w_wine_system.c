/****************************************************************************/
/* w_wine_system.c : Gestion des évènements de W_WINE_SYSTEM                */
/* Auteur          : Philippe BOUSQUET                                      */
/* Modifié le      : 05/02/2003                                             */
/* Crée le         : 05/02/2003                                             */
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
/* EVENEMENTS DE LA FENETRE W_WINE_SYSTEM                                   */
/****************************************************************************/
void
on_w_wine_system_destroy               (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_SYSTEM=create_W_WINE_SYSTEM();
}

void
on_bt_system_ok_clicked                (GtkButton       *button,
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
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,"[wine]"))
    {
      find=1;
      fputs(enr,fo);
      strcpy(enr2,"\"Windows\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_WINDOWS"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"System\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_SYSTEM"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Temp\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_TEMP"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Profile\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_PROFILE"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"Path\" = \"");
      strcat(enr2,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_PATH"))));
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"GraphicsDriver\" = \"x11drv\"\n");
      fputs(enr2,fo);
      strcpy(enr2,";\"ShowDirSymlinks\" = \"1\"\n");
      fputs(enr2,fo);      
      strcpy(enr2,"\"ShellLinker\" = \"wineshelllink\"\n\n");
      fputs(enr2,fo);
      strcpy(enr2,"\"SymbolTableFile\" = \"wine.sym\"\n\n");
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"#")) find=0;
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
  ecrire_dans_log(texte[178],texte[193]);
  gtk_widget_hide(W_WINE_SYSTEM);
}