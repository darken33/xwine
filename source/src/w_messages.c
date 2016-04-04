/****************************************************************************/
/* messages.c  : Gestion des évènements des boites de messages              */
/* Auteur      : Philippe BOUSQUET                                          */
/* Modifié le  : 05/02/2003                                                 */
/* Crée le     : 05/02/2003                                                 */
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
/* EVENEMENTS DE LA FENETRE ERR_AIDE                                        */
/****************************************************************************/
void
on_err_aide_destroy                    (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_AIDE=create_ERR_AIDE();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_APP_NOT_FOUND                               */
/****************************************************************************/
void
on_err_app_not_found_destroy           (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_APP_NOT_FOUND=create_ERR_APP_NOT_FOUND();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_DLL_NAME                                    */
/****************************************************************************/
void
on_err_dll_name_destroy                (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_DLL_NAME=create_ERR_DLL_NAME();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_DLL_SEL                                     */
/****************************************************************************/
void
on_err_dll_sel_destroy                 (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_DLL_SEL=create_ERR_DLL_SEL();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_DRIVE_PATH                                  */
/****************************************************************************/
void
on_err_drive_path_destroy              (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_DRIVE_PATH=create_ERR_DRIVE_PATH();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_DRIVE_SEL                                   */
/****************************************************************************/
void
on_err_drive_sel_destroy               (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_DRIVE_SEL=create_ERR_DRIVE_SEL();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_NOT_PATH                                    */
/****************************************************************************/
void
on_err_not_path_destroy                (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_NOT_PATH=create_ERR_NOT_PATH();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_PROG_EMPTY                                  */
/****************************************************************************/
void
on_err_prog_empty_destroy              (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_PROG_EMPTY=create_ERR_PROG_EMPTY();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_PROG_SELECT               */
/****************************************************************************/
void
on_err_prog_select_destroy             (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_PROG_SELECT=create_ERR_PROG_SELECT();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE ERR_WINESETUPTK                                 */
/****************************************************************************/
void
on_err_winesetuptk_destroy             (GtkObject       *object,
                                        gpointer         user_data)
{
  ERR_WINESETUPTK=create_ERR_WINESETUPTK();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE INF_USE_CD                                      */
/****************************************************************************/
void
on_inf_use_cd_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
  INF_USE_CD=create_INF_USE_CD();
  if (strlen(programToLaunch)>0) gtk_main_quit();
}

void
on_bt_use_cd_ok_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
  system(Commande);
  ecrire_dans_log(texte[175],Programme);
  task(Programme);
  gtk_widget_hide(INF_USE_CD);
  if (strlen(programToLaunch)>0) gtk_main_quit();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE WARN_DEL_APP                                    */
/****************************************************************************/
void
on_warn_del_app_destroy                (GtkObject       *object,
                                        gpointer         user_data)
{
  WARN_DEL_APP=create_WARN_DEL_APP();
}

void
on_bt_del_app_oui_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  char cmdrm [256];
  gtk_clist_remove(GTK_CLIST(lookup_widget(W_GEST_APP,"TAB_APP")),SelectRow);
  strcpy(cmdrm,"rm -f ");
  strcat(cmdrm,AppsDir);
  strcat(cmdrm,"/");
  strcat(cmdrm,Programme);
  strcat(cmdrm," >/dev/null 2>/dev/null");
  system(cmdrm);
  ecrire_dans_log(texte[185],Programme);
  gtk_widget_hide(WARN_DEL_APP);
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE WARN_DRIVE_DEL                                  */
/****************************************************************************/
void
on_warn_drive_del_destroy              (GtkObject       *object,
                                        gpointer         user_data)
{
  WARN_DRIVE_DEL=create_WARN_DRIVE_DEL();
}

void
on_bt_drive_del_oui_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int i=0,j=0,find=0;
  char nomD[10];
  char enr[512];
  char ftemp[512];
  strcpy(nomD,"[Drive ");
  i=0;
  j=-1;
  /* retrouver le disque a supprimer */
  while (i<26 && j<SelectRow)
  {
    if (Disques[i]) j++;
    i++;
  }
  nomD[7]=(char)((i-1)+(int)'A');
  nomD[8]=']';
  nomD[9]='\0';
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
  fd=fopen(FichierConfig,"rt");
  fo=fopen(ftemp,"wt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,nomD)) find=1;
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  fclose(fd);
  fclose(fo);
  /* Recopier le fichier de config */
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
  gtk_clist_remove(GTK_CLIST(lookup_widget(W_GEST_DRIVE,"TAB_DRIVE")),SelectRow);
  Disques[i-1]=0;
  ecrire_dans_log(texte[182],nomD);
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE WARN_EDIT_QUIT                                  */
/****************************************************************************/
void
on_warn_edit_quit_destroy              (GtkObject       *object,
                                        gpointer         user_data)
{
  WARN_EDIT_QUIT=create_WARN_EDIT_QUIT();
}

void
on_bt_edit_quit_ok_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  gtk_widget_destroy(W_EDITEUR);
  gtk_widget_hide(WARN_EDIT_QUIT);
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE WARN_NOT_AVAILABLE                              */
/****************************************************************************/
void
on_warn_not_available_destroy          (GtkObject       *object,
                                        gpointer         user_data)
{
  WARN_NOT_AVAILABLE=create_WARN_NOT_AVAILABLE();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE WARN_RESTORE                                    */
/****************************************************************************/
void
on_warn_restore_destroy                (GtkObject       *object,
                                        gpointer         user_data)
{
  WARN_RESTORE=create_WARN_RESTORE();
}

void
on_bt_restore_ok_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  char enr[512];
  fd=fopen("/etc/wine/config","rt");
  if (fd != NULL)
  {
    fo=fopen(FichierConfig,"wt");
    fgets(enr, 512, fd);
    while (!feof(fd))
    {
      fputs(enr,fo);
      fgets(enr, 512, fd);
    }
    fclose(fd);
    fclose(fo);
  }
  gtk_widget_hide(WARN_RESTORE);
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE WARN_DEBUG                                      */
/****************************************************************************/
extern void
on_WARN_DEBUG_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
  WARN_DEBUG=create_WARN_DEBUG();
}

/****************************************************************************/
/* EVENEMENTS DE LA FENETRE WARN_NODEBUG                                    */
/****************************************************************************/
extern void
on_WARN_NODEBUG_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
  WARN_NODEBUG=create_WARN_NODEBUG();
}

void
on_w_info_maj_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
   W_INFO_MAJ=create_W_INFO_MAJ();
}


void
on_bt_warn_maj_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
   gtk_widget_hide(W_INFO_MAJ);
}