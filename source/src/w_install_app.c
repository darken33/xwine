/****************************************************************************/
/* w_install_app : Gestion des évènements de W_INSTALL_APP                  */
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
/* EVENEMENTS DE LA FENETRE W_INSTALL_APP                                   */
/****************************************************************************/
void
on_w_install_app_destroy               (GtkObject       *object,
                                        gpointer         user_data)
{
  W_INSTALL_APP=create_W_INSTALL_APP();
}

void
on_bt_parcour_app_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  Provenance=2;
  gtk_widget_show(W_PARCOUR_EXE);
}

void
on_chk_use_cd_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) UseCd=!UseCd;
}

void
on_chk_param_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) NeedParam=!NeedParam;
}

void
on_chk_msdos_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) EmuleMsDos=!EmuleMsDos;
}

void
on_bt_app_dll_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  int find=0;
  char strf[512];
  char prg[512];
  char enr[512];
  char dll[512];
  char * item;
  fd=fopen(FichierConfig,"rt");
  find=0;
  strcpy(prg,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG"))));
  fichier_seul(prg);
  if (strcmp(FichierSeul,"\0")==0) gtk_widget_show(ERR_PROG_EMPTY);
  else
  {
    Provenance=1;
    strcpy(strf,"[AppDefaults\\\\");
    strcat(strf,FichierSeul);
    strcat(strf,"\\\\DllOverrides]");
    fd=fopen(FichierConfig,"rt");
    while ((!feof(fd))&& (!find))
    {
      fgets(enr, 512, fd);
      find = (chaine_contient(enr,strf));
    }
    fgets(enr, 512, fd);
    while ((!feof(fd))&& (!chaine_contient(enr,"[")))
    {
      if ((enr[0]!=';') && (strlen(enr)>1))
      {
        extract_dll(enr);
        strcpy(dll,NomDll);
        strcat(dll," = ");
        strcat(dll,OverrideDll);
        item=dll;
        if (strlen(NomDll)>0)
        {
          gtk_clist_append(GTK_CLIST(lookup_widget(W_APP_DLL,"TAB_APP_DLL")),&item);
        }
      }
      fgets(enr, 512, fd);
    }
    fclose(fd);
    gtk_widget_show(W_APP_DLL);
  }
}

void
on_bt_app_gfx_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  char enr[512];
  char prg[512];
  int find=0;
  char strf[512];
  char x11_temp[512];
  int mode=0;
  float nbcolor=100.0;
  InitialiseCheck=0;
  UseDbf=0;
  UseXshm=0;
  UseDxgrab=0;
  UseDga=0;
  strcpy(prg,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG"))));
  fichier_seul(prg);
  if (strcmp(FichierSeul,"\0")==0) gtk_widget_show(ERR_PROG_EMPTY);
  else
  {
    Provenance=1;
    strcpy(strf,"[AppDefaults\\\\");
    strcat(strf,FichierSeul);
    strcat(strf,"\\\\x11drv]");
    fd=fopen(FichierConfig,"rt");
    while ((!feof(fd))&& (!find))
    {
      fgets(enr, 512, fd);
      find = (chaine_contient(enr,strf));
    }
    fgets(enr, 512, fd);
    while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
    {
      if (chaine_contient(enr,"\"AllocSystemColors\" ="))
      {
        sscanf(enr,"\"AllocSystemColors\" = \"%f\"",&nbcolor);
      }
      if (chaine_contient(enr,"\"Managed\" ="))
      {
        sscanf(enr,"\"Managed\" = \"%s\"",x11_temp);
        x11_temp[1]='\0';
        if ((strcmp(x11_temp,"y")==0) || (strcmp(x11_temp,"Y")==0)) mode=1;
      }
      if (chaine_contient(enr,"\"Desktop\" ="))
      {
        sscanf(enr,"\"Desktop\" = \"%s\"",x11_temp);
        if (chaine_contient(x11_temp,"640x480")) mode=2;
        if (chaine_contient(x11_temp,"800x600")) mode=3;
        if (chaine_contient(x11_temp,"1024x768")) mode=4;
      }
      if (chaine_contient(enr,"\"UseDGA\" ="))
      {
        sscanf(enr,"\"UseDGA\" = \"%s\"",x11_temp);
        x11_temp[1]='\0';
        UseDga=((strcmp(x11_temp,"y")==0) || (strcmp(x11_temp,"Y")==0));
      }
      if (chaine_contient(enr,"\"DXGrab\" ="))
      {
        sscanf(enr,"\"DXGrab\" = \"%s\"",x11_temp);
        x11_temp[1]='\0';
        UseDxgrab=((strcmp(x11_temp,"y")==0) || (strcmp(x11_temp,"Y")==0));
      }
      if (chaine_contient(enr,"\"UseXShm\" ="))
      {
        sscanf(enr,"\"UseXShm\" = \"%s\"",x11_temp);
        x11_temp[1]='\0';
        UseXshm=((strcmp(x11_temp,"y")==0) || (strcmp(x11_temp,"Y")==0));
      }
      if (chaine_contient(enr,"\"DesktopDoubleBuffered\" ="))
      {
        sscanf(enr,"\"DesktopDoubleBuffered\" = \"%s\"",x11_temp);
        x11_temp[1]='\0';
        UseDbf=((strcmp(x11_temp,"y")==0) || (strcmp(x11_temp,"Y")==0));
      }
      fgets(enr, 512, fd);
    }
    fclose(fd);
    if (mode==0) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_GFX,"E_MODE")),"Standard");
    if (mode==1) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_GFX,"E_MODE")),"XWindow");
    if (mode==2) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_GFX,"E_MODE")),"640x480");
    if (mode==3) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_GFX,"E_MODE")),"800x600");
    if (mode==4) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_GFX,"E_MODE")),"1024x768");
    gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(W_WINE_GFX,"SP_COLOR")),nbcolor);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_GFX,"CHK_DOUBLE_BUFFER")),UseDbf);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_GFX,"CHK_DGA")),UseDga);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_GFX,"CHK_XSHM")),UseXshm);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_GFX,"CHK_DXGRAB")),UseDxgrab);
    InitialiseCheck=1;
    gtk_widget_show(W_WINE_GFX);
  }
}

void
on_bt_app_ok_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
  char title [512];
  char prg [512];
  char fic [512];
  char win [512];
  char fichier[512];
  FILE * fd;
  strcpy(title,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_TITRE_APP"))));
  strcpy(prg,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG"))));
  strcpy(win,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_WINVER"))));
  fichier_seul(prg);
  strcpy(fic,FichierSeul);
// Fix segfalut : patch 3 Mandrake
  if (strpbrk(title,"\"'`~./\\")) strcpy(title,"\0");
  if (strcmp(title,"\0")==0) strcpy(title,fic);
  if (strcmp(prg,"\0")==0) gtk_widget_show(ERR_PROG_EMPTY);
  else
  {
    fic[strlen(fic)-4]='\0';
    strcpy(fichier,AppsDir);
    strcat(fichier,"/");
    strcat(fichier,fic);
    fd=fopen(fichier,"wt");
    fputs("[Titre]\n",fd);
    strcat(title,"\n");
    fputs(title,fd);
    fputs("[Executer]\n",fd);
    strcat(prg,"\n");
    fputs(prg,fd);
    fputs("[CD]\n",fd);
    if (UseCd) fputs("Oui\n",fd);
    else fputs("Non\n",fd);
    fputs("[Parametres]\n",fd);
    if (NeedParam) fputs("Oui\n",fd);
    else fputs("Non\n",fd);
    fputs("[Windows]\n",fd);
    strcat(win,"\n");
    fputs(win,fd);
    fputs("[MS-Dos]\n",fd);
    if (EmuleMsDos) fputs("Oui\n",fd);
    else fputs("Non\n",fd);
    fputs("[Icone]\n",fd);
  if (gnome_icon_entry_get_filename(lookup_widget(W_INSTALL_APP,"OBJ_ICONE_SEL"))!=NULL)
  {
    fputs(gnome_icon_entry_get_filename(lookup_widget(W_INSTALL_APP,"OBJ_ICONE_SEL")),fd);
  }
  else   
  {
    fputs("\n",fd);
  }
    fputs("\n",fd);
    fclose(fd);
    if (iProvenance==1)
    {
      ecrire_dans_log(texte[183],fic);
    }
    else ecrire_dans_log(texte[184],fic);
    gtk_widget_destroy(W_GEST_APP);
    gtk_widget_destroy(W_INSTALL_APP);
    on_m_install_activate(NULL,NULL);
  }
}