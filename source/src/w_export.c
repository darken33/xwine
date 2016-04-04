/****************************************************************************/
/* w_gest_app.c  : Gestion des évènements de W_EXPORT                       */
/* Auteur        : Philippe BOUSQUET                                        */
/* Modifié le    : 05/08/2003                                               */
/* Crée le       : 05/08/2003                                               */
/*==========================================================================*/
/*                                                                          */
/* Ce fichier permet la gestion des évènements de W_EXPORT                  */
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
/* EVENEMENTS DE LA FENETRE W_EXPORT                                        */
/****************************************************************************/
void
on_w_export_destroy                    (GtkObject       *object,
                                        gpointer         user_data)
{
   W_EXPORT = create_W_EXPORT();
   ExportConfig=0;  
   ExportProgs=0;     
}


void
on_chk_export_config_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
  ExportConfig=!ExportConfig;  
}


void
on_chk_export_programs_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
  ExportProgs=!ExportProgs;  
}


void
on_bt_ok_export_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
   if (ExportConfig)
   {
      system("cp -f ~/.wine/config /etc/wine/");
      system("chmod 666 /etc/wine/config");
      ecrire_dans_log(texte[215],texte[216]);
   }
   if (ExportProgs)
   {
      DIR * DirPg;
      struct dirent * FicPg;
      char commande [512];
      DirPg=opendir(AppsDir);
      FicPg=readdir(DirPg);
      while (FicPg != NULL)
      {
        if (FicPg->d_type==8)
        {
          strcpy(commande,"cp -f ");      
          strcat(commande,AppsDir);      
          strcat(commande,"/");      
          strcat(commande,FicPg->d_name);
          strcat(commande," /etc/xwine/apps/");      
          system(commande);
          strcpy(commande,"chmod 666 /etc/xwine/apps/");      
          strcat(commande,FicPg->d_name);
          system(commande);
          strcpy(lstProg[nbProg],FicPg->d_name);
          nbProg++;
        }
        FicPg=readdir(DirPg);
      }
      closedir(DirPg);
      ecrire_dans_log(texte[215],texte[217]);
      if (nbProg>0)
      {
        crProg=0;
        strcpy(Programme,lstProg[crProg]);
        gtk_window_set_title(GTK_WINDOW(W_MENU),Programme);
        gtk_widget_show(W_MENU);
      }  
   }
   gtk_widget_hide(W_EXPORT);
}


void
on_bt_annul_export_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
   gtk_widget_hide(W_EXPORT);
}