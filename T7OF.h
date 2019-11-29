#ifndef T7OF_H_INCLUDED
#define T7OF_H_INCLUDED
#define maximum 100
#define maxIEP 100
#define tailleIndexEP 500

/**===========================================STRUCTURES UTILISEES=========================================================*/
typedef struct Date       ///structure de la date
{
    int jour;
    int mois;
    int annee;
}Date;
/**=====================*/


typedef struct Enseignant ///structure des enregistrements
{
   int matricule;
   char nom[30];
   char prenom[30];
   Date date_naissance;
   char wilaya_naissance[20];
   char sexe [8]; /// 1 masculin, 2 feminin
   char groupe_sanguin[3];
   Date date_recrutement;
   char grade[50];
   char specialite[20];
   char dernier_diplome[20];
   char etablissement_univ[500];

   int efface;

}Enseignant;
/**=====================*/

typedef struct Bloc        ///structure des blocs (buffer)
{
    int NBloc;                 /// le numero du bloc
    Enseignant enseignants[maximum];
    //Enseignant enseignants=malloc(maximum*sizeof(Enseignant));        /// La table contenant les enseignants
    int NbElt;/// le nombre d'elements dans le bloc
    int nbEff;
    int efface;
}Bloc;


/**===================================Structures utilisées T7OF =================================================*/

typedef struct Entete        ///structure de l'entete du fichier
{
    int NbBlocs;/// nombre de blocs *1*
    int NbElements;/// Nombre d'enregistrements contenus dans le fichier *2*
    int NbInsert;/// Nombre d'enregistreements insérés *3*
    int NbSupp;/// Nombre d'enregistreements supprimés *4*

}Entete;
/**=====================*/

typedef struct Tfich             ///structure de fichier
{
    FILE *fich;
    Entete entete;
}Tfich;
/**===============================================================================================================*/


void aff_entete(Tfich *fichier,int i, int valeur);
int entete(Tfich *fichier, int i);
void liredir(Tfich *fichier, int i , Bloc *buf);
void ecriredir(Tfich *fichier, int i, Bloc *buf);
void ouvrir(Tfich *fichier,char *nomFich,char mode);
void fermer(Tfich *fichier);
int alloc_bloc(Tfich *fichier,char *nomFich);


/**===============================================================================================================*/






#endif // T7OF_H_INCLUDED
