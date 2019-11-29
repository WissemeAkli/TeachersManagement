#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maximum 100
#define maxIRE 100
#define tailleIndexRE 500

#include "IndexRE.h"


/**=====================================================================================*/
void aff_enteteIndexRE(TfichIndexRE *fichier,int i, int valeur)
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

int enteteIndexRE(TfichIndexRE *fichier, int i)
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

void liredirIndexRE(TfichIndexRE *fichier, int i , BlocIndexRE *buf)
{

 fseek(fichier->fich,(sizeof(EnteteIndexRE)+sizeof(BlocIndexRE)*(i)),SEEK_SET); // positionnement au debut du bloc numero i
 fread(buf,sizeof(BlocIndexRE),1,fichier->fich);                         //lecture d'un bloc de caractère correspondant a la taille du bloc dans le buffer
 rewind(fichier->fich);                                            // rREositionnement au debut du fichier

}
void ecriredirIndexRE(TfichIndexRE *fichier, int i, BlocIndexRE *buf)
{

     fseek(fichier->fich,sizeof(EnteteIndexRE)+sizeof(BlocIndexRE)*(i),SEEK_SET); // positionnement au debut du bloc numero i
     fwrite(buf,sizeof(BlocIndexRE),1,fichier->fich);                       //ecriture du contenu du buf dans le bloc numero i du fichier

}


void ouvrirIndexRE(TfichIndexRE *fichier,char *nomFich,char mode)
{
    BlocIndexRE buf;
    if( (mode=='A') ||  (mode == 'a') )                        // le mode ancien
    {
        if(fichier->fich!=NULL)
       {
        fichier->fich=fopen(nomFich,"rb+");
        fread(&(fichier->entete),sizeof(EnteteIndexRE),1,fichier->fich);  // chargement de l'enteteIndexRE enregistrée en debut de fichier
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
             aff_enteteIndexRE(fichier,1,0);    /// L'nombre des blocs (sans compter l'enteteIndexRE )a 0
             aff_enteteIndexRE(fichier,2,0);   /// Nombre Total des articles dans le fichier a 0

             rewind(fichier->fich);
             fwrite(&(fichier->entete),sizeof(EnteteIndexRE),1,fichier->fich);// enregistrement de l'enteteIndexRE dans le fichier

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

void fermerIndexRE(TfichIndexRE *fichier)  // procedure de fermeture du fichier
{
    rewind(fichier->fich); // rREositionnement au debut de fichier
    fwrite(&(fichier->entete),sizeof(EnteteIndexRE),1,fichier->fich); // sauvegarde de la dernière version de l'enteteIndexRE de la strucuture L7OVC
                                                                      //dans le fichier
    fclose(fichier->fich);// fermeture du fichier
}



/*************************************************************************************************************************/





