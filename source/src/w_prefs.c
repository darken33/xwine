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
#include <dirent.h>
#include <sys/stat.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "donnees.h"
#include "commun.h"


/****************************************************************************/
/* EVENEMENTS DE LA FENETRE W_CONFIG                                        */
/****************************************************************************/
void
on_w_prefs_destroy                    (GtkObject       *object,
                                        gpointer         user_data)
{
  FILE *fd;
  char pixmap[512];
  char taille[512];
  char langue[512];
  char ListeLangue[255][255];
  W_PREFS=create_W_PREFS();
  fd=fopen(FichierPref,"rt");
  if (fd!=NULL)
  {
    fgets(pixmap, 512, fd);
    fgets(taille, 512, fd);
    fgets(langue, 512, fd);
    fclose(fd);
  }
  else
  {
    strcpy(pixmap,"/usr/share/pixmaps/xwine/background/XWine_standard_bkg.png\n");
    strcpy(taille,"800x600\n");
    strcpy(langue,"lang.");
    strcat(langue,Langue);
    strcat(langue,".xml");
    char fichier[512];
    strcpy(fichier,LangDir);
    strcat(fichier,"/");
    strcat(fichier,langue);
    fd=fopen(fichier,"rt");
    if (fd==NULL) strcpy(langue,"lang.en.xml");
    else fclose(fd);
    strcat(langue,"\n");
  }
  pixmap[strlen(pixmap)-1]='\0';
  taille[strlen(taille)-1]='\0';  
  langue[strlen(langue)-1]='\0';  
    
  // Lire le répertoire des langues
  DIR * DirPg;
  struct dirent * FicPg;
  int NbLg=0;
  DirPg=opendir(LangDir);
  FicPg=readdir(DirPg);
  while (FicPg != NULL)
  {
    if (FicPg->d_type==8)
    {
      strcpy(ListeLangue[NbLg],FicPg->d_name);     
      NbLg++;
    }
    FicPg=readdir(DirPg);
  }
  closedir(DirPg);

  // Ajouter l'élément dans la liste
  int i;
  for(i=0;i<NbLg;i++)
  {
    if (strcmp(ListeLangue[i],"\0")!=0)
    {
      gnome_entry_append_history(GNOME_ENTRY(lookup_widget(W_PREFS,"CB_LANGUE")),i,ListeLangue[i]);
    }
  }
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_PREFS,"E_WINDOW")),taille);
  gtk_entry_set_text(GTK_ENTRY(gnome_file_entry_gtk_entry(lookup_widget(W_PREFS,"EF_BACKGROUND"))),pixmap);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_PREFS,"E_LANGUE")),langue);
  gnome_file_entry_set_default_path(lookup_widget(W_PREFS,"EF_BACKGROUND"),"/usr/share/pixmaps/xwine/background");
}


void
on_bt_prefs_ok_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  char pixmap[512];
  char taille[512];      
  char langue[512];      
  strcpy(taille,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_PREFS,"E_WINDOW"))));
  strcpy(pixmap,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_PREFS,"E_BACKGROUND"))));
  strcpy(langue,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_PREFS,"E_LANGUE"))));
  if (strlen(pixmap)<3) strcpy(pixmap,"/usr/share/pixmaps/xwine/background/XWine_standard_bkg.png");
  if (strcmp(taille,"1024x768")==0)
  {
    gnome_pixmap_load_file_at_size(lookup_widget(W_XWINE,"IMG_XWINE"),pixmap,1024,768);
    gtk_widget_set_usize(lookup_widget(W_XWINE,"IMG_XWINE"),1024,728);
  }
  else if (strcmp(taille,"800x600")==0)
  {
    gnome_pixmap_load_file_at_size(lookup_widget(W_XWINE,"IMG_XWINE"),pixmap,800,560);
    gtk_widget_set_usize(lookup_widget(W_XWINE,"IMG_XWINE"),800,560);
  }
  else 
  {
    gnome_pixmap_load_file_at_size(lookup_widget(W_XWINE,"IMG_XWINE"),pixmap,640,440);
    gtk_widget_set_usize(lookup_widget(W_XWINE,"IMG_XWINE"),640,440);
  }
  fd=fopen(FichierPref,"wt");
  strcat(pixmap,"\n");      
  strcat(taille,"\n");      
  strcat(langue,"\n");      
  fputs(pixmap, fd);
  fputs(taille, fd);
  fputs(langue, fd);
  fclose(fd);           
  gtk_widget_destroy(W_PREFS);
}

void
on_bt_prefs_annul_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  gtk_widget_destroy(W_PREFS);
}

void
on_e_background_changed                (GtkEditable     *editable,
                                        gpointer         user_data)
{
  char pixmap[512];
  strcpy(pixmap,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_PREFS,"E_BACKGROUND"))));
  gnome_pixmap_load_file_at_size(lookup_widget(W_PREFS,"IMG_BACK"),pixmap,160,120);
  gtk_widget_set_usize(lookup_widget(W_PREFS,"IMG_BACK"),160,120);
}
