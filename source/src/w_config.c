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
on_w_config_destroy                    (GtkObject       *object,
                                        gpointer         user_data)
{
  W_CONFIG=create_W_CONFIG();
  autorisations();
  if (ModeConfig)
  {
    gtk_widget_show(W_CONFIG);
    gtk_widget_show(W_QUITTER);
  }  
}


void
on_bt_drive_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  char enr[512];
  char *item_1;
  char item[512];
  int i=1;
  int j;
  for (i=0;i<26;i++) Disques[i]=0;
  fd=fopen(FichierConfig,"rt");
  fgets(enr, 512, fd);
  while (!feof(fd))
  {
    if (chaine_contient(enr,"[Drive"))
    {
      Disques[((int)enr[7])-((int)'A')]=1;
      j=((int)enr[7])-((int)'A');
      fgets(enr, 512, fd);
      while ((!chaine_contient(enr,"[")) && (!chaine_contient(enr,"\"Label\" =")) && (!feof(fd)))
      {
        fgets(enr, 512, fd);
      }
      if (chaine_contient(enr,"\"Label\" ="))
      {
        for (i=11;i<strlen(enr);i++) Labels[j][i-11]=enr[i];
        Labels[j][i-13]='\0';        
        fgets(enr, 512, fd);
      }
      else if (!chaine_contient(enr,"[Drive")) fgets(enr, 512, fd);
    }
    else fgets(enr, 512, fd);
  }
  fclose(fd);
  for (i=0;i<26;i++)
  {
    if (Disques[i]==1)
    {
      strcpy(item,"[Drive ");
      item[7]=(char)(i+((int)'A'));
      item[8]=']';
      item[9]='\0';
      if (strcmp(Labels[i],"\0")!=0)
      {
        strcat(item," *** ");
        strcat(item,Labels[i]);
      }
      item_1=item;
      gtk_clist_insert(GTK_CLIST(lookup_widget(W_GEST_DRIVE,"TAB_DRIVE")),(i+1),&item_1);
    }
  }
  gtk_widget_show(W_GEST_DRIVE);
}


void
on_bt_folder_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  int i=0;
  int find=0;
  char windowsS[512];
  char pathS [512];
  char systemS [512];
  char tempS [512];
  char profileS [512];
  char enr[512];
  fd=fopen(FichierConfig,"rt");
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[wine]"));
  }
  fgets(enr, 512, fd);
  windowsS[0]='\0';
  pathS[0]='\0';
  systemS[0]='\0';
  tempS[0]='\0';
  profileS[0]='\0';
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"Windows\" ="))
    {
      for (i=13;i<strlen(enr);i++) windowsS[i-13]=enr[i];
      windowsS[i-15]='\0';
    }
    if (chaine_contient(enr,"\"System\" ="))
    {
      for (i=12;i<strlen(enr);i++) systemS[i-12]=enr[i];
      systemS[i-14]='\0';
    }
    if (chaine_contient(enr,"\"Temp\" ="))
    {
      for (i=10;i<strlen(enr);i++) tempS[i-10]=enr[i];
      tempS[i-12]='\0';
    }
    if (chaine_contient(enr,"\"Profile\" ="))
    {
      for (i=13;i<strlen(enr);i++) profileS[i-13]=enr[i];
      profileS[i-15]='\0';
    }
    if (chaine_contient(enr,"\"Path\" ="))
    {
      for (i=10;i<strlen(enr);i++) pathS[i-10]=enr[i];
      pathS[i-12]='\0';
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_WINDOWS")),windowsS);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_SYSTEM")),systemS);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_TEMP")),tempS);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_PROFILE")),profileS);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_SYSTEM,"E_PATH")),pathS);
  gtk_widget_show(W_WINE_SYSTEM);
}


void
on_bt_version_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  int i=0;
  int find=0;
  char windowsV[512];
  char enr[512];
  InitialiseCheck=0;
  fd=fopen(FichierConfig,"rt");
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[Version]"));
  }
  fgets(enr, 512, fd);
  windowsV[0]='\0';
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"Windows\" ="))
    {
      for (i=13;i<strlen(enr);i++) windowsV[i-13]=enr[i];
      windowsV[i-15]='\0';
    }
    if (chaine_contient(enr,"\"DOS\" ="))
    {
      EmuleMsDos=1;
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_VERSION,"E_VERSION")),windowsV);
  gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_VERSION,"CHK_WINE_MSDOS")),EmuleMsDos);
  InitialiseCheck=1;
  gtk_widget_show(W_WINE_VERSION);
}


void
on_bt_dll_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  int i=0;
  int find=0;
  char order[512];
  char enr[512];
  char dll[512];
  char * item;
  fd=fopen(FichierConfig,"rt");
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[DllDefaults]"));
  }
  fgets(enr, 512, fd);
  order[0]='\0';
  while ((!feof(fd))&& (!chaine_contient(enr,"[")))
  {
    if (chaine_contient(enr,"\"DefaultLoadOrder\" ="))
    {
      for (i=22;i<strlen(enr);i++) order[i-22]=enr[i];
      order[i-24]='\0';
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_DLL_GEST,"E_DEFAUT")),order);
  fd=fopen(FichierConfig,"rt");
  find=0;
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[DllOverrides]"));
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
        gtk_clist_append(GTK_CLIST(lookup_widget(W_DLL_GEST,"TAB_OVERRIDE")),&item);
      }
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_widget_show(W_DLL_GEST);
}


void
on_bt_look_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  int i=0,j=0;
  int find=0;
  char look[512];
  char enr[512];
  int fonts[5][4];
  float Fsys=10.0;
  float FsysF=10.0;
  float Foem=10.0;
  float Fans=10.0;
  float FansF=10.0;
  fd=fopen(FichierConfig,"rt");
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[Tweak.Layout]"));
  }
  fgets(enr, 512, fd);
  look[0]='\0';
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"WineLook\" ="))
    {
      for (i=14;i<strlen(enr);i++) look[i-14]=enr[i];
      look[i-16]='\0';
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_LOOK")),look);
  fd=fopen(FichierConfig,"rt");
  find=0;
  for (i=0;i<5;i++)
  {
    for (j=0;j<4;j++) fonts[i][j]=0;
  }
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[Tweak.Fonts]"));
  }
  fgets(enr, 512, fd);
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"System.Height\" ="))
    {
      sscanf(enr,"\"System.Height\" = \"%f\"",&Fsys);
    }
    if (chaine_contient(enr,"\"System.Bold\" = \"true\""))
    {
      fonts[0][0]=1;
    }
    if (chaine_contient(enr,"\"System.Bold\" = \"false\""))
    {
      fonts[0][0]=0;
    }
    if (chaine_contient(enr,"\"System.Italic\" = \"true\""))
    {
      fonts[0][1]=1;
    }
    if (chaine_contient(enr,"\"System.Italic\" = \"false\""))
    {
      fonts[0][1]=0;
    }
    if (chaine_contient(enr,"\"System.Underline\" = \"true\""))
    {
      fonts[0][2]=1;
    }
    if (chaine_contient(enr,"\"System.Underline\" = \"false\""))
    {
      fonts[0][2]=0;
    }
    if (chaine_contient(enr,"\"System.StrikeOut\" = \"true\""))
    {
      fonts[0][3]=1;
    }
    if (chaine_contient(enr,"\"System.StrikeOut\" = \"false\""))
    {
      fonts[0][3]=0;
    }
    if (chaine_contient(enr,"\"SystemFixed.Height\" ="))
    {
      sscanf(enr,"\"SystemFixed.Height\" = \"%f\"",&FsysF);
    }
    if (chaine_contient(enr,"\"SystemFixed.Bold\" = \"true\""))
    {
      fonts[1][0]=1;
    }
    if (chaine_contient(enr,"\"SystemFixed.Bold\" = \"false\""))
    {
      fonts[1][0]=0;
    }
    if (chaine_contient(enr,"\"SystemFixed.Italic\" = \"true\""))
    {
      fonts[1][1]=1;
    }
    if (chaine_contient(enr,"\"SystemFixed.Italic\" = \"false\""))
    {
      fonts[1][1]=0;
    }
    if (chaine_contient(enr,"\"SystemFixed.Underline\" = \"true\""))
    {
      fonts[1][2]=1;
    }
    if (chaine_contient(enr,"\"SystemFixed.Underline\" = \"false\""))
    {
      fonts[1][2]=0;
    }
    if (chaine_contient(enr,"\"SystemFixed.StrikeOut\" = \"true\""))
    {
      fonts[1][3]=1;
    }
    if (chaine_contient(enr,"\"SystemFixed.StrikeOut\" = \"false\""))
    {
      fonts[1][3]=0;
    }
    if (chaine_contient(enr,"\"OEMFixed.Height\" ="))
    {
      sscanf(enr,"\"OEMFixed.Height\" = \"%f\"",&Foem);
    }
    if (chaine_contient(enr,"\"OEMFixed.Bold\" = \"true\""))
    {
      fonts[2][0]=1;
    }
    if (chaine_contient(enr,"\"OEMFixed.Bold\" = \"false\""))
    {
      fonts[2][0]=0;
    }
    if (chaine_contient(enr,"\"OEMFixed.Italic\" = \"true\""))
    {
      fonts[2][1]=1;
    }
    if (chaine_contient(enr,"\"OEMFixed.Italic\" = \"false\""))
    {
      fonts[2][1]=0;
    }
    if (chaine_contient(enr,"\"OEMFixed.Underline\" = \"true\""))
    {
      fonts[2][2]=1;
    }
    if (chaine_contient(enr,"\"OEMFixed.Underline\" = \"false\""))
    {
      fonts[2][2]=0;
    }
    if (chaine_contient(enr,"\"OEMFixed.StrikeOut\" = \"true\""))
    {
      fonts[2][3]=1;
    }
    if (chaine_contient(enr,"\"OEMFixed.StrikeOut\" = \"false\""))
    {
      fonts[2][3]=0;
    }
    if (chaine_contient(enr,"\"AnsiFixed.Height\" ="))
    {
      sscanf(enr,"\"AnsiFixed.Height\" = \"%f\"",&FansF);
    }
    if (chaine_contient(enr,"\"AnsiFixed.Bold\" = \"true\""))
    {
      fonts[3][0]=1;
    }
    if (chaine_contient(enr,"\"AnsiFixed.Bold\" = \"false\""))
    {
      fonts[3][0]=0;
    }
    if (chaine_contient(enr,"\"AnsiFixed.Italic\" = \"true\""))
    {
      fonts[3][1]=1;
    }
    if (chaine_contient(enr,"\"AnsiFixed.Italic\" = \"false\""))
    {
      fonts[3][1]=0;
    }
    if (chaine_contient(enr,"\"AnsiFixed.Underline\" = \"true\""))
    {
      fonts[3][2]=1;
    }
    if (chaine_contient(enr,"\"AnsiFixed.Underline\" = \"false\""))
    {
      fonts[3][2]=0;
    }
    if (chaine_contient(enr,"\"AnsiFixed.StrikeOut\" = \"true\""))
    {
      fonts[3][3]=1;
    }
    if (chaine_contient(enr,"\"AnsiFixed.StrikeOut\" = \"false\""))
    {
      fonts[3][3]=0;
    }
    if (chaine_contient(enr,"\"Ansi.Height\" ="))
    {
      sscanf(enr,"\"Ansi.Height\" = \"%f\"",&Fans);
    }
    if (chaine_contient(enr,"\"Ansi.Bold\" = \"true\""))
    {
      fonts[4][0]=1;
    }
    if (chaine_contient(enr,"\"Ansi.Bold\" = \"false\""))
    {
      fonts[4][0]=0;
    }
    if (chaine_contient(enr,"\"Ansi.Italic\" = \"true\""))
    {
      fonts[4][1]=1;
    }
    if (chaine_contient(enr,"\"Ansi.Italic\" = \"false\""))
    {
      fonts[4][1]=0;
    }
    if (chaine_contient(enr,"\"Ansi.Underline\" = \"true\""))
    {
      fonts[4][2]=1;
    }
    if (chaine_contient(enr,"\"Ansi.Underline\" = \"false\""))
    {
      fonts[4][2]=0;
    }
    if (chaine_contient(enr,"\"Ansi.StrikeOut\" = \"true\""))
    {
      fonts[4][3]=1;
    }
    if (chaine_contient(enr,"\"Ansi.StrikeOut\" = \"false\""))
    {
      fonts[4][3]=0;
    }
    fgets(enr, 512, fd);
  }
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_SYSTEM")),Fsys);
  if (fonts[0][0]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_STYLE")),"Gras");
  else if (fonts[0][1]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_STYLE")),"Italique");
  else if (fonts[0][2]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_STYLE")),"Souligné");
  else gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_STYLE")),"Standard");
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_SYSTEM_FIX")),FsysF);
  if (fonts[1][0]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_FIX_STYLE")),"Gras");
  else if (fonts[1][1]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_FIX_STYLE")),"Italique");
  else if (fonts[1][2]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_FIX_STYLE")),"Souligné");
  else gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_SYSTEM_FIX_STYLE")),"Standard");
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_OEM_FIX")),Foem);
  if (fonts[2][0]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_OEM_FIX_STYLE")),"Gras");
  else if (fonts[2][1]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_OEM_FIX_STYLE")),"Italique");
  else if (fonts[2][2]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_OEM_FIX_STYLE")),"Souligné");
  else gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_OEM_FIX_STYLE")),"Standard");
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_ANSI_FIX")),FansF);
  if (fonts[3][0]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_FIX_STYLE")),"Gras");
  else if (fonts[3][1]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_FIX_STYLE")),"Italique");
  else if (fonts[3][2]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_FIX_STYLE")),"Souligné");
  else gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_FIX_STYLE")),"Standard");
  gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(W_WINE_LOOK,"SP_ANSI")),Fans);
  if (fonts[4][0]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_STYLE")),"Gras");
  else if (fonts[4][1]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_STYLE")),"Italique");
  else if (fonts[4][2]) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_STYLE")),"Souligné");
  else gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_LOOK,"E_ANSI_STYLE")),"Standard");
  fclose(fd);
  gtk_widget_show(W_WINE_LOOK);
}


void
on_bt_gfx_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  char enr[512];
  int find=0;
  char x11_temp[512];
  int mode=0;
  float nbcolor=100.0;
  InitialiseCheck=0;
  UseDbf=0;
  UseXshm=0;
  UseDxgrab=0;
  UseDga=0;
  fd=fopen(FichierConfig,"rt");
  Provenance=0;
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[x11drv]"));
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


void
on_bt_ports_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  int i=0;
  int find=0;
  char com[4][512];
  char lpt[4][512];
  char lpr[4][512];
  char enr[512];
  // Les ports Séries
  fd=fopen(FichierConfig,"rt");
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[serialports]"));
  }
  fgets(enr, 512, fd);
  com[0][0]='\0';
  com[1][0]='\0';
  com[2][0]='\0';
  com[3][0]='\0';
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"Com1\" ="))
    {
      for (i=10;i<strlen(enr);i++) com[0][i-10]=enr[i];
      com[0][i-12]='\0';
    }
    if (chaine_contient(enr,"\"Com2\" ="))
    {
      for (i=10;i<strlen(enr);i++) com[1][i-10]=enr[i];
      com[1][i-12]='\0';
    }
    if (chaine_contient(enr,"\"Com3\" ="))
    {
      for (i=10;i<strlen(enr);i++) com[2][i-10]=enr[i];
      com[2][i-12]='\0';
    }
    if (chaine_contient(enr,"\"Com4\" ="))
    {
      for (i=10;i<strlen(enr);i++) com[3][i-10]=enr[i];
      com[3][i-12]='\0';
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_COM1")),com[0]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_COM2")),com[1]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_COM3")),com[2]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_COM4")),com[3]);
  // Les ports Parralleles
  fd=fopen(FichierConfig,"rt");
  find=0;
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[parallelports]"));
  }
  fgets(enr, 512, fd);
  lpt[0][0]='\0';
  lpt[1][0]='\0';
  lpt[2][0]='\0';
  lpt[3][0]='\0';
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"Lpt1\" ="))
    {
      for (i=10;i<strlen(enr);i++) lpt[0][i-10]=enr[i];
      lpt[0][i-12]='\0';
    }
    if (chaine_contient(enr,"\"Lpt2\" ="))
    {
      for (i=10;i<strlen(enr);i++) lpt[1][i-10]=enr[i];
      lpt[1][i-12]='\0';
    }
    if (chaine_contient(enr,"\"Lpt3\" ="))
    {
      for (i=10;i<strlen(enr);i++) lpt[2][i-10]=enr[i];
      lpt[2][i-12]='\0';
    }
    if (chaine_contient(enr,"\"Lpt4\" ="))
    {
      for (i=10;i<strlen(enr);i++) lpt[3][i-10]=enr[i];
      lpt[3][i-12]='\0';
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPT1")),lpt[0]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPT2")),lpt[1]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPT3")),lpt[2]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPT4")),lpt[3]);
  // Les Imprimantes
  find=0;
  fd=fopen(FichierConfig,"rt");
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[spooler]"));
  }
  fgets(enr, 512, fd);
  lpr[0][0]='\0';
  lpr[1][0]='\0';
  lpr[2][0]='\0';
  lpr[3][0]='\0';
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"LPT1:\" ="))
    {
      for (i=11;i<strlen(enr);i++) lpr[0][i-11]=enr[i];
      lpr[0][i-13]='\0';
    }
    if (chaine_contient(enr,"\"LPT2:\" ="))
    {
      for (i=11;i<strlen(enr);i++) lpr[1][i-11]=enr[i];
      lpr[1][i-13]='\0';
    }
    if (chaine_contient(enr,"\"LPT3:\" ="))
    {
      for (i=11;i<strlen(enr);i++) lpr[2][i-11]=enr[i];
      lpr[2][i-13]='\0';
    }
    if (chaine_contient(enr,"\"LPT4:\" ="))
    {
      for (i=11;i<strlen(enr);i++) lpr[3][i-11]=enr[i];
      lpr[3][i-13]='\0';
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPR1")),lpr[0]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPR2")),lpr[1]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPR3")),lpr[2]);
  gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_PORT,"E_LPR4")),lpr[3]);
  gtk_widget_show(W_WINE_PORT);
}


void
on_bt_registry_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  char enr[512];
  int find=0;
  char rg_temp[512];
  InitialiseCheck=0;
  ChkLoadGenReg=0;
  ChkLoadPersReg=0;
  ChkLoadWinReg=0;
  ChkSavePersReg=0;
  fd=fopen(FichierConfig,"rt");
  Provenance=0;
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[registry]"));
  }
  fgets(enr, 512, fd);
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"LoadGlobalRegistryFiles\" ="))
    {
      sscanf(enr,"\"LoadGlobalRegistryFiles\" = \"%s\"",rg_temp);
      rg_temp[1]='\0';
      ChkLoadGenReg=((strcmp(rg_temp,"y")==0) || (strcmp(rg_temp,"Y")==0));
    }
    if (chaine_contient(enr,"\"LoadHomeRegistryFiles\" ="))
    {
      sscanf(enr,"\"LoadHomeRegistryFiles\" = \"%s\"",rg_temp);
      rg_temp[1]='\0';
      ChkLoadPersReg=((strcmp(rg_temp,"y")==0) || (strcmp(rg_temp,"Y")==0));
    }
    if (chaine_contient(enr,"\"LoadWindowsRegistryFiles\" ="))
    {
      sscanf(enr,"\"LoadWindowsRegistryFiles\" = \"%s\"",rg_temp);
      rg_temp[1]='\0';
      ChkLoadWinReg=((strcmp(rg_temp,"y")==0) || (strcmp(rg_temp,"Y")==0));
    }
    if (chaine_contient(enr,"\"WritetoHomeRegistryFiles\" ="))
    {
      sscanf(enr,"\"WritetoHomeRegistryFiles\" = \"%s\"",rg_temp);
      rg_temp[1]='\0';
      ChkSavePersReg=((strcmp(rg_temp,"y")==0) || (strcmp(rg_temp,"Y")==0));
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_REGISTRY,"CHK_LOAD_GEN_REG")),ChkLoadGenReg);
  gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_REGISTRY,"CHK_LOAD_PERS_REG")),ChkLoadPersReg);
  gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_REGISTRY,"CHK_LOAD_WIN_REG")),ChkLoadWinReg);
  gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(lookup_widget(W_WINE_REGISTRY,"CHK_SAVE_PERS_REG")),ChkSavePersReg);
  InitialiseCheck=1;
  gtk_widget_show(W_WINE_REGISTRY);
}


void
on_bt_console_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  char enr[512];
  int find=0;
  char taillex[512];
  char tailley[512];
  char pgtr[512];
  int i;
  taillex[0]='\0';
  tailley[0]='\0';
  pgtr[0]='\0';
  fd=fopen(FichierConfig,"rt");
  Provenance=0;
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[Console]"));
  }
  fgets(enr, 512, fd);
  while ((!feof(fd))&& (!chaine_contient(enr,"[")) && (!chaine_contient(enr,"#")))
  {
    if (chaine_contient(enr,"\"XtermProg\" ="))
    {
      sscanf(enr,"\"XtermProg\" = \"%s\"",pgtr);
      for (i=0;i<strlen(pgtr);i++)
      {
        if (pgtr[i]=='\"') pgtr[i]='\0';
      }
    }
    if (chaine_contient(enr,"\"InitialRows\" ="))
    {
      sscanf(enr,"\"InitialRows\" = \"%s\"",tailley);
      for (i=0;i<strlen(tailley);i++)
      {
        if (tailley[i]=='\"') tailley[i]='\0';
      }
    }
    if (chaine_contient(enr,"\"InitialColumns\" ="))
    {
      sscanf(enr,"\"InitialColumns\" = \"%s\"",taillex);
      for (i=0;i<strlen(taillex);i++)
      {
        if (taillex[i]=='\"') taillex[i]='\0';
      }
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  if (strlen(pgtr)>0) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_CONSOLE,"E_PROGRAM")),pgtr);
  if ((strlen(taillex)>0) && (strlen(tailley)>0))
  {
    strcat(taillex,"x");
    strcat(taillex,tailley);
    gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_CONSOLE,"E_WIDTH")),taillex);
  }
  gtk_widget_show(W_WINE_CONSOLE);
}


void
on_bt_media_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * fd;
  char enr[512];
  int find=0;
  char mmdrv[512];
  char mmwav[512];
  char mmmid[512];
  int i;
  mmdrv[0]='\0';
  mmwav[0]='\0';
  mmmid[0]='\0';
  fd=fopen(FichierConfig,"rt");
  while ((!feof(fd))&& (!find))
  {
    fgets(enr, 512, fd);
    find = (chaine_contient(enr,"[WinMM]"));
  }
  fgets(enr, 512, fd);
  while ((!feof(fd))&& (!chaine_contient(enr,"[")))
  {
    if (chaine_contient(enr,"\"Drivers\" ="))
    {
      sscanf(enr,"\"Drivers\" = \"%s\"",mmdrv);
      for (i=0;i<strlen(mmdrv);i++)
      {
        if (mmdrv[i]=='\"') mmdrv[i]='\0';
      }
    }
    if (chaine_contient(enr,"\"WaveMapper\" ="))
    {
      sscanf(enr,"\"WaveMapper\" = \"%s\"",mmwav);
      for (i=0;i<strlen(mmwav);i++)
      {
        if (mmwav[i]=='\"') mmwav[i]='\0';
      }
    }
    if (chaine_contient(enr,"\"MidiMapper\" ="))
    {
      sscanf(enr,"\"MidiMapper\" = \"%s\"",mmmid);
      for (i=0;i<strlen(mmmid);i++)
      {
        if (mmmid[i]=='\"') mmmid[i]='\0';
      }
    }
    fgets(enr, 512, fd);
  }
  fclose(fd);
  if (strlen(mmdrv)>0) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_DRIVER")),mmdrv);
  if (strlen(mmwav)>0) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_WAVE")),mmwav);
  if (strlen(mmmid)>0) gtk_entry_set_text(GTK_ENTRY(lookup_widget(W_WINE_MEDIA,"E_MIDI")),mmmid);
  gtk_widget_show(W_WINE_MEDIA);
}


void
on_bt_setup_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  char ftemp[512];
  char cmd[512];
  char enr[512];
  FILE * fd;
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp");
  strcpy(cmd,"which winesetuptk 2>/dev/null >");
  strcat(cmd,ftemp);
  system(cmd);
  fd=fopen(ftemp,"rt");
  fgets(enr, 512, fd);
  fclose(fd);
  enr[strlen(enr)-1]='\0';
  fichier_seul(enr);
  if (strcmp(FichierSeul,"winesetuptk")==0)
  {
    system("winesetuptk >/dev/null 2>/dev/null &");
  }
  else
  {
    gtk_widget_show(ERR_WINESETUPTK);
  }
}


void
on_bt_config_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * ficcfg;
  int nb;
  char enr[512];
  ficcfg=fopen(FichierConfig,"rt");
  while (!feof(ficcfg))
  {
    nb=fread(enr,sizeof(char),512,ficcfg);
    gtk_text_insert(GTK_TEXT(lookup_widget(W_WINE_CONFIG,"TXT_WINE_CONFIG")),NULL,NULL,NULL,enr,nb);
  }
  fclose(ficcfg);
  gtk_widget_show(W_WINE_CONFIG);
}


void
on_bt_restore_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  gtk_widget_show(WARN_RESTORE);
}


void
on_bt_debug_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  if (Debug==0)
  {
    Debug=1;
    ecrire_dans_log(texte[176],"\0");
    gtk_widget_show(WARN_DEBUG);
  }
  else
  {
    Debug=0;
    ecrire_dans_log(texte[177],"\0");
    gtk_widget_show(WARN_NODEBUG);
  }
}

void
on_bt_export_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
    gtk_widget_show(W_EXPORT);
}

void
on_bt_config_close_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  if (ModeConfig)
  {
    gtk_widget_show(W_CONFIG);
    gtk_widget_show(W_QUITTER);
  }
  else gtk_widget_hide(W_CONFIG);
}

void
on_bt_add_pgm_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
  DIR * dirp;
  struct dirent * fic;
  char item [512];
  char item2 [512];
  char *item_1;
  char *item_2;
  int i=1;
  char titre[512];
  char ficapp[512];
  FILE * fd;

  dirp=opendir(AppsDir);
  fic=readdir(dirp);
  while (fic != NULL)
  {
    if (fic->d_type==8)
    {
      strcpy(item,fic->d_name);
      item_1=item;
      strcpy(ficapp,AppsDir);
      strcat(ficapp,"/");
      strcat(ficapp,item);
      fd=fopen(ficapp,"rt");
      //titre
      fgets (titre, 512, fd);
      fgets (titre, 512, fd);
      fclose(fd);
      if (strlen(titre)>1)
      {
        titre[strlen(titre)-1]='\0';
	      strcpy(item2,titre);
        item_2=item2;
        gtk_clist_insert(GTK_CLIST(lookup_widget(W_GEST_APP,"TAB_APP")),i,&item_2);
      }
      else gtk_clist_insert(GTK_CLIST(lookup_widget(W_GEST_APP,"TAB_APP")),i,&item_1);
      i++;
    }
    fic=readdir(dirp);
  }
  closedir(dirp);
  SelectRow=-1;
  SelectCol=-1;
  gtk_widget_show(W_GEST_APP);
}


void
on_bt_log_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
  FILE * ficlog;
  int nb;
  char enr[512];
  ficlog=fopen(FichierLog,"rt");
  while (!feof(ficlog))
  {
    nb=fread(enr,sizeof(char),512,ficlog);
    gtk_text_insert(GTK_TEXT(lookup_widget(W_LOG,"TXT_LOG_FILE")),NULL,NULL,NULL,enr,nb);
  }
  fclose(ficlog);
  gtk_widget_show(W_LOG);
}