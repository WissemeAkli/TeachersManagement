#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#define maximum 100
#define maxIEP 100
#define tailleIndexEP 500


    int aleaMatricule();
    int aleaTailleNP();
    void aleaNP(int n, char *chaine[]);
    void aleaDateN(Date* date);
    void aleaDateR(Date* date);
    void aleaWilaya(char * wilaya[]);
    void aleaGrp(char *grp[3]);
    void aleeaDp(char *dp[]);
    void aleaSpec(char *spec[]);
    void aleaGrade(char *grade[]);
    void aleaSexe(char *sexe[]);
    void chargementInit(Tfich *fichier,char *nomFich,int n , IndexEP *indexEp);
    void affichage(Tfich *fichier);
    void epuration(Tfich *fichier, IndexEP *indexEp,IndexRE *indexRe);
    int rechercheMatricule(Tfich *fichier,int matricule, int* bloc,int * index);
    int  modifUniv(Tfich *fichier,int matricule, char* universite, int bloc, int index,IndexEP *indexEP);
    int univExiste(BlocIndexEP * tableau, char *univ[],int t /*taille du tableau */, int *num);
    void affichageIndexEP(IndexEP * indexEp /* nombre de cases */);
    void enregistreIndexEP(TfichIndexEP *fichier,IndexEP *indexEp, char *nomFich[]);
    void affichageDapresAnciennete(Tfich *fichier,IndexEP * indexEp,IndexRE *indexRe,char *etablissement[], int val1, int val2,char *nomFich
                                   ,TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE);
    void SupprElementIndexEP(IndexEP *indexEp,int bloc , int index /** dns le fichier */);
    void ecrireBlocIndexEP(IndexEP *indexEp, Bloc *buf, int numBuf);

    void chargementIndexEP(TfichIndexEP *fichier,IndexEP *indexEp,Tfich *fich);

     void chargementIndexRE(TfichIndexRE *fichier,IndexRE *indexRe,Tfich *fich);
    int menu1();
    int menu2(Tfich *fichier,IndexEP *indexEp,char *nomFich,TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE);
    int que_faire(Tfich *fichier,IndexEP *indexEp,IndexRE *indexRe,char *nomFich[],TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE);
    int choisir(int *mutation);
    int choisir2( Tfich *fichier, IndexEP *indexEp,IndexRE *indexRe, char *nomFich[],TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE);
     void ecrireBlocIndexRE(IndexRE *indexRe, Bloc *buf, int numBuf);
     int regionExiste(BlocIndexRE * tableau, char *region[],int t /*taille du tableau */, int *num);
     void SupprElementIndexRE(IndexRE *indexRe,int bloc , int index /** dns le fichier */);
    void enregistreIndexRE(TfichIndexRE *fichier,IndexRE *indexRe, char *nomFich[]);
    void affichageIndexRE(IndexRE * indexRe /* nombre de cases */);
    void enseignantsParRegion( Tfich *fichier,IndexRE *indexRe, char *region[2],IndexEP *indexEp,char *nomFich[],TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE);







    void DateN(Date* date);
    void DateR(Date* date);
    void wilaya( char * wilaya[]);
    void groupe(char *grp[3]);
    void sexe (char *sexe[]);
    void grade(char *grade[]);
    void specialite(char *spec[]);
    void diplome(char *dp[]);
    void suppression1(Tfich *fichier,int matricule);
   void suppression(Tfich *fichier,int matricule,IndexEP*indexEp, IndexRE *indexRe)
    void insertion(Tfich *fichier,IndexEP *indexEp, IndexRE* indexRe);



    void ajoutElementIndexEP(IndexEP *IndexEp,char *univ[],int bloc,int deplacement, int jour,int mois,int annee);
    void ajoutElementIndexRE(IndexRE *indexRe,char *region[2],int bloc,int deplacement);

    void affichentete(Tfich *fichier);

/****************************************************************************************************************************************************************/




#endif // FONCTIONS_H_INCLUDED

