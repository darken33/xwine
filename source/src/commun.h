/****************************************************************************/
/* commun.h   : Déclarations des fonctions communes                         */
/* Auteur     : Philippe BOUSQUET                                           */
/* Modifié le : 05/02/2003                                                  */
/* Crée le    : 05/02/2003                                                  */
/****************************************************************************/

/****************************************************************************/
/* Déclaration des Fonctions Communes                                       */
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