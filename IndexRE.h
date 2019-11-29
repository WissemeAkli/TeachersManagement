#ifndef INDEXRE_H_INCLUDED
#define INDEXRE_H_INCLUDED
#define maximum 100
#define maxIRE 100
#define tailleIndexRE 500


/*********==============================INDEX ETABLISSEMENT PROFS==========================================================================/
/*** de type TOF******/


typedef struct EnteteIndexRE        ///structure de l'en_tete du fichier index
{

    int nbBlocs;
    int nbElts;

}EnteteIndexRE;

typedef struct TfichIndexRE             ///structure de fichier
{
    FILE *fich;
    EnteteIndexRE entete;
}TfichIndexRE;





/**=================== Structures ======================*/
typedef struct Proffesseurs Proffesseurs;
struct Proffesseurs  ///structure des articles
{
   int NbBloc;/// numero du bloc ou il se trouve
   int index;/// index dans le tableau



};

typedef struct BlocIndexRE       ///structure des blocs (buffer)
{
    char region[1];
    int NB;                 /// le nombre des articles dans le buffer
    Proffesseurs profs[maxIRE];        /// La table contenant les articles
                /// numéro du bloc suivant

}BlocIndexRE;

typedef struct IndexRE
{
    int nbBlocs;
    int nbElts;
    BlocIndexRE *tableau;


}IndexRE;






#endif // INDEXRE_H_INCLUDED
