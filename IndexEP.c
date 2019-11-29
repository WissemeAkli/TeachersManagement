#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maximum 100
#define maxIEP 100
#define tailleIndexEP 500

#include "IndexEP.h"


/**=====================================================================================*/
void aff_enteteIndexEP(TfichIndexEP *fichier,int i, int valeur)
{
    switch(i)
    {
        case 1:
        {
            fichier->entete.nbBlocs=valeur;
        }break;
         case 2:
        {
            fichier->entete.nbElts=valeur;
        }break;
    };
}

int enteteIndexEP(TfichIndexEP *fichier, int i)
{

    switch(i)
    {

         case 1:
        {
            return(fichier->entete.nbBlocs);
        }break;
         case 2:
        {
            return(fichier->entete.nbElts);
        }break;

    };
}

void liredirIndexEP(TfichIndexEP *fichier, int i , BlocIndexEP *buf)
{

 fseek(fichier->fich,(sizeof(EnteteIndexEP)+sizeof(BlocIndexEP)*(i)),SEEK_SET); // positionnement au debut du bloc numero i
 fread(buf,sizeof(BlocIndexEP),1,fichier->fich);                         //lecture d'un bloc de caractère correspondant a la taille du bloc dans le buffer
 rewind(fichier->fich);                                            // repositionnement au debut du fichier

}
void ecriredirIndexEP(TfichIndexEP *fichier, int i, BlocIndexEP *buf)
{

     fseek(fichier->fich,sizeof(EnteteIndexEP)+sizeof(BlocIndexEP)*(i),SEEK_SET); // positionnement au debut du bloc numero i
     fwrite(buf,sizeof(BlocIndexEP),1,fichier->fich);                       //ecriture du contenu du buf dans le bloc numero i du fichier

}


void ouvrirIndexEP(TfichIndexEP *fichier,char *nomFich,char mode)
{
    BlocIndexEP buf;
    if( (mode=='A') ||  (mode == 'a') )                        // le mode ancien
    {
        if(fichier->fich!=NULL)
       {
        fichier->fich=fopen(nomFich,"rb+");
        fread(&(fichier->entete),sizeof(EnteteIndexEP),1,fichier->fich);  // chargement de l'enteteIndexEP enregistrée en debut de fichier
       }
       else {printf("\n\n Fichier non existant veuiller le creer D'abord ! ");}
    }
    else
    {
        if( (mode=='N') ||  (mode == 'n') )                   // mode nouveau
        {
            if(fichier->fich!=NULL)
            {
             fichier->fich=fopen(nomFich,"wb+");
             aff_enteteIndexEP(fichier,1,0);    /// L'nombre des blocs (sans compter l'enteteIndexEP )a 0
             aff_enteteIndexEP(fichier,2,0);   /// Nombre Total des articles dans le fichier a 0

             rewind(fichier->fich);
             fwrite(&(fichier->entete),sizeof(EnteteIndexEP),1,fichier->fich);// enregistrement de l'enteteIndexEP dans le fichier

             ecriredir(fichier,0,&buf);                      // ecriture du premier bloc dans le fichier
            }
            else
            {
                printf("Fichier non crée veuiller allouer un espace mémoire D'abord ");
            }
        }
        else                                                // format d'ouverture incorrect
        {
            printf(" \n\n Mode d'ouverture faux !");
        }
    }
}
/**=====================*/

void fermerIndexEP(TfichIndexEP *fichier)  // procedure de fermeture du fichier
{
    rewind(fichier->fich); // repositionnement au debut de fichier
    fwrite(&(fichier->entete),sizeof(EnteteIndexEP),1,fichier->fich); // sauvegarde de la dernière version de l'enteteIndexEP de la strucuture L7OVC
                                                               //dans le fichier
    fclose(fichier->fich);// fermeture du fichier
}



/*************************************************************************************************************************/





