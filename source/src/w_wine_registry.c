/****************************************************************************/
/* w_wine_registry.c : Gestion des évènements de W_WINE_REGISTRY            */
/* Auteur            : Philippe BOUSQUET                                    */
/* Modifié le        : 05/02/2003                                           */
/* Crée le           : 05/02/2003                                           */
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
/* EVENEMENTS DE LA FENETRE W_WINE_REGISTRY                                 */
/****************************************************************************/
void
on_w_wine_registry_destroy             (GtkObject       *object,
                                        gpointer         user_data)
{
  W_WINE_REGISTRY=create_W_WINE_REGISTRY();
}

void
on_chk_load_gen_reg_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) ChkLoadGenReg=!ChkLoadGenReg;
}

void
on_chk_load_pers_reg_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) ChkLoadPersReg=!ChkLoadPersReg;
}

void
on_chk_load_win_reg_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) ChkLoadWinReg=!ChkLoadWinReg;
}

void
on_chk_save_pers_reg_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
  if (InitialiseCheck) ChkSavePersReg=!ChkSavePersReg;
}

void
on_bt_wine_registry_ok_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  int findit=0;
  char enr[512];
  char strf[512];
  char ftemp[512];
  strcpy(strf,"[registry]");
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
      fputs("\"SaveOnlyUpdatedKeys\" = \"Y\"\n",fo);
      fputs("\"PeriodicSave\" = \"600\"\n",fo);
      /* autres */
      if (ChkLoadGenReg) fputs("\"LoadGlobalRegistryFiles\" = \"Y\"\n",fo);
      else fputs("\"LoadGlobalRegistryFiles\" = \"N\"\n",fo);
      if (ChkLoadPersReg) fputs("\"LoadHomeRegistryFiles\" = \"Y\"\n",fo);
      else fputs("\"LoadHomeRegistryFiles\" = \"N\"\n",fo);
      if (ChkLoadWinReg) fputs("\"LoadWindowsRegistryFiles\" = \"Y\"\n",fo);
      else fputs("\"LoadWindowsRegistryFiles\" = \"N\"\n",fo);
      if (ChkSavePersReg) fputs("\"WritetoHomeRegistryFiles\" = \"Y\"\n",fo);
      else fputs("\"WritetoHomeRegistryFiles\" = \"N\"\n",fo);
    }
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  if (!findit)
  {
      fputs(strf,fo);
      /* standard */
      fputs("\"SaveOnlyUpdatedKeys\" = \"Y\"\n",fo);
      fputs("\"PeriodicSave\" = \"600\"\n",fo);
      /* autres */
      if (ChkLoadGenReg) fputs("\"LoadGlobalRegistryFiles\" = \"Y\"\n",fo);
      else fputs("\"LoadGlobalRegistryFiles\" = \"N\"\n",fo);
      if (ChkLoadPersReg) fputs("\"LoadHomeRegistryFiles\" = \"Y\"\n",fo);
      else fputs("\"LoadHomeRegistryFiles\" = \"N\"\n",fo);
      if (ChkLoadWinReg) fputs("\"LoadWindowsRegistryFiles\" = \"Y\"\n",fo);
      else fputs("\"LoadWindowsRegistryFiles\" = \"N\"\n",fo);
      if (ChkSavePersReg) fputs("\"WritetoHomeRegistryFiles\" = \"Y\"\n",fo);
      else fputs("\"WritetoHomeRegistryFiles\" = \"N\"\n",fo);
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
  ecrire_dans_log(texte[178],texte[192]);
  gtk_widget_destroy(W_WINE_REGISTRY);
}