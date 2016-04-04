/****************************************************************************/
/* commun.c   : Déclarations des variables et fonctions communes            */
/* Auteur     : Philippe BOUSQUET                                           */
/* Modifié le : 05/02/2003                                                  */
/* Crée le    : 05/02/2003                                                  */
/****************************************************************************/
#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <dirent.h>
#include <sys/stat.h>
#include <gnome.h>
#include "support.h"

/****************************************************************************/
/* Déclaration de l'ensemble des fenêtres de XWine                          */
/****************************************************************************/
GtkWidget *W_XWINE;
GtkWidget *W_QUITTER;
GtkWidget *W_EXECUTER;
GtkWidget *W_ABOUT;
GtkWidget *W_LOG;
GtkWidget *W_WINE_CONFIG;
GtkWidget *W_PARCOUR_EXE;
GtkWidget *WARN_NOT_AVAILABLE;
GtkWidget *ERR_PROG_SELECT;
GtkWidget *INF_USE_CD;
GtkWidget *W_ADD_PARAM;
GtkWidget *W_INSTALL_APP;
GtkWidget *W_GEST_APP;
GtkWidget *WARN_DEL_APP;
GtkWidget *ERR_PROG_EMPTY;
GtkWidget *W_RUN_APP;
GtkWidget *W_CALC;
GtkWidget *ERR_AIDE;
GtkWidget *W_EDITEUR;
GtkWidget *WARN_EDIT_QUIT;
GtkWidget *W_EDIT_FILE_SELEC;
GtkWidget *W_GEST_DRIVE;
GtkWidget *W_DRIVE_CFG;
GtkWidget *ERR_DRIVE_SEL;
GtkWidget *ERR_DRIVE_PATH;
GtkWidget *WARN_DRIVE_DEL;
GtkWidget *W_DRIVE_SEL_PATH;
GtkWidget *ERR_NOT_PATH;
GtkWidget *W_WINE_SYSTEM;
GtkWidget *W_DLL_GEST;
GtkWidget *W_DLL_OVERRIDE;
GtkWidget *ERR_DLL_SEL;
GtkWidget *ERR_DLL_NAME;
GtkWidget *W_WINE_LOOK;
GtkWidget *ERR_WINESETUPTK;
GtkWidget *W_WINE_GFX;
GtkWidget *W_APP_DLL;
GtkWidget *ERR_APP_NOT_FOUND;
GtkWidget *W_WINE_PORT;
GtkWidget *W_WINE_REGISTRY;
GtkWidget *W_WINE_MEDIA;
GtkWidget *W_WINE_CONSOLE;
GtkWidget *WARN_RESTORE;
GtkWidget *W_WINE_VERSION;
GtkWidget *W_CONFIG;
GtkWidget *WARN_DEBUG;
GtkWidget *WARN_NODEBUG;
GtkWidget *W_PREFS;
GtkWidget *W_EXPORT;
GtkWidget *W_MENU;
GtkWidget *W_INFO_MAJ;

/****************************************************************************/
/* Déclaration des Variables Globales                                       */
/****************************************************************************/
char Home [512];
char Commande [512];
char Programme [512];
char AppsDir [512];
char LangDir [512];
char KdeDir [512];
char GnomeDir [512];
int Disques [26];
char Labels [26][255];
char XWineDir [512];
char FichierConfig [512];
char FichierLog [512];
char FichierIcone [512];
char FichierPref [512];
char FichierHisto [512];
char WineDir [512];
int Provenance=0;
int iProvenance=0;
int SelectRow=0;
int SelectCol=0;
char NomDll [512];
char OverrideDll [512];
char FichierSeul [512];
char RepertoireSeul [512];
int  Debug=0;
int  Historique=0;
int  UseCd=0;
int  InitialiseCheck=0;
int  NeedParam=0;
int  EmuleMsDos=0;
int  UseDbf=0;
int  UseXshm=0;
int  UseDxgrab=0;
int  UseDga=0;
int  DeleteLog=1;
int  ChkLoadGenReg=0;
int  ChkLoadPersReg=0;
int  ChkLoadWinReg=0;
int  ChkSavePersReg=0;
int  ModeConfig =0;
char ListeTaches [200][25];
char ListeProgs [200][25];
char TachesItems [200][50];
int  NombreTaches=0;
char LHistorique [10][255];
char * Langue;
char * User;
char texte [255][255] ;
char programToLaunch [255];
int  ExportConfig=0;  
int  ExportProgs=0;  
char lstProg[255][50];
int  nbProg=0;
int  crProg=0;
/****************************************************************************/
/* Déclaration des Fonctions Communes                                       */
/****************************************************************************/
int ecrire_dans_log(char * commande,char * suite)
{
  char texte [256];
  int mois;
  int annee;
  char *jj;
  char *mm;
  char *ssaa;
  char *hh;
  char *mn;
  char *ss;
  GtkClock * dthr;
  dthr = GTK_CLOCK(lookup_widget(W_XWINE,"OBJ_CLOCK"));
  jj = (char *) malloc(3);
  mm = (char *) malloc(3);
  ssaa = (char *) malloc(5);
  hh = (char *) malloc(3);
  mn = (char *) malloc(3);
  ss = (char *) malloc(3);
  mois=dthr->tm->tm_mon + 1;
  if (dthr->tm->tm_year<100) annee=dthr->tm->tm_year + 1900;
  else annee=dthr->tm->tm_year - 100 + 2000;
  sprintf(jj,"%d",dthr->tm->tm_mday);
  sprintf(mm,"%d",mois);
  sprintf(ssaa,"%d",annee);
  sprintf(hh,"%d",dthr->tm->tm_hour);
  sprintf(mn,"%d",dthr->tm->tm_min);
  sprintf(ss,"%d",dthr->tm->tm_sec);
  strcpy(texte,"echo \"# xwine - ");
  if (dthr->tm->tm_mday<10) strcat(texte,"0");
  strcat(texte,jj);
  strcat(texte,"/");
  if (mois<10) strcat(texte,"0");
  strcat(texte,mm);
  strcat(texte,"/");
  strcat(texte,ssaa);
  strcat(texte," ");
  if (dthr->tm->tm_hour<10) strcat(texte,"0");
  strcat(texte,hh);
  strcat(texte,":");
  if (dthr->tm->tm_min<10) strcat(texte,"0");
  strcat(texte,mn);
  strcat(texte,":");
  if (dthr->tm->tm_sec<10) strcat(texte,"0");
  strcat(texte,ss);
  strcat(texte," - ");
  strcat(texte,commande);
  if (strlen(suite)>0)
  {
    strcat(texte," ");
    strcat(texte,suite);
  }
  strcat(texte," \" >>");
  strcat(texte,FichierLog);
  system(texte);
  free(jj);
  free(mm);
  free(ssaa);
  free(hh);
  free(mn);
  free(ss);
  return(0);
}

int maj_tab (char t[],char p[],int n)
{
  int i=0;
  while ((strcmp(ListeTaches[n-1],t)!=0) && (n<=NombreTaches))
  {
    for (i=n;i<NombreTaches;i++)
    {
      strcpy(ListeProgs[i-1],ListeProgs[i]);
      strcpy(ListeTaches[i-1],ListeTaches[i]);
    }
    if (NombreTaches >0) NombreTaches--;
  }
  if (n>NombreTaches)
  {
      strcpy(ListeTaches[n-1],t);
      if (strlen(p)>0) strcpy(ListeProgs[n-1],p);
      else strcpy(ListeProgs[n-1],"wine");
      NombreTaches++;
  }
  return(0);
}

int task (char tache[])
{
  char cmd [255];
  char fic [255];
  char tsk [255];
  char t [50];
  int i;
  GList * taches;
  int n=0;
  int f=0;
  FILE * fd;
  strcpy(cmd,"ps -A | grep [^x]wine >");
  strcat(cmd,XWineDir);
  strcat(cmd,"/liste.tsk");
  system(cmd);
  strcpy(fic,XWineDir);
  strcat(fic,"/liste.tsk");
  fd=fopen(fic,"rt");
  fgets(tsk,512,fd);
  taches=NULL;
  n=0;
  while (!feof(fd))
  {
     tsk[strlen(tsk)-1]='\0';
     t[0]='\0';
     if (strlen(tsk)>0)
     {
       n++;
       i=0;
       f=0;
       while (f!=2)
       {
         if (tsk[i]!=' ') f=1;
         if (f==1 && tsk[i]==' ') f=2;
         else
         {
           t[i]=tsk[i];
           i++;
         }
       }
       t[i]='\0';
       if (n>NombreTaches) maj_tab(t,tache,n);
       else maj_tab(t,"",n);
     }
     fgets(tsk,512,fd);
  }
  fclose(fd);
  NombreTaches=n;
  for(i=0;i<NombreTaches;i++)
  {
    strcpy(TachesItems[i],ListeTaches[i]);
    strcat(TachesItems[i]," +++ ");
    strcat(TachesItems[i],ListeProgs[i]);
    taches = g_list_append(taches, (gpointer) _(TachesItems[i]));
  }
  if (taches==NULL) taches = g_list_append(taches, (gpointer) _(""));
  gtk_combo_set_popdown_strings(GTK_COMBO(lookup_widget(W_XWINE,"CB_TASK")),taches);
  g_list_free(taches);
  return(0);
}

int extract_dll(char e [])
{
  int i=0;
  int j=0;
  if (e[i]=='"') i++;
  while ((i<strlen(e))&&(e[i]!='"')&&(e[i]!=' '))
  {
    NomDll[j]=e[i];
    j++;
    i++;
  }
  NomDll[j]='\0';
  i++;
  while ((e[i]==' ') || (e[i]=='=')) i++;
  if (e[i]=='"') i++;
  j=0;
  while ((i<strlen(e))&&(e[i]!='"'))
  {
    OverrideDll[j]=e[i];
    j++;
    i++;
  }
  OverrideDll[j]='\0';
  return(0);
}

int chaine_contient(char chaine [], char valeur [])
{
  int ret=0;
  int i;
  if (strlen(chaine)>=strlen(valeur))
  {
    ret=1;
    for (i=0;i<strlen(valeur);i++)
    {
      ret=ret && (chaine[i]==valeur[i]);
    }
  }
  return(ret);
}

int fichier_seul (char fc [])
{
  char res [512];
  char ent [512];
  char tmp [512];
  int i,j;
  strcpy(ent,fc);
  j=0;
  i=strlen(ent)-1;
  while ((i>=0) && (ent[i]!='/'))
  {
    tmp[j]=ent[i];
    j++;
    i--;
  }
  tmp[j]='\0';
  j=0;
  for (i=strlen(tmp)-1;i>=0;i--)
  {
    res[j]=tmp[i];
    j++;
  }
  res[j]='\0';
  strcpy(FichierSeul,res);
  return(1);
}

int repertoire_seul (char rp [])
{
  char rent [512];
  int i;
  strcpy(rent,rp);
  i=strlen(rent)-1;
  while ((i>=0) && (rent[i]!='/'))
  {
    rent[i]='\0';
    i--;
  }
  rent[i]='\0';
  strcpy(RepertoireSeul,rent);
  return(1);
}


void version_win (char app[], char vers[], int dos)
{
  FILE * fd;
  FILE * fo;
  int find=0;
  int findit=0;
  char enr[512];
  char strf[512];
  char enr2[512];
  char ftemp[512];
  strcpy(strf,"[AppDefaults\\\\");
  strcat(strf,app);
  strcat(strf,"\\\\Version]");
  strcpy(ftemp,XWineDir);
  strcat(ftemp,"/temp.conf");
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
      strcpy(enr2,"\"Windows\" = \"");
      strcat(enr2,vers);
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      if (dos) fputs("\"DOS\" = \"6.22\"\n",fo);
    }
    else if (chaine_contient(enr,"[")) find=0;
    if (!find) fputs(enr,fo);
    fgets(enr, 512, fd);
  }
  if (!findit)
  {
      fputs(strf,fo);
      strcpy(enr2,"\"Windows\" = \"");
      strcat(enr2,vers);
      strcat(enr2,"\"\n");
      fputs(enr2,fo);
      if (dos) fputs("\"DOS\" = \"6.22\"\n",fo);
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
}

char* prefbrows(void)
{
  char* browser = getenv("BROWSER");
  if ( browser == NULL || strlen(browser) > 50 ) return "";
  return browser;
}

int autorisations()
{
  if (strcmp(User,"/root")!=0)
  {
    gtk_widget_hide(GTK_WIDGET(lookup_widget(W_CONFIG,"BT_EXPORT")));
    gtk_widget_hide(GTK_WIDGET(lookup_widget(W_CONFIG,"pixmap15")));
  }
  return 0;
}

int options(int argc, char *argv[])
{
  strcpy(programToLaunch,"\0");      
  if (argc>2)
  {
     fprintf(stderr, "USAGE : xwine             // Launch XWine interface\n");
     fprintf(stderr, "        xwine file.exe    // Launch the file.exe under wine\n");
     fprintf(stderr, "        xwine --config    // Launch the XWine Configuration Panel for wine\n");
     fprintf(stderr, "        xwine --version   // Print XWine version and exit\n");
     fprintf(stderr, "        xwine --help      // Print XWine commond options and exit\n");
     exit(1);
  }
  if (argc<2)
  {
     return 0;     
  }
  if (strcmp(argv[1],"--help")==0)
  {
     fprintf(stdout, "XWine v%s - A Graphical User Interface for Wine\n",VERSION);
     fprintf(stdout, "By Philippe Bousquet <Darken33@free.fr> \n");
     fprintf(stdout, "Copyright (c) 2001-2004 Philippe Bousquet.\n");      
     fprintf(stdout, "This software is under Gnu General Public License.\n");      
     fprintf(stdout, "\n");
     fprintf(stdout, "USAGE : xwine             // Launch XWine interface\n");
     fprintf(stderr, "        xwine file.exe    // Launch the file.exe under wine\n");
     fprintf(stdout, "        xwine --config    // Launch the XWine Configuration Panel for wine\n");
     fprintf(stdout, "        xwine --version   // Print XWine version and exit\n");
     fprintf(stdout, "        xwine --help      // Print XWine commond options and exit\n");
     exit(0);
  }
  else if (strcmp(argv[1],"--version")==0)
  {
     fprintf(stdout, "XWine v%s\n",VERSION);
     exit(0);
  }
  else if (strcmp(argv[1],"--config")==0)
  {
     ModeConfig = 1;
     return 0;     
  }
  else
  {
    strcpy(programToLaunch,argv[1]);
    char chaine[255];
    strcpy(chaine, argv[1]);
    char * chaine2=strrchr(chaine,'.');
    if (chaine2!=NULL && ((strcmp(chaine2,".exe")==0) || (strcmp(chaine2,".EXE")==0)))
    {
      return 0;
    }
    else
    {
      fprintf(stderr, "USAGE : xwine             // Launch XWine interface\n");
      fprintf(stderr, "        xwine file.exe    // Launch the file.exe under wine\n");
      fprintf(stderr, "        xwine --config    // Launch the XWine Configuration Panel for wine\n");
      fprintf(stderr, "        xwine --version   // Print XWine version and exit\n");
      fprintf(stderr, "        xwine --help      // Print XWine commond options and exit\n");
      exit(1);
    }
  }
}

int constitue_menu(char * dir, char *ref)
{
  char menu [512];
  char * item;
  DIR * dirp;
  struct dirent * fic;
  char directory [512];
  char names[512][255];
  int i=0;
  strcpy(directory,ref);
  strcat(directory,"/");
  strcat(directory,dir);
  //rechercher les repertoires du Menu
  dirp=opendir(directory);
  if (dirp==NULL) return -1;
  fic=readdir(dirp);
  while (fic != NULL)
  {
    if ((fic->d_type==4) && (fic->d_name[0]!='.'))
    {
      strcpy(menu,dir);      
      strcat(menu,"/");
      strcat(menu,fic->d_name);
      strcpy(names[i],menu);
      i++;
    }
    fic=readdir(dirp);
  }  
  closedir(dirp);
  for (i;i>0;i--)
  {
    constitue_menu(names[i-1],ref);
    item=names[i-1];
    gtk_clist_insert(GTK_CLIST(lookup_widget(W_MENU,"TAB_MENU")),0,&item);
  }
  return 1;
}