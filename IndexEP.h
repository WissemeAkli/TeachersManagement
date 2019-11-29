#ifndef INDEXEP_H_INCLUDED
#define INDEXEP_H_INCLUDED
#define maximum 100
#define maxIEP 100
#define tailleIndexEP 500


/*********==============================INDEX ETABLISSEMENT PROFS==========================================================================/
/*** de type TOF******/


typedef struct EnteteIndexEP        ///structure de l'en_tete du fichier index
{

    int nbBlocs;
    int nbElts;

}EnteteIndexEP;

typedef struct TfichIndexEP             ///structure de fichier
{
    FILE *fich;
    EnteteIndexEP entete;
}TfichIndexEP;





/**=================== Structures ======================*/
typedef struct Profs Profs;
struct Profs  ///structure des articles
{
   int NbBloc;/// numero du bloc ou il se trouve
   int index;/// index dans le tableau
   Date dateRecrutement;


};

typedef struct BlocIndexEP       ///structure des blocs (buffer)
{
    char etablissement[500];
    int NB;                 /// le nombre des articles dans le buffer
    Profs profs[maxIEP];
           /// La table contenant les articles
                /// numéro du bloc suivant

}BlocIndexEP;

typedef struct IndexEP
{
    int nbBlocs;
    int nbElts;
    BlocIndexEP *tableau;


}IndexEP;






#endif // INDEXEP_H_INCLUDED
