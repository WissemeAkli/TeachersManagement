#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maximum 100
#define maxIEP 100
#define tailleIndexEP 500

#include "T7OF.h"


/**============================================ MACHINES VIRTUELLES T7OF =============================================================*/

/**=====================*/
void aff_entete(Tfich *fichier,int i, int valeur)
{

    switch(i)
    {
        case 1:
        {
            fichier->entete.NbBlocs=valeur;
        }
        break;
        case 2:
        {
            fichier->entete.NbElements=valeur;
        }
        break;
        case 3:
            {
            fichier->entete.NbInsert=valeur;
            }
        break;
        case 4:
            {
                fichier->entete.NbSupp=valeur;
            }
        default:
            break;
    };
}
/**=====================*/
int entete(Tfich *fichier, int i)
{
    switch(i)
    {
        case 1:
        {
            return(fichier->entete.NbBlocs);
        }
        break;
         case 2:
        {
            return(fichier->entete.NbElements);
        }
        break;
        case 3:
        {
            return(fichier->entete.NbInsert);
        }
        break;
         case 4:
        {
            return(fichier->entete.NbSupp);
        }
        break;

    }
}
/**=====================*/
void liredir(Tfich *fichier, int i , Bloc *buf)
{
 fseek(fichier->fich,(sizeof(Entete)+sizeof(Bloc)*(i)),SEEK_SET); /// positionnement au debut du bloc numero i
 fread(buf,sizeof(Bloc),1,fichier->fich);                         ///lecture d'un bloc de caractère correspondant a la taille du bloc dans le buffer
 rewind(fichier->fich);                                            /// repositionnement au debut du fichier
}
/**======================*/
void ecriredir(Tfich *fichier, int i, Bloc *buf)
{

     fseek(fichier->fich,sizeof(Entete)+sizeof(Bloc)*(i),SEEK_SET); /// positionnement au debut du bloc numero i
     fwrite(buf,sizeof(Bloc),1,fichier->fich);                       ///ecriture du contenu du buf dans le bloc numero i du fichier

}

/**=====================*/
void ouvrir(Tfich *fichier,char *nomFich,char mode)
{
    Bloc buf;
    if( (mode=='A') ||  (mode == 'a') )                        // le mode ancien
    {
        if(fichier->fich!=NULL)
       {
        fichier->fich=fopen(nomFich,"rb+");
        fread(&(fichier->entete),sizeof(Entete),1,fichier->fich);  // chargement de l'entete enregistrée en debut de fichier
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
             aff_entete(fichier,1,0);    /// L'nombre des blocs (sans compter l'entete )a 0
             aff_entete(fichier,2,0);   /// Nombre Total des articles dans le fichier a 0

             rewind(fichier->fich);
             fwrite(&(fichier->entete),sizeof(Entete),1,fichier->fich);// enregistrement de l'entete dans le fichier

             ecriredir(fichier,0,&buf);                      // ecriture du premier bloc dans le fichier
            }
            else
            {
                printf("Fichier non cré veuiller allouer un espace mémoire D'abord ");
            }
        }
        else                                                // format d'ouverture incorrect
        {
            printf(" \n\n Mode d'ouverture faux !");
        }
    }
}
/**=====================*/
void fermer(Tfich *fichier)  // procedure de fermeture du fichier
{
    rewind(fichier->fich); // repositionnement au debut de fichier
    fwrite(&(fichier->entete),sizeof(Entete),1,fichier->fich); // sauvegarde de la dernière version de l'entete de la strucuture L7OVC
                                                                      //dans le fichier
    fclose(fichier->fich);// fermeture du fichier
}
/**=====================*/
int alloc_bloc(Tfich *fichier,char *nomFich)
{
            Bloc buf,buf2;
            int retour;
            ouvrir(fichier,nomFich,'A');
            liredir(fichier,(entete(fichier,1)-1),&buf);    // lecture du dernier bloc du fichier
            retour=entete(fichier,1);
            fermer(fichier);
            return(retour);

}





