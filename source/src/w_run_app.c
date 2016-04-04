/****************************************************************************/
/* w_gest_app.c  : Gestion des évènements de W_RUN_APP                      */
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
/* EVENEMENTS DE LA FENETRE W_RUN_APP                                       */
/****************************************************************************/
void
on_w_run_app_destroy                   (GtkObject       *object,
                                        gpointer         user_data)
{
  W_RUN_APP=create_W_RUN_APP();
}

void
on_tab_run_app_select_row              (GtkCList        *clist,
                                        gint             row,
                                        gint             column,
                                        GdkEvent        *event,
                                        gpointer         user_data)
{
  SelectRow=row;
  SelectCol=column;
}

void
on_bt_run_ok_clicked                   (GtkButton       *button,
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

  liste = GTK_CLIST(lookup_widget(W_RUN_APP,"TAB_RUN_APP"));
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
    gtk_widget_destroy(W_RUN_APP);
  }
}
