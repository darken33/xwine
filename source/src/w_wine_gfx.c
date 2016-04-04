/****************************************************************************/
/* w_wine_gfx.c  : Gestion des évènements de W_WINE_GFX                     */
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
/* EVENEMENTS DE LA FENETRE W_WINE_GFX                                      */
/****************************************************************************/
void
on_w_wine_gfx_destroy                  (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_GFX=create_W_WINE_GFX();
}

void
on_chk_double_buffer_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) UseDbf=!UseDbf;
}

void
on_chk_dga_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) UseDga=!UseDga;
}

void
on_chk_xshm_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) UseXshm=!UseXshm;
}

void
on_chk_dxgrab_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) UseDxgrab=!UseDxgrab;
}

void
on_bt_wine_gfx_ok_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  int findit=0;
  char enr[512];
  char prg[512];
  char strf[512];
  char enr2[512];
  char mde[512];
  char ftemp[512];
  if (Provenance==0) strcpy(strf,"[x11drv]");
  else
  {
    strcpy(prg,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_INSTALL_APP,"E_PROG"))));
    fichier_seul(prg);
    strcpy(strf,"[AppDefaults\\\\");
    strcat(strf,FichierSeul);
    strcat(strf,"\\\\x11drv]");
  }
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
  // X11 Config
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
      fputs("\"PrivateColorMap\" = \"N\"\n",fo);
      fputs("\"PerfectGraphics\" = \"N\"\n",fo);
      fputs(";;\"ScreenDepth\" = \"16\"\n",fo);
      fputs(";;\"Display\" = \":0.0\"\n",fo);
      fputs("\"TextCP\" = \"0\"\n",fo);
      fputs(";; \"XVideoPort\" = \"43\"\n",fo);
      fputs(";;\"Synchronous\" = \"Y\"\n",fo);
      /* mode graphique */
      strcpy(mde,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_GFX,"E_MODE"))));
      if (strcmp(mde,"Standard")==0)
      {
        fputs("\"Managed\" = \"N\"\n",fo);
        fputs("\"Desktop\" = \"N\"\n",fo);              
      }
      else if (strcmp(mde,"XWindow")==0)
      {
        fputs("\"Managed\" = \"Y\"\n",fo);
        fputs("\"Desktop\" = \"N\"\n",fo);              
      }
      else
      {
        fputs("\"Managed\" = \"N\"\n",fo);
        strcpy(enr2,"\"Desktop\" = \"");
        strcat(enr2,mde);
        strcat(enr2,"\"\n");
        fputs(enr2,fo);              
      }
      if (UseDbf) fputs("\"DesktopDoubleBuffered\" = \"Y\"\n",fo); 
      else fputs("\"DesktopDoubleBuffered\" = \"N\"\n",fo); 
      /* DirectDraw */
      if (UseDga) fputs("\"UseDGA\" = \"Y\"\n",fo); 
      else fputs("\"UseDGA\" = \"N\"\n",fo); 
      if (UseXshm) fputs("\"UseXShm\" = \"Y\"\n",fo); 
      else fputs("\"UseXShm\" = \"N\"\n",fo); 
      if (UseDxgrab) fputs("\"DXGrab\" = \"Y\"\n",fo); 
      else fputs("\"DXGrab\" = \"N\"\n",fo); 
      /* Nombre Couleurs Systemes */
      sprintf(enr2,"\"AllocSystemColors\" = \"%d\"\n",gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(lookup_widget(W_WINE_GFX,"SP_COLOR"))));
      fputs(enr2,fo);
    }
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);    
    fgets(enr, 512, fd);
  }  
  if (!findit)
  {
      fputs(strf,fo);    
      fputs("\n",fo);
      /* standard */
      fputs("\"PrivateColorMap\" = \"N\"\n",fo);
      fputs("\"PerfectGraphics\" = \"N\"\n",fo);
      fputs(";;\"ScreenDepth\" = \"16\"\n",fo);
      fputs(";;\"Display\" = \":0.0\"\n",fo);
      fputs("\"TextCP\" = \"0\"\n",fo);
      fputs(";; \"XVideoPort\" = \"43\"\n",fo);
      fputs(";;\"Synchronous\" = \"Y\"\n",fo);
      /* mode graphique */
      strcpy(mde,gtk_entry_get_text(GTK_ENTRY(lookup_widget(W_WINE_GFX,"E_MODE"))));
      if (strcmp(mde,"Normal")==0)
      {
        fputs("\"Managed\" = \"N\"\n",fo);
        fputs("\"Desktop\" = \"N\"\n",fo);              
      }
      else if (strcmp(mde,"XWindow")==0)
      {
        fputs("\"Managed\" = \"Y\"\n",fo);
        fputs("\"Desktop\" = \"N\"\n",fo);              
      }
      else
      {
        fputs("\"Managed\" = \"N\"\n",fo);
        strcpy(enr2,"\"Desktop\" = \"");
        strcat(enr2,mde);
        strcat(enr2,"\"\n");
        fputs(enr2,fo);              
      }
      if (UseDbf) fputs("\"DesktopDoubleBuffered\" = \"Y\"\n",fo); 
      else fputs("\"DesktopDoubleBuffered\" = \"N\"\n",fo); 
      /* DirectDraw */
      if (UseDga) fputs("\"UseDGA\" = \"Y\"\n",fo); 
      else fputs("\"UseDGA\" = \"N\"\n",fo); 
      if (UseXshm) fputs("\"UseXShm\" = \"Y\"\n",fo); 
      else fputs("\"UseXShm\" = \"N\"\n",fo); 
      if (UseDxgrab) fputs("\"DXGrab\" = \"Y\"\n",fo); 
      else fputs("\"DXGrab\" = \"N\"\n",fo); 
      /* Nombre Couleurs Systemes */
      sprintf(enr2,"\"AllocSystemColors\" = \"%d\"\n",gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(lookup_widget(W_WINE_GFX,"SP_COLOR"))));
      fputs(enr2,fo);
  }        
  fclose(fd);
  fclose(fo);
  /* Recopier le Fichier de Config */
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
  ecrire_dans_log(texte[178],texte[188]);
  gtk_widget_destroy(W_WINE_GFX);
}