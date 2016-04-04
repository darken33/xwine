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


/****************************************************************************/
/* EVENEMENTS DE LA FENETRE W_GEST_APP                                      */
/****************************************************************************/
void
on_w_gest_app_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
  W_GEST_APP=create_W_GEST_APP();
  autorisations();
}

void
on_tab_app_select_row                  (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data)
{
  SelectRow=row;
  SelectCol=column;
}

void
on_bt_app_new_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  iProvenance=1;
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_TITRE_APP")),"");
  gtk_widget_set_sensitive(GTK_WIDGET(lookup_widget(W_INSTALL_APP,"E_PROG")),1);
  gtk_entry_set_editable(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG")),1);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG")),"");
  InitialiseCheck=0;
  UseCd=0;
  gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_INSTALL_APP,"CHK_USE_CD")),UseCd);
  NeedParam=0;
  gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_INSTALL_APP,"CHK_PARAM")),NeedParam);
  EmuleMsDos=0;
  gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_INSTALL_APP,"CHK_MSDOS")),EmuleMsDos);
  InitialiseCheck=1;
  gtk_widget_show(W_INSTALL_APP);
}

void
on_bt_app_modify_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * liste;
  char enr [512];
  FILE * fd;
  char * prog=NULL;
  DIR * dirp;
  struct dirent * fic;
  int i=0;

  liste = GTK_CLIST(lookup_widget(W_GEST_APP,"TAB_APP"));
  if (liste->selection==NULL) gtk_widget_show(ERR_PROG_SELECT);
  else
  {
    //rechercher le fichier
    dirp=opendir(AppsDir);
    fic=readdir(dirp);
    while (i <= SelectRow)
    {
      if (fic->d_type==8)
      {
        prog=(char *) malloc(strlen(fic->d_name));
	      strcpy(prog,fic->d_name);
	      i++;
      }
      fic=readdir(dirp);
    }
    closedir(dirp);
    InitialiseCheck=0;
    strcpy(Programme,AppsDir);
    strcat(Programme,"/");
    strcat(Programme,prog);
    fd=fopen(Programme,"rt");
    //titre
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_TITRE_APP")),enr);
    //executer
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG")),enr);
    //CD
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    UseCd=(strcmp(enr,"Oui\n")==0);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_INSTALL_APP,"CHK_USE_CD")),UseCd);
    //Parametres
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    NeedParam=(strcmp(enr,"Oui\n")==0);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_INSTALL_APP,"CHK_PARAM")),NeedParam);
    //Version de win
    strcpy(enr,"\0");
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    if (strlen(enr)>0) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_WINVER")),enr);
    //Emuler MS-Dos
    strcpy(enr,"\0");
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    EmuleMsDos=(strcmp(enr,"Oui\n")==0);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_INSTALL_APP,"CHK_MSDOS")),EmuleMsDos);
    //Icone
    strcpy(enr,"\0");
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    fichier_seul(enr);
    if (strlen(FichierSeul)>0)
    {
      strcpy(FichierIcone,enr);
    }
    else
    {
      strcpy(FichierIcone,"\0");
    }
    gnome_icon_entry_set_icon(lookup_widget(W_INSTALL_APP,"OBJ_ICONE_SEL"),FichierIcone);
    fclose(fd);
    InitialiseCheck=1;
    iProvenance=2;
    gtk_widget_set_sensitive(GTK_WIDGET(lookup_widget(W_INSTALL_APP,"BT_PARCOUR_PROG")),0);
    gtk_entry_set_editable(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG")),0);
    gtk_widget_show(W_INSTALL_APP);
  }
}

void
on_bt_app_del_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * liste;
  char * prog=NULL;
  DIR * dirp;
  struct dirent * fic;
  int i=0;

  liste = GTK_CLIST(lookup_widget(W_GEST_APP,"TAB_APP"));
  if (liste->selection==NULL) gtk_widget_show(ERR_PROG_SELECT);
  else
  {
    //rechercher le fichier
    dirp=opendir(AppsDir);
    fic=readdir(dirp);
    while (i <= SelectRow)
    {
      if (fic->d_type==8)
      {
        prog=(char *) malloc(strlen(fic->d_name));
      	strcpy(prog,fic->d_name);
	      i++;
      }
      fic=readdir(dirp);
    }
    closedir(dirp);
    strcpy(Programme,prog);
    gtk_widget_show(WARN_DEL_APP);
  }
}

void
on_bt_app_desk_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * liste;
  char enr [512];
  char win [512];
  FILE * fd;
  char * prog_1;
  char prog[512];
  DIR * dirp;
  struct dirent * fic;
  int i=0;
  //int mode;
  char fichierIco[512];
  char exec[512];
  char Icon[512];
  char Name[512];
  char * Terminal="false";
  char * Type="Application";

  liste = GTK_CLIST(lookup_widget(W_GEST_APP,"TAB_APP"));
  if (liste->selection==NULL) gtk_widget_show(ERR_PROG_SELECT);
  else
  {
    //rechercher le fichier
    dirp=opendir(AppsDir);
    fic=readdir(dirp);
    while (i <= SelectRow)
    {
      if (fic->d_type==8)
      {
	      strcpy(prog,fic->d_name);
	      i++;
      }
      fic=readdir(dirp);
    }
    closedir(dirp);
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
    if (strlen(KdeDir)>0)
    {
      strcpy(fichierIco,KdeDir);
      strcat(fichierIco,"/");
      fichier_seul(Programme);
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
    }
    // ecrire le fichier GNOME
    if (strlen(GnomeDir)>0)
    {
      strcpy(fichierIco,GnomeDir);
      strcat(fichierIco,"/");
      fichier_seul(Programme);
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
    }
  }
}

void
on_bt_menu_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkCList * liste;
  char * prog=NULL;
  DIR * dirp;
  struct dirent * fic;
  int i=0;

  liste = GTK_CLIST(lookup_widget(W_GEST_APP,"TAB_APP"));
  if (liste->selection==NULL) gtk_widget_show(ERR_PROG_SELECT);
  else
  {
    //rechercher le fichier
    dirp=opendir(AppsDir);
    fic=readdir(dirp);
    while (i <= SelectRow)
    {
      if (fic->d_type==8)
      {
        prog=(char *) malloc(strlen(fic->d_name));
      	strcpy(prog,fic->d_name);
	i++;
      }
      fic=readdir(dirp);
    }
    closedir(dirp);
    strcpy(Programme,prog);
    gtk_widget_show(W_MENU);
  }  
}

void
on_bt_test_clicked                     (GtkButton       *button,  
                                        gpointer         user_data)
{
  GtkCList * liste;
  char enr [512];
  char exec [512];
  char win [512];
  //int mode=0;
  FILE * fd;
  char * prog_1;
  char prog [512];
  DIR * dirp;
  struct dirent * fic;
  int i=0;

  liste = GTK_CLIST(lookup_widget(W_GEST_APP,"TAB_APP"));
  if (liste->selection==NULL) gtk_widget_show(ERR_PROG_SELECT);
  else
  {
    //rechercher le fichier
    dirp=opendir(AppsDir);
    fic=readdir(dirp);
    while (i <= SelectRow)
    {
      if (fic->d_type==8)
      {
	      strcpy(prog,fic->d_name);
	      i++;
      }
      fic=readdir(dirp);
    }
    closedir(dirp);
    prog_1=prog;
    strcpy(Programme,AppsDir);
    strcat(Programme,"/");
    strcat(Programme,prog_1);
    fd=fopen(Programme,"rt");
    //titre
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    //executer
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    strcpy(exec,enr);
    //CD
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    UseCd=(strcmp(enr,"Oui\n")==0);
    //Parametres
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    NeedParam=(strcmp(enr,"Oui\n")==0);
    // win ver
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    enr[strlen(enr)-1]='\0';
    strcpy(win,enr);
    // msdos ver
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    EmuleMsDos=(strcmp(enr,"Oui\n")==0);
    // Icone
    fgets (enr, 512, fd);
    fgets (enr, 512, fd);
    fclose(fd);
    strcpy(Commande,"wine ");
    fichier_seul(exec);
    strcpy(Programme,FichierSeul);
    if (strlen(win)>0 && (strcmp(win,"default")!=0))
    {
      version_win(Programme,win,EmuleMsDos);
    }
    strcat(Commande," \"");
    strcat(Commande,exec);
    strcat(Commande,"\"");
    //changement de répertoire
    repertoire_seul(exec);
    chdir(RepertoireSeul);
    if (NeedParam)
    {
      gtk_widget_show(W_ADD_PARAM);
    }
    else if (UseCd)
    {
      strcat(Commande," 2>>");
      strcat(Commande,FichierLog);
      strcat(Commande," &");
      gtk_widget_show(INF_USE_CD);
    }
    else
    {
      strcat(Commande," 2>>");
      strcat(Commande,FichierLog);
      strcat(Commande," &");
      system(Commande);
      task(Programme);
      ecrire_dans_log(texte[175],Programme);
    }
  }
}

