/****************************************************************************/
/* commun.h   : D�clarations des fonctions communes                         */
/* Auteur     : Philippe BOUSQUET                                           */
/* Modifi� le : 05/02/2003                                                  */
/* Cr�e le    : 05/02/2003                                                  */
/****************************************************************************/

/****************************************************************************/
/* D�claration des Fonctions Communes                                       */
/****************************************************************************/
extern int ecrire_dans_log(char * commande,char * suite);

extern int maj_tab (char t[],char p[],int n);

extern int task (char tache[]);

extern int extract_dll(char e []);

extern int chaine_contient(char chaine [], char valeur []);

extern int fichier_seul(char fc []);

extern int repertoire_seul(char rp []);

extern void version_win(char app[], char vers[], int dos);

extern char* prefbrows(void);

extern int autorisations();

extern int options(int argc, char *argv[]);

extern int constitue_menu(char * dir, char * ref);