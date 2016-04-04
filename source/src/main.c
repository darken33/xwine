/*
 * main.c initial généré par Glade. Éditer ce fichier à votre
 * convenance. Glade n'écrira plus dans ce fichier.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gnome.h>
#include <dirent.h>
#include <sys/stat.h>

#include "interface.h"
#include "support.h"
#include "donnees.h"
#include "commun.h"

#include <libxml/tree.h>
#include <libxml/parser.h>
#include <libxml/xmlreader.h>
#include <string.h>

void executer (void)
{
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
  
  fichier_seul(programToLaunch);
  FichierSeul[strlen(FichierSeul)-4]='\0';
  //rechercher le fichier
  dirp=opendir(AppsDir);
  fic=readdir(dirp);
  while ((fic != NULL) && (strcmp(FichierSeul,prog)!=0))
  {
    if (fic->d_type==8)
    {
      strcpy(prog,fic->d_name);
    }
    fic=readdir(dirp);
  }
  closedir(dirp);
  if (strcmp(FichierSeul,prog)==0)
  {
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
      exit(0);
    }
  }
  else
  {
    repertoire_seul(programToLaunch);
    fichier_seul(programToLaunch);
    chdir(RepertoireSeul);
    strcpy(Commande,"wine ");          
    strcat(Commande," \"");
    strcat(Commande,FichierSeul);
    strcat(Commande,"\"");
    strcat(Commande," 2>>");
    strcat(Commande,FichierLog);
    strcat(Commande," &");
    system(Commande);
    task(Programme);
    ecrire_dans_log(texte[175],FichierSeul);
    exit(0);
  }
}

int
main (int argc, char *argv[])
{

  DIR * dirp;
  FILE * fd;
  char pixmap [512];
  char taille [512];
  char langue [512];
  int i;

  // Verifier les Options
  options(argc, argv);

#ifdef ENABLE_NLS
  bindtextdomain (PACKAGE, PACKAGE_LOCALE_DIR);
  textdomain (PACKAGE);
#endif
  gnome_init ("xwine", VERSION, 1, argv);
  
  // Paramètrage des répertoires de XWine
  strcpy(Home,getenv("HOME"));
  strcpy(XWineDir,Home);
  strcat(XWineDir,"/.xwine");
  strcpy(WineDir,Home);
  strcat(WineDir,"/.wine");
  strcpy(AppsDir,XWineDir);
  strcat(AppsDir,"/apps");
  strcpy(FichierPref,XWineDir);
  strcat(FichierPref,"/xwine.conf");
  strcpy(FichierHisto,XWineDir);
  strcat(FichierHisto,"/historique");
  // Directory pour les langues
  strcpy(LangDir,"/usr/share/xwine/lang");
  dirp=opendir(LangDir);
  if (dirp==NULL) strcpy(LangDir,"/usr/local/share/xwine/lang");
  else closedir(dirp);
  // KDE dir
  strcpy(KdeDir,Home);
  strcat(KdeDir,"/Desktop");
  dirp=opendir(KdeDir);
  if (dirp==NULL) strcpy(KdeDir,"\0");
  else closedir(dirp);
  // Gnome dir
  strcpy(GnomeDir,Home);
  strcat(GnomeDir,"/Desktop");
  dirp=opendir(GnomeDir);
  if (dirp==NULL) strcpy(GnomeDir,"\0");
  else closedir(dirp);

  //Verif répertoire XWine
  dirp=opendir(XWineDir);
  if (dirp==NULL) mkdir(XWineDir,0755);
  else closedir(dirp);

  //Verif répertoire Apps
  dirp=opendir(AppsDir);
  if (dirp==NULL) mkdir(AppsDir,0755);
  else closedir(dirp);

  //Paramètrage des fichiers
  strcpy(FichierLog,XWineDir);
  strcpy(FichierConfig,WineDir);
  strcat(FichierLog,"/wine.log");
  strcat(FichierConfig,"/config");

  // Recupéretion du user et de la langue
  User = getenv("HOME");
  Langue = getenv("LANGUAGE");
  if (Langue!=NULL)
  {
    Langue = strchr(getenv("LANGUAGE"),':');
    if (Langue!=NULL) Langue++;
    else 
    {
      Langue = getenv("LANGUAGE");
      Langue[2]='\0';
    }
  }
  else
  {
   Langue = getenv("LANG");
   if (Langue!=NULL) Langue[2]='\0';
   else Langue="en\0";  
  }  

  // Lecture des préférences
  fd=fopen(FichierPref,"rt");
  pixmap[0]='\0';
  taille[0]='\0';
  langue[0]='\0';
  if (fd!=NULL)
  {
    fgets(pixmap, 512, fd);
    fgets(taille, 512, fd);
    fgets(langue, 512, fd);
    pixmap[strlen(pixmap)-1]='\0';
    fclose(fd);
  }
  if (strlen(langue)<=0)
  {
    strcpy(langue,"lang.");
    strcat(langue,Langue);
    strcat(langue,".xml");
    char fichier[512];
    strcpy(fichier,LangDir);
    strcat(fichier,"/");
    strcat(fichier,langue);
    fd=fopen(fichier,"rt");
    if (fd==NULL) strcpy(langue,"lang.en.xml");
    else fclose(fd);
  }
  else langue[strlen(langue)-1]='\0';
  
  // Chargement du fichier XML
  char fichierXML[512];
  strcpy(fichierXML,LangDir);
  strcat(fichierXML,"/");
  strcat(fichierXML,langue);
  extern int xmlDoValidityCheckingDefaultValue;
  xmlDoValidityCheckingDefaultValue=0;
  xmlDocPtr p_doc=NULL;
  xmlNodePtr p_node=NULL;
  xmlNodePtr p_lastnode=NULL;
  p_doc=xmlParseFile(fichierXML);
  p_node=xmlDocGetRootElement(p_doc);
  p_lastnode=xmlGetLastChild(p_node);
  p_node=p_node->children->next;
  char out[255];	
  int outlen=255,inlen;
  xmlChar *value;
	
  do
  {
     switch(p_node->type)
     {	
	case XML_TEXT_NODE:
                   if (p_node->next) p_node=p_node->next;
		   else p_node=p_node->parent->next;
               	   break;			
	case XML_ELEMENT_NODE:
		   if(strcmp(p_node->name,"text")==0)
                   {
                     int i;
                     sscanf(xmlGetProp(p_node,"id"),"%d",&i);
            		     value=xmlNodeGetContent(p_node);
 		                 inlen=strlen(value);
		                 outlen=255;
                     UTF8Toisolat1(out,&outlen,value,&inlen);
                     out[outlen]=0;
                     strcpy(texte[i],out);
                   }  
                   if (p_node->next) p_node=p_node->next;
		   else p_node=p_node->parent->next;
		   break;			
	default:
		   break;
     }
  } while (p_node!=p_lastnode);
  xmlFreeDoc(p_doc);
  
  //Verif répertoire wine
  dirp=opendir(WineDir);
  if (dirp==NULL) 
  {
    if (system("wine --version >/dev/null 2>/dev/null")!=NULL)
    {
      fprintf(stderr,"%s\n",texte[173]);
      exit(1);
    }
  }  
  else closedir(dirp);
  
  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  if (ModeConfig)
  {
    char texte151[255];
    strcpy(texte151,"XWine v");          
    strcat(texte151,VERSION);          
    strcat(texte151," : ");          
    strcat(texte151,texte[151]);          
    strcpy(texte[151],texte151);          
  }  
  W_XWINE = create_W_XWINE ();
  W_QUITTER = create_W_QUITTER ();
  W_EXECUTER = create_W_EXECUTER ();
  W_ABOUT = create_W_ABOUT ();
  W_LOG = create_W_LOG ();
  W_WINE_CONFIG = create_W_WINE_CONFIG ();
  W_PARCOUR_EXE = create_W_PARCOUR_EXE ();
  WARN_NOT_AVAILABLE = create_WARN_NOT_AVAILABLE ();
  ERR_PROG_SELECT = create_ERR_PROG_SELECT ();
  INF_USE_CD = create_INF_USE_CD ();
  W_ADD_PARAM = create_W_ADD_PARAM ();
  W_INSTALL_APP = create_W_INSTALL_APP ();
  W_GEST_APP = create_W_GEST_APP ();
  WARN_DEL_APP = create_WARN_DEL_APP ();
  ERR_PROG_EMPTY = create_ERR_PROG_EMPTY ();
  W_RUN_APP = create_W_RUN_APP ();
  W_CALC = create_W_CALC ();
  ERR_AIDE = create_ERR_AIDE ();
  W_EDITEUR = create_W_EDITEUR ();
  WARN_EDIT_QUIT = create_WARN_EDIT_QUIT ();
  W_EDIT_FILE_SELEC = create_W_EDIT_FILE_SELEC ();
  W_GEST_DRIVE = create_W_GEST_DRIVE ();
  W_DRIVE_CFG = create_W_DRIVE_CFG ();
  ERR_DRIVE_SEL = create_ERR_DRIVE_SEL ();
  ERR_DRIVE_PATH = create_ERR_DRIVE_PATH ();
  WARN_DRIVE_DEL = create_WARN_DRIVE_DEL ();
  W_DRIVE_SEL_PATH = create_W_DRIVE_SEL_PATH ();
  ERR_NOT_PATH = create_ERR_NOT_PATH ();
  W_WINE_SYSTEM = create_W_WINE_SYSTEM ();
  W_DLL_GEST = create_W_DLL_GEST ();
  W_DLL_OVERRIDE = create_W_DLL_OVERRIDE ();
  ERR_DLL_SEL = create_ERR_DLL_SEL ();
  ERR_DLL_NAME = create_ERR_DLL_NAME ();
  W_WINE_LOOK = create_W_WINE_LOOK ();
  ERR_WINESETUPTK = create_ERR_WINESETUPTK ();
  W_WINE_GFX = create_W_WINE_GFX ();
  W_APP_DLL = create_W_APP_DLL ();
  ERR_APP_NOT_FOUND = create_ERR_APP_NOT_FOUND ();
  W_WINE_PORT = create_W_WINE_PORT ();
  W_WINE_REGISTRY = create_W_WINE_REGISTRY ();
  W_WINE_MEDIA = create_W_WINE_MEDIA ();
  W_WINE_CONSOLE = create_W_WINE_CONSOLE ();
  WARN_RESTORE = create_WARN_RESTORE ();
  W_WINE_VERSION = create_W_WINE_VERSION ();
  W_CONFIG = create_W_CONFIG ();
  WARN_DEBUG = create_WARN_DEBUG ();
  WARN_NODEBUG = create_WARN_NODEBUG ();
  W_PREFS = create_W_PREFS ();
  W_EXPORT = create_W_EXPORT ();
  W_MENU = create_W_MENU ();
  W_INFO_MAJ = create_W_INFO_MAJ ();
  autorisations();
  char * rep="/";
  if (!constitue_menu("","/usr/share/applnk-mdk")) constitue_menu("","/usr/share/applnk");
  gtk_clist_insert(GTK_CLIST(lookup_widget(W_MENU,"TAB_MENU")),0,&rep);
  
  /*****************************************************/
  /* Ouverture du fichier de préférences               */
  /*****************************************************/ 
  if (strlen(pixmap)>0)
  {
    if (strcmp(taille,"1024x768\n")==0)
    {
      gnome_pixmap_load_file_at_size(lookup_widget(W_XWINE,"IMG_XWINE"),pixmap,1024,768);
      gtk_widget_set_usize(lookup_widget(W_XWINE,"IMG_XWINE"),1024,728);
    }
    else if (strcmp(taille,"800x600\n")==0)
    {
      gnome_pixmap_load_file_at_size(lookup_widget(W_XWINE,"IMG_XWINE"),pixmap,800,560);
      gtk_widget_set_usize(lookup_widget(W_XWINE,"IMG_XWINE"),800,560);
    }
    else 
    {
      gnome_pixmap_load_file_at_size(lookup_widget(W_XWINE,"IMG_XWINE"),pixmap,640,440);
      gtk_widget_set_usize(lookup_widget(W_XWINE,"IMG_XWINE"),640,440);
    }
  }
  else
  {
      gnome_pixmap_load_file_at_size(lookup_widget(W_XWINE,"IMG_XWINE"),"/usr/share/pixmaps/xwine/background/XWine_standard_bkg.png",640,440);
      gtk_widget_set_usize(lookup_widget(W_XWINE,"IMG_XWINE"),640,440);
  }
  gtk_widget_destroy(W_PREFS);
  
  /****************************************************/
  /* Ouverture du fichier Historique                  */
  /****************************************************/
  fd=fopen(FichierHisto,"rt");
  if (fd!=NULL)
  {
    for (i=0;i<10;i++)
    {
      fgets(LHistorique[i], 512, fd);
      LHistorique[i][strlen(LHistorique[i])-1]='\0';    
    }
    fclose(fd);
    gtk_widget_destroy(W_EXECUTER);
  }
  
  ecrire_dans_log(texte[174],"");

  /*
   * Verifier la date du fichier de onfig par rapport au fichier /etc/wine/config
   */
  struct stat f1;
  struct stat f2;
  stat(FichierConfig,&f1);
  stat("/etc/wine/config",&f2);
  char cmd[255];
  if ((f1.st_mtim.tv_sec)<(f2.st_mtim.tv_sec))
  {
    // Ecraser le fichier
    strcpy(cmd,"cp -f /etc/wine/config ");
    strcat(cmd,FichierConfig);
    strcat(cmd," >/dev/null 2>/dev/null");
    system(cmd);
    ecrire_dans_log(texte[219],"wine config");    
  }
  
  /*
   * Pour toutes les applications de /etc/xwine/
   */
    DIR * DirPg;
    struct dirent * FicPg;
    char commande [512];
    DirPg=opendir("/etc/xwine/apps");
  if (DirPg!=NULL)
  {  
    FicPg=readdir(DirPg);
    while (FicPg != NULL)
    {
      if (FicPg->d_type==8)
      {
        char fc1[255];
        char fc2[255];
        strcpy(fc1,AppsDir);
        strcat(fc1,"/");
        strcat(fc1,FicPg->d_name);
        strcpy(fc2,"/etc/xwine/apps/");
        strcat(fc2,FicPg->d_name);
        stat(fc1,&f1);
        stat(fc2,&f2);
        if ((f1.st_mtim.tv_sec)<(f2.st_mtim.tv_sec))
        {
          strcpy(commande,"cp -f ");      
          strcat(commande,fc2);      
          strcat(commande," ");      
          strcat(commande,fc1);
          system(commande);
          ecrire_dans_log(texte[219],FicPg->d_name);    
        }  
      }
      FicPg=readdir(DirPg);
    }
    closedir(DirPg);
  } 
  if (ModeConfig) gtk_widget_show (W_CONFIG);
  else if (strlen(programToLaunch)>0) executer();
  else gtk_widget_show (W_XWINE); 

  gtk_main ();
  return 0;
}