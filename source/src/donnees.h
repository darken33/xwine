/****************************************************************************/
/* données.h  : Déclarations des variables communes                         */
/* Auteur     : Philippe BOUSQUET                                           */
/* Modifié le : 05/02/2003                                                  */
/* Crée le    : 05/02/2003                                                  */
/****************************************************************************/

/****************************************************************************/
/* Déclaration de l'ensemble des fenêtres de XWine                          */
/****************************************************************************/
extern  GtkWidget *W_XWINE;
extern  GtkWidget *W_QUITTER;
extern  GtkWidget *W_EXECUTER;
extern  GtkWidget *W_ABOUT;
extern  GtkWidget *W_LOG;
extern  GtkWidget *W_WINE_CONFIG;
extern  GtkWidget *W_PARCOUR_EXE;
extern  GtkWidget *WARN_NOT_AVAILABLE;
extern  GtkWidget *ERR_PROG_SELECT;
extern  GtkWidget *INF_USE_CD;
extern  GtkWidget *W_ADD_PARAM;
extern  GtkWidget *W_INSTALL_APP;
extern  GtkWidget *W_GEST_APP;
extern  GtkWidget *WARN_DEL_APP;
extern  GtkWidget *ERR_PROG_EMPTY;
extern  GtkWidget *W_RUN_APP;
extern  GtkWidget *W_CALC;
extern  GtkWidget *ERR_AIDE;
extern  GtkWidget *W_EDITEUR;
extern  GtkWidget *WARN_EDIT_QUIT;
extern  GtkWidget *W_EDIT_FILE_SELEC;
extern  GtkWidget *W_GEST_DRIVE;
extern  GtkWidget *W_DRIVE_CFG;
extern  GtkWidget *ERR_DRIVE_SEL;
extern  GtkWidget *ERR_DRIVE_PATH;
extern  GtkWidget *WARN_DRIVE_DEL;
extern  GtkWidget *W_DRIVE_SEL_PATH;
extern  GtkWidget *ERR_NOT_PATH;
extern  GtkWidget *W_WINE_SYSTEM;
extern  GtkWidget *W_DLL_GEST;
extern  GtkWidget *W_DLL_OVERRIDE;
extern  GtkWidget *ERR_DLL_SEL;
extern  GtkWidget *ERR_DLL_NAME;
extern  GtkWidget *W_WINE_LOOK;
extern  GtkWidget *ERR_WINESETUPTK;
extern  GtkWidget *W_WINE_GFX;
extern  GtkWidget *W_APP_DLL;
extern  GtkWidget *ERR_APP_NOT_FOUND;
extern  GtkWidget *W_WINE_PORT;
extern  GtkWidget *W_WINE_REGISTRY;
extern  GtkWidget *W_WINE_MEDIA;
extern  GtkWidget *W_WINE_CONSOLE;
extern  GtkWidget *WARN_RESTORE;
extern  GtkWidget *W_WINE_VERSION;
extern  GtkWidget *W_CONFIG;
extern  GtkWidget *WARN_DEBUG;
extern  GtkWidget *WARN_NODEBUG;
extern  GtkWidget *W_PREFS;
extern  GtkWidget *W_EXPORT;
extern  GtkWidget *W_MENU;
extern  GtkWidget *W_INFO_MAJ;

/****************************************************************************/
/* Déclaration des Variables Globales                                       */
/****************************************************************************/
extern  char Home [512];
extern  char Commande [512];
extern  char Programme [512];
extern  char AppsDir [512];
extern  char KdeDir [512];
extern  char LangDir [512];
extern  char GnomeDir [512];
extern  int Disques [26];
extern  char Labels [26][255];
extern  char XWineDir [512];
extern  char FichierConfig [512];
extern  char FichierLog [512];
extern  char FichierIcone [512];
extern  char FichierPref [512];
extern  char FichierHisto [512];
extern  char WineDir [512];
extern  int Provenance;
extern  int iProvenance;
extern  int SelectRow;
extern  int SelectCol;
extern  char NomDll [512];
extern  char OverrideDll [512];
extern  char FichierSeul [512];
extern  char RepertoireSeul [512];
extern  int  Debug;
extern  int  Historique;
extern  int  UseCd;
extern  int  InitialiseCheck;
extern  int  NeedParam;
extern  int  EmuleMsDos;
extern  int  UseDbf;
extern  int  UseXshm;
extern  int  UseDxgrab;
extern  int  UseDga;
extern  int  DeleteLog;
extern  int  ChkLoadGenReg;
extern  int  ChkLoadPersReg;
extern  int  ChkLoadWinReg;
extern  int  ChkSavePersReg;
extern int  ModeConfig;
extern char ListeTaches [200][25];
extern char ListeProgs [200][25];
extern char TachesItems [200][50];
extern int NombreTaches;
extern char LHistorique [10][255];
extern char *Langue;
extern char *User;
extern char texte [255][255] ;
extern char programToLaunch [255];
extern int  ExportConfig;  
extern int  ExportProgs;  
extern char lstProg[255][50];
extern int  nbProg;
extern int  crProg;

/****************************************************************************/
/* Définition du navigateur : Patch 1 Mandrake                              */
/****************************************************************************/
#define NAVIGATEUR prefbrows()