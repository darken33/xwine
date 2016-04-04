/****************************************************************************/
/* w_gest_app.c  : Gestion des évènements de W_GEST_APP                     */
/* Auteur        : Philippe BOUSQUET                                        */
/* Modifié le    : 05/02/2003                                               */
/* Crée le       : 05/02/2003                                               */
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

void
on_w_menu_destroy                      (GtkObject       *object,
                                        gpointer         user_data)
{
  W_MENU = create_W_MENU();
  gtk_clist_insert(GTK_CLIST(lookup_widget(W_MENU,"TAB_MENU")),0,"/");
  if (!constitue_menu("","/usr/share/applnk-mdk")) constitue_menu("","/usr/share/applnk");
    crProg++;
    if (crProg<nbProg)
    {        
      strcpy(Programme,lstProg[crProg]);
      gtk_window_set_title(GTK_WINDOW(W_MENU),Programme);
      gtk_widget_show(W_MENU);
    }  
}


void
on_bt_menu_ok_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * liste;
  char enr [512];
  char win [512];
  FILE * fd;
  DIR * dirp;
  struct dirent * fic;
  char * prog_1;
  char prog[512];
  int i=0;
  //int mode;
  char fichierIco[512];
  char exec[512];
  char Icon[512];
  char Name[512];
  char * Terminal="false";
  char * Type="Application";

    strcpy(prog,Programme);
    prog_1=prog;
    /* Recup des infos */
    strcpy(Programme,AppsDir);
    strcat(Programme,"/");
    strcat(Programme,prog);
    fd=fopen(Programme,"rt");
    //titre
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    strcpy(Name,enr);
    //executer
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    strcpy(exec,enr);
    //CD
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    //Parametres
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    // win ver
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    strcpy(win,enr);
    // msdos ver
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    EmuleMsDos=(strcmp(enr,"Oui\n")==0);
    // icone
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    strcpy(Icon,enr);
    fclose(fd);
    strcpy(Commande,"xwine ");
    strcat(Commande,exec);
    // ecrire le fichier KDE
    dirp=opendir("/usr/share/applnk-mdk");
    if (dirp==NULL) strcpy(fichierIco,"/usr/share/applnk");
    else strcpy(fichierIco,"/usr/share/applnk-mdk");
    fichier_seul(Programme);
    strcat(fichierIco,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_MENU,"E_MENU"))));
    strcat(fichierIco,"/");
    strcat(fichierIco,FichierSeul);
    strcat(fichierIco,".desktop");
    fd=fopen(fichierIco,"wt");
    fputs("[Desktop Entry]\n",fd);
    fputs("Exec=",fd);
    fputs(Commande,fd);
    fputs("\n",fd);
    fputs("Icon=",fd);
    fputs(Icon,fd);
    fputs("\n",fd);
    fputs("Name=",fd);
    fputs(Name,fd);
    fputs("\n",fd);
    fputs("Terminal=",fd);
    fputs(Terminal,fd);
    fputs("\n",fd);
    fputs("Type=",fd);
    fputs(Type,fd);
    fputs("\n",fd);
    fclose(fd);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_MENU,"E_MENU")),"");
    gtk_widget_hide(W_MENU);
    crProg++;
    if (crProg<nbProg)
    {        
      strcpy(Programme,lstProg[crProg]);
      gtk_window_set_title(GTK_WINDOW(W_MENU),Programme);
      gtk_widget_show(W_MENU);
    }  
}


void
on_bt_menu_ko_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_MENU,"E_MENU")),"");
    gtk_widget_hide(W_MENU);
    crProg++;
    if (crProg<nbProg)
    {        
      strcpy(Programme,lstProg[crProg]);
      gtk_window_set_title(GTK_WINDOW(W_MENU),Programme);
      gtk_widget_show(W_MENU);
    }  
}

void
on_tab_menu_select_row                 (GtkCList        *clist, gint             row, gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data)
{
  char **select;      
  gtk_clist_get_text(GTK_CLIST(lookup_widget(W_MENU,"TAB_MENU")),row,column,select);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_MENU,"E_MENU")),select[0]);

}