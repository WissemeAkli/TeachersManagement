#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maximum 1000
#define maxIEP 100
#define tailleIndexEP 5000

//#include "Fonctions.h"
#include "conio.h"
#include "T7OF.c"

#include "IndexEP.c"
#include "affichage.c"
#include "IndexRE.c"




/**============================================================================================================================================================*/

 /** Pour generer des nombres aléatoires entre 111111 et 999999 */
    int aleaMatricule()
    {
        return (111111+rand() %(999999-111111));
    }
/**=============================*/

    /**Pour generer la taille du nom/prenom*/
    int aleaTailleNP()
    {
        return (4+rand() %(30-4));
    }
/**=============================*/
    /**Pour generer le nom/prenom*/
    void aleaNP(int n, char *chaine[])/* en entree pour la chaine ne pas oublier &*/
    {
        /* n : la taille du nom/prenom*/
        char chaine2[n],c;
        char lettres[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;
        int nb=0, i=0;
        for ( i=0; i<n; i++)
        {
           /* generer une lettre */
           nb=1+rand() %25;
           c=lettres[nb];
            if (i==0)
            {
                sprintf(chaine,"%c",c);

            }
            else
            {
                strcpy(chaine2,chaine);
                sprintf(chaine,"%s%c",chaine2,c);

            }
        }

    }
/**=============================*/

    /**Pour generer la date de naissance */
    void aleaDateN(Date* date)
    {
        // annee
        int a=0,m=0,j=0;
        a=1953+rand() %(1992-1953);
        m=1+ rand()%12;
        if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))//31 jours
        {
            j=1+ rand()%31;
        }
        else
        {
            if ( m==2)// fevrier
            {
                if ( a%4==0)// bissexstile   29 jours
                {
                    j=1+ rand()%29;
                }
                else
                {
                    j=1+ rand()%28;
                }
            }
            else // 30jours
            {
               j=1+ rand()%30;
            }
        }

        (*date).jour=j;
        (*date).mois=m;
        (*date).annee=a;

    }

/**=============================*/
    /**Pour generer la date de recrutement */
    void aleaDateR(Date *date)
    {
        // annee
        int a=0,m=0,j=0;
        a=1979+rand() %(2018-1979);
        m=1+ rand()%12;
        if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))//31 jours
        {
            j=1+ rand()%31;
        }
        else
        {
            if ( m==2)// fevrier
            {
                if ( a%4==0)// bissexstile   29 jours
                {
                    j=1+ rand()%29;
                }
                else
                {
                    j=1+ rand()%28;
                }
            }
            else // 30jours
            {
               j=1+ rand()%30;
            }
        }
        (*date).jour=j;
        (*date).mois=m;
        (*date).annee=a;

    }

/**=============================*/
    /** pour generer une wliaya */
    void aleaWilaya( char * wilaya[])
    {
        int w=1;
        const char wilayas[50][20];

        strcpy(wilayas[1],"Adrar");
        strcpy(wilayas[2],"Chlef");
        strcpy(wilayas[3],"Laghouat");
        strcpy(wilayas[4],"Oum El Bouaghi");
        strcpy(wilayas[5],"Batna");
        strcpy(wilayas[6],"Bejaia");
        strcpy(wilayas[7],"Biskra");
        strcpy(wilayas[8],"Bechar");
        strcpy(wilayas[9],"Blida");
        strcpy(wilayas[10],"Bouira");


        strcpy(wilayas[11],"Tamanrasset");
        strcpy(wilayas[12],"Tebessa");
        strcpy(wilayas[13],"Tlemcen");
        strcpy(wilayas[14],"Tiaret");
        strcpy(wilayas[15],"Tizi Ouzou");
        strcpy(wilayas[16],"Alger");
        strcpy(wilayas[17],"Djelfa");
        strcpy(wilayas[18],"Jijel");
        strcpy(wilayas[19],"Setif");
        strcpy(wilayas[20],"Saida");


        strcpy(wilayas[21],"Skikda");
        strcpy(wilayas[22],"Sidi Bel Abbes");
        strcpy(wilayas[23],"Annaba");
        strcpy(wilayas[24],"Guelma");
        strcpy(wilayas[25],"Constantine");
        strcpy(wilayas[26],"Medea");
        strcpy(wilayas[27],"Mostaganem");
        strcpy(wilayas[28],"Msila");
        strcpy(wilayas[29],"Mascara");
        strcpy(wilayas[30],"Ouargla");

        strcpy(wilayas[31],"Oran");
        strcpy(wilayas[32],"El Bayadh");
        strcpy(wilayas[33],"Illizi");
        strcpy(wilayas[34],"Bordj Bou Arreridj");
        strcpy(wilayas[35],"Boumerdes");
        strcpy(wilayas[36],"El Tarf");
        strcpy(wilayas[37],"Tindouf");
        strcpy(wilayas[38],"Tissemsilt");
        strcpy(wilayas[39],"El Oued");
        strcpy(wilayas[40],"Khenchela");

        strcpy(wilayas[41],"Souk Ahras");
        strcpy(wilayas[42],"Tipaza");
        strcpy(wilayas[43],"Mila");
        strcpy(wilayas[44],"Ain Defla");
        strcpy(wilayas[45],"Naama");
        strcpy(wilayas[46],"Ain Temouchent");
        strcpy(wilayas[47],"Ghardaia");
        strcpy(wilayas[48],"Relizane");




        /* on genere un numero :*/
        w= 1+ rand()%48;
        /* on selesctionne la wilaya*/
        strcpy(wilaya,wilayas[w]);

    }
/**=============================*/

    /** pour generer le dernier dipolome*/
void aleeaDp(char *dp[])
{
    int x=1;
    char tab[6][20];
    strcpy(tab[0],"");
    strcpy(tab[1],"Doctorat d’Etat");
    strcpy(tab[2],"Doctorat en sciences");
    strcpy(tab[3],"PhD");
    strcpy(tab[4],"HDR");
    strcpy(tab[5],"Magistere");
     x=1+rand()%5;
    strcpy(dp,tab[x]);
}
/**=============================*/
/** Pour generer la specialité*/

void aleaSpec(char *spec[])
{   int x=1;
    char tab[11][20];
    strcpy(tab[0],"");
    strcpy(tab[1],"Informatique");
    strcpy(tab[2],"Architecture");
    strcpy(tab[3],"Medecine");
    strcpy(tab[4],"Electronique");
    strcpy(tab[5],"Mecanique");
    strcpy(tab[6],"Gestion");
    strcpy(tab[7],"Chirdent");
    strcpy(tab[8],"Comptabilite");
    strcpy(tab[9],"Automatique");
    strcpy(tab[10],"Hydrolique");

    x=1+rand()%10;
    strcpy(spec,tab[x]);
}
/**=============================*/
/** Pour generer lae grade*/

void aleaGrade(char *grade[])
{   int x=1;
    char tab[7][50];
    strcpy(tab[0],"");
    strcpy(tab[1],"Professeur(e)");
    strcpy(tab[2],"Maitre de conferences Rang A");
    strcpy(tab[3],"Maitre de conferences Rang B");
    strcpy(tab[4],"Maitre assistant(e) Rang A");
    strcpy(tab[5],"Maitre assistant(e) Rang B");
    strcpy(tab[6],"Assistant(e)");

    x=1+rand()%6;
    strcpy(grade,tab[x]);
}
/**=============================*/


/** Pour generer le sexe*/
void aleaSexe(char *sexe[])
{   int x=1;
    char tab[3][20];
    strcpy(tab[0],"");
    strcpy(tab[1],"Masculin");
    strcpy(tab[2],"Feminin");

    x=1+rand()%2;
    strcpy(sexe,tab[x]);
}
/**=============================*/
/** Pour generer le groupe sanguin*/
void aleaGrp(char *grp[3])
{
    int x=1;

    x=rand()%8;

    switch(x)
    {
        case 1:
            strcpy(grp,"O+");
        break;
        case 2:
            strcpy(grp,"A+");
        break;
        case 3:
            strcpy(grp,"B+");
        break;
        case 4:
            strcpy(grp,"O-");
        break;
        case 5:
            strcpy(grp,"A-");
        break;
        case 6:
            strcpy(grp,"B-");
        break;
        case 7:
            strcpy(grp,"AB-");
        break;
        case 0:
            strcpy(grp,"AB+");
        break;

    }



}
/**********************************************************/
/** Chargement initial **/
void chargementInit(Tfich *fichier,char *nomFich,int n , IndexEP *indexEp,IndexRE *indexRe)
{
   // IndexEP  indexEp;
    /* n est lu au clavier et represente le nombre d'informations */


    int i=0, nombre =n;
    int matricule;
    char nom[30],wilaya[20],sexe[8],gp[3],grade[50],dp[20],prenom[30];
    Date DN,DR;
    char specialite[20];
    int b=0; /** combien il y a dans le buffer */
    int index=-1; /// dans le tableau du buffer

    Bloc buf;/// le buffer ou on va stocker les informations

    int numero=0;/// le numero du bloc courant
    int taille=0;

    ///**************** pour index EP:
    indexEp->nbElts=0;

   ( indexEp->nbElts    )=0;

   ( indexEp->nbBlocs)=0;
   ///********************* pour l'index RE
   indexRe->nbElts=0;
   indexRe->nbBlocs=0;



    int num=-1;
    int k=0;

    /// on initialise l'index EP

    BlocIndexEP tableau[tailleIndexEP];
    indexEp->tableau=tableau;

    for ( i=0;i<tailleIndexEP;i++)
    {
        /// on initialise le tableau;
        tableau[i].NB=0;
        sprintf(tableau[i].etablissement,"%s"," ");
    }

    /// on initialise l'index RE

    BlocIndexRE tableauRE[tailleIndexRE];
    indexRe->tableau=tableauRE;

    for ( i=0;i<tailleIndexRE;i++)
    {
        /// on initialise le tableau;
        tableauRE[i].NB=0;
        sprintf(tableauRE[i].region,"%s"," ");
    }


   /// on récupère les etablissements
    FILE *f=NULL;
    char universites[108][500];
    char ligne[500];
    i=0;
    char regions[108][2];

    f=fopen("universites.txt","r");

      i=0;
      fgets(&ligne,500,f);
       while ( !feof(f))
                   {
                        fgets(&ligne,2,f);
                        strcpy(regions[i],ligne);
                        fgets(&ligne,500,f);
                        strcpy(universites[i],ligne);

                        i++;
                   }

    fclose(f);

    i=0;
    int varr=0;
    ouvrir( fichier,nomFich,'n');

    while (nombre>0)
    {
        if (index==maximum-1)
        {
            /// on a rempli toutes les cases du tableau
            ///on doit donc ecrire l'ancien buffer dans le fichier
            buf.NbElt=maximum;
            buf.NBloc=numero;
            buf.efface=0;
            buf.nbEff=0;
            ecriredir(fichier,numero,&buf);
            /// ecriture dans l'index
            ecrireBlocIndexEP(indexEp,&buf,numero);
            ecrireBlocIndexRE(indexRe,&buf,numero);

            index=0;
            numero++;

        }
        else
        {
            index++;
        }
        /** on genere toutes les informations*/

         /** wilaya naissance */
        aleaWilaya(&wilaya);
        sprintf(buf.enseignants[index].wilaya_naissance,"%s",wilaya);

        /** matricule */
        matricule=aleaMatricule();

        buf.enseignants[index].matricule=matricule;

        /** Nom */
        taille=aleaTailleNP();
        aleaNP(taille,&nom);
        sprintf(buf.enseignants[index].nom,"%s",nom);

        /** preNom */
        taille=aleaTailleNP();
        aleaNP(taille,&prenom);
        sprintf(buf.enseignants[index].prenom,"%s",prenom);
        /** Sexe */
        aleaSexe(&sexe);

        sprintf(buf.enseignants[index].sexe,"%s",sexe);

        /** grade*/
        aleaGrade(&grade);
        sprintf(buf.enseignants[index].grade,"%s",grade);
        /** specialite*/
        aleaSpec(&specialite);
        sprintf(buf.enseignants[index].specialite,"%s",specialite);
        /** dernier diplome*/
        aleeaDp(&dp);
        sprintf(buf.enseignants[index].dernier_diplome,"%s",dp);
         /** groupe sanguin*/
        aleaGrp(&gp);

        sprintf(buf.enseignants[index].groupe_sanguin,"%s",gp);

        /** etablissmeent / univ*/
        /***************************************************IICIIIIIIIIIIIIIIIIIIIII*************************************************/
        int random= rand()%108;

        sprintf(buf.enseignants[index].etablissement_univ,"%s",universites[random]);


         /** date de naissance */
        aleaDateN(&DN);


        buf.enseignants[index].date_naissance.jour=DN.jour;
        buf.enseignants[index].date_naissance.mois=DN.mois;
        buf.enseignants[index].date_naissance.annee=DN.annee;
        /** date recrutement */
        aleaDateR(&DR);
        buf.enseignants[index].date_recrutement.jour=DR.jour;
        buf.enseignants[index].date_recrutement.mois=DR.mois;
        buf.enseignants[index].date_recrutement.annee=DR.annee;

        buf.enseignants[index].efface=0;

        nombre--;
    }
     ///on doit donc ecrire le dernier buffer dans le fichier
            buf.NbElt=index+1;
            buf.NBloc=numero;
            buf.efface=0;
            buf.nbEff=0;
            ecriredir(fichier,numero,&buf);
            /// ecriture dans lindex

            ecrireBlocIndexEP(indexEp,&buf,numero);

            ecrireBlocIndexRE(indexRe,&buf,numero);

    ///=====================================================================================================================================/
            index=0;
    /// on met a jour l'entete
        aff_entete(fichier,1,numero+1);
        aff_entete(fichier,2,n);
        aff_entete(fichier,3,n);
        aff_entete(fichier,4,0);///nb effaces
        rewind(fichier->fich);

        fwrite(&(fichier->entete),sizeof(Entete),1,fichier->fich);/// on ecrit l'entete


        indexEp->nbBlocs--;

        /***********************************************/



}

/**============================*/
void affichage(Tfich *fichier)
{
    /// deja ouvert
    int i=0,k=0;
    Bloc buf;
    int var=0;
    for (i=0;i<entete(fichier,1);i++)
    {
        liredir(fichier,i,&buf);
        if (buf.efface==0)
         {
           printf("\nbuffer %d\n",i);

            for (k=0; k<buf.NbElt+buf.nbEff;k++)
            {
                if (buf.enseignants[k].efface==0)
                {
              printf(" \n\tNom: %s  Prenom : %s specialite :%s    \nGroupe sanguin : %s matricule: %d\n wilaya : %s  \n universite : %s ",buf.enseignants[k].nom,
                     buf.enseignants[k].prenom,buf.enseignants[k].specialite,buf.enseignants[k].groupe_sanguin,buf.enseignants[k].matricule,
                      buf.enseignants[k].wilaya_naissance,buf.enseignants[k].etablissement_univ);

                }
            }
         }


    }

}
/**===========================*/
void epuration(Tfich *fichier, IndexEP *indexEp,IndexRE *indexRe)

{
    /// ce module suprime les doublons
    /// les doublons sont par rapport au matricule qui doit etre unique
    int n=entete(fichier,2);

    int matricules[n];
    int index[n];
    int blocs[n];
    int doublons[n]; /// 0 pour non et 1 pour oui
    Bloc buf;
    int i=0,k=0,j=0;
    int inter=0;
    int doublon=0;///boolean qui nous dit si il y a des doublons
    int numBuf=0;

    for (i=0;i<entete(fichier,1);i++)
    {
        liredir(fichier,i,&buf);
        if ( buf.efface==0)
        {
            for (k=0; k<buf.NbElt;k++)
            {
                if (buf.enseignants[k].efface==0)
                {

                    matricules[j]=buf.enseignants[k].matricule;
                    index[j]=k;
                    blocs[j]=i;
                    doublons[j]=0;
                    j++;
                }
            }
        }
    }


    /// on cherche les doublons dans le tableau,et puis on pourra les supprimer directmenet :)
    for (i=0;i<n;i++)
    {
        if( doublons[i]==0)
        {
            inter =matricules[i];
            for (j=i+1;j<n;j++)
            {
                if (matricules[j]==inter)
                {
                    doublons [j]=1;
                    doublon=1;

                }
            }
        }
    }

    /// Now on doit suprimer les doublons
    i=0;
    int var =0;
    int elts=0;

    while( doublon)
    {
        elts=0;
        numBuf=blocs[i];
        liredir(fichier,numBuf,&buf);

        while ((blocs[i]==numBuf)&&(i<n))
        {
            if ( doublons[i]==1)
            {
                var++;
                /// on doit le supprimer
                buf.enseignants[index[i]].efface=1;
                /// on supprime de l'index Etablissements Profs aussi

                SupprElementIndexEP(indexEp,blocs[i],index[i]);
                SupprElementIndexRE(indexRe,blocs[i],index[i]);
                buf.NbElt--;
                buf.nbEff++;
                elts++;

            }
            i++;

        }

        if (buf.NbElt==0)
        {




            /// tous les elements du bloc ont ete suppprimes, donc on doit supprimer le bloc complet
            /// dans ce czs on va faire un graaand décalage :=)
            /// on va modifier les numeros de tout les blocs a partir de celui qu'on va supprimer
            for (k=numBuf;k<entete(fichier,1);k++)
            {


                liredir(fichier,numBuf+1,&buf);
                buf.NBloc=numBuf;
                ecriredir(fichier,numBuf,&buf);
                numBuf++;
            }
            /// on met a jour l'entete psk on a modifié le nombre d'elements :
            aff_entete(fichier,2,entete(fichier,2)-elts);
            aff_entete(fichier,4,entete(fichier,4)+elts);
            aff_entete(fichier,1,entete(fichier,1)-1);/// on a supprimé un bloc


            /*************************************************************************************/
        }
        else
        {


            /// on va juste reecrire le bloc a sa place
            ecriredir(fichier,numBuf,&buf);
            /// on met a jour l'entete psk on a modifié le nombre d'elements :
            aff_entete(fichier,2,entete(fichier,2)-elts);
            aff_entete(fichier,4,entete(fichier,4)+elts);


        }

        if (i==n)
        {
            doublon=0;/// il n'y a plus de doublons a supprimer


        }
        }
    /// on met a jour l'entete dans le fichier
     rewind(fichier->fich);
     fwrite(&(fichier->entete),sizeof(Entete),1,fichier->fich);/// on ecrit l'entete



}

/**================================*/
int rechercheMatricule(Tfich *fichier,int matricule, int* bloc,int * index)
{
    rewind(fichier->fich);
    /// deja ouvert
    int i=0,k=0;
    Bloc buf;
    int existe=0;/// boolean
    while (( !existe )&&(i<entete(fichier,1)))
    {
        k=0;
        liredir(fichier,i,&buf);
        if (buf.efface==0)
         {

            while(( !existe )&&(k<(buf.NbElt+buf.nbEff)))
            {
                if (buf.enseignants[k].efface==0)
                {
                    if (matricule==buf.enseignants[k].matricule)
                    {
                        *bloc=i;
                        *index=k;
                        existe =1;/// existe
                    }
                }
                k++;

            }
         }
        i++;
    }
    return existe ;
}

/**=======================*/
int  modifUniv(Tfich *fichier,int matricule, char* universite, int bloc, int index,IndexEP *indexEP)/// retourne si l'operation a ete effectuee
{
    /// on recherche l'emplacement du fichier
    int existe ;
    int choix=0;
    Bloc buf;
    ;
    //existe=rechercheMatricule(fichier,matricule,&bloc,&index);
    existe =1;
    system("cls");
            cadre();
            gotoxy(10,3);
            affiche_esi2();
            gotoxy(wherex(),wherey()+6);
            affiche_ligne_haut();
            gotoxy(wherex(),wherey()+12);
            affiche_ligne_bas();
            gotoxy(37,wherey()-9);

    if (existe)
    {

        /// on va modifier l'universite
        /// on lit le bloc ou il se trouve
        liredir(fichier,bloc,&buf);

        ///on modifie, mais on demande la confirmation :
        printf("  Etez vous sur de vouloir modifier l'etablissement du matricule %d",matricule);
        gotoxy(37,wherey()+2);
               printf("DE : %s ",buf.enseignants[index].etablissement_univ);
                gotoxy(37,wherey());
               printf("A  : %s ",universite);
                gotoxy(47,wherey()+1);
               printf(" ( 1 Pour oui \ 2 ou autre pour non) : ");
               textcolor(4);

        scanf("%d",&choix);
        textcolor(15);
        switch (choix)
        {
            case 1:
                /// on a la confirmation de modification
                sprintf(buf.enseignants[index].etablissement_univ,"%s",universite);
                /// on supprime et puis reecris f lindex khir
                SupprElementIndexEP(indexEP,bloc,index);
                ajoutElementIndexEP(indexEP,universite,bloc,index,buf.enseignants[index].date_recrutement.jour,
                                    buf.enseignants[index].date_recrutement.mois,buf.enseignants[index].date_recrutement.annee);

                /// now on reecrit le bloc
                ecriredir(fichier,bloc,&buf);
                textcolor(4);
                printf("\n\t\t\t\t\t\t La Modification a ete effectuee avec SUCCES !");
                textcolor(15);
                /* verif
                liredir(fichier,bloc,&buf);
                printf("\n\n %s",buf.enseignants[index].etablissement_univ);*/

            break;
            default:
                textcolor(4);
                printf("\n\t\t\t\t\t\t\t L'OPERATION A ETE ANNULEE");
                textcolor(15);
            break;
        }

    }
    else
    {
        printf("\n\t\t L'enseignant recherche n'existe pas !");
    }

}
/**=====================*/
/// fonction qui nous dit si l'universite existe dans l'index en mc:
int univExiste(BlocIndexEP * tableau, char *univ[],int t /*taille du tableau */, int *num)
{
    int i=0;
    int existe =0; /// booleen
    *num=0;

    for (i=0;i<t;i++)/// pourquoi un for et pas un while : psk elle peut exister plusieurs fois, nous on cherche l'index de la drniere
    {
            if ( strcmp(univ,tableau[i].etablissement)==0)// egalite
            {
                existe =1;
                *num=i;


            }
        i++;
    }

    return existe;
}




/**=====================*/
void affichageIndexEP(IndexEP * indexEp /* nombre de cases */)
{

    int i=0; int k=0;
    int var=0;

BlocIndexEP *tableau= indexEp->tableau;
int NbBlocs =indexEp->nbBlocs;

    for (i=0;i<NbBlocs;i++)
    {
        printf(" \n case de l'index: %d",i);
        printf("\n etablissement :%s",tableau[i].etablissement);
        printf("\nNombre de profs dans cet etablissement : %d",tableau[i].NB);
        /// on affiche les profs :
        for (k=0;k<tableau[i].NB;k++)
        {
            var++;
            printf("\n\t prof %d :",k);
            printf(" \n index : %d, bloc :%d date recrutement %d %d %d",tableau[i].profs[k].index,tableau[i].profs[k].NbBloc,tableau[i].profs[k].dateRecrutement.jour,tableau[i].profs[k].dateRecrutement.mois,
                   tableau[i].profs[k].dateRecrutement.annee);

        }

    }



}

/***************************/

/**=====================*/
void affichageIndexRE(IndexRE * indexRe /* nombre de cases */)
{

    int i=0; int k=0;
    int var=0;

BlocIndexRE *tableau= indexRe->tableau;
int NbBlocs =indexRe->nbBlocs;

    for (i=0;i<NbBlocs;i++)
    {
        printf(" \n case de l'index: %d",i);
        printf("\n region :%s",tableau[i].region);
        printf("\nNombre de profs dans cette region: %d",tableau[i].NB);
        /// on affiche les profs :
        for (k=0;k<tableau[i].NB;k++)
        {
            var++;
            printf("\n\t prof %d :",k);
            printf(" \n index : %d, bloc :%d ",tableau[i].profs[k].index,tableau[i].profs[k].NbBloc);

        }

    }


}



/**=====================*/
/** la requete a intervalle pour l'affichage de tous les enseignants exercant dans un etablissement donné ayant une ancienneté entre deux valeurs donnees */
void affichageDapresAnciennete(Tfich *fichier,IndexEP * indexEp,IndexRE *indexRe,char *etablissement[], int val1, int val2,char *nomFich[],TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE)
{
    BlocIndexEP * tableau=indexEp->tableau;
    int taille=indexEp->nbBlocs;
    int i=0,k=0;
    int anciennete=0;
    int existe=0;
    if (val1>val2)
    {
        k=val1;
        val1=val2;
        val2=k;
    }
    Bloc buf;
    int w=0;
     for (i=0;i<taille;i++)
    {
        if (strcmp(tableau[i].etablissement,etablissement)==0)
        {
            existe =1;
            for ( k=0;k<tableau[i].NB;k++)
            {
                anciennete=2018-tableau[i].profs[k].dateRecrutement.annee;
               if ((anciennete<=val2)&&(anciennete>=val1))
               {
                   w++;
               }
            }
        }
    }
    int jours[w];
    int matricules[w];
    int mois[w];
    int annees[w];
    /// w : represnete le nombre d'elements :
    /// on va faire un affichage par taille

    w=0;
    for (i=0;i<taille;i++)
    {
        if (strcmp(tableau[i].etablissement,etablissement)==0)
        {

            for ( k=0;k<tableau[i].NB;k++)
            {
                anciennete=2018-tableau[i].profs[k].dateRecrutement.annee;
               if ((anciennete<=val2)&&(anciennete>=val1))
               {    existe =1;

                   liredir(fichier,tableau[i].profs[k].NbBloc,&buf);
                   matricules[w]=buf.enseignants[tableau[i].profs[k].index].matricule;
                   jours[w]=buf.enseignants[tableau[i].profs[k].index].date_recrutement.jour;
                   mois[w]=buf.enseignants[tableau[i].profs[k].index].date_recrutement.mois;
                   annees[w]=buf.enseignants[tableau[i].profs[k].index].date_recrutement.annee;
                   w++;
               }
            }
        }
    }
    i=0;
    /// nombre de 'pages"

    int continuer=1;

    int page =0;
    while (( i<w)&&(continuer))
    {
        page++;
        system("cls");
        cadre();
        gotoxy(10,3);
        affiche_esi2();
        gotoxy(wherex(),wherey()-6);
        affiche_ligne_haut();
        gotoxy(wherex(),wherey()+31);
        int var =wherey()+35;
        affiche_ligne_bas();
        gotoxy(70,wherey()-29);
        textcolor(4);
        printf("Page %d",page);
        textcolor(15);
        gotoxy(45,wherey()+2);
        for (k=i;k<25+i;k++)
        {
            if(k<w)
            {
                printf("%d- Matricule : %d Date de Recrutement : %d-%d-%d  ",k+1,matricules[k],jours[k],mois[k],annees[k]);
                gotoxy(45,wherey()+1);
            }

        }

        if(k<w)
        {
            gotoxy(wherex(),var-1);
            continuer =choisir2(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);
        }
        if(k>=w)
        {
            continuer =0;
        }

        i=k+1;
    }
    if (existe==0)
    {
        printf("IL n'y a aucun proffesseur travaillant dans l'etablissement %s depuis (%d-%d) ans",etablissement,val1,val2);
    }
}

/**=====================*/
/*** enregistrement de l'index etablissement profs */
void enregistreIndexEP(TfichIndexEP *fichier,IndexEP *indexEp, char *nomFich[])
{

    BlocIndexEP *tableau=indexEp->tableau;
    int taille=indexEp->nbBlocs;
    int nbElt=indexEp->nbElts;

    int i;
   char nom[50];
    sprintf(nom,"%s%s",nomFich,"IndexEP");

    ouvrirIndexEP( fichier,nom,'n');
    /// on parcours le tableau d'index
    aff_enteteIndexEP(fichier,1,taille);
    aff_enteteIndexEP(fichier,2,nbElt);
    for (i=0;i<taille;i++)
    {
        ecriredirIndexEP(fichier,i,&tableau[i]);
    }
    rewind(fichier->fich);
    aff_enteteIndexEP(fichier,2,indexEp->nbElts);
    aff_enteteIndexEP(fichier,1,indexEp->nbBlocs);
    fermerIndexEP(fichier);
}
/**=============================*/
void chargementIndexEP(TfichIndexEP *fichier,IndexEP *indexEp,Tfich *fich)
{
   Bloc buf;
    indexEp->nbBlocs=0;
    indexEp->nbElts=0;
    int i,k;

    BlocIndexEP tableauEP[tailleIndexEP];
    for ( i=0;i<tailleIndexEP;i++)
    {
        /// on initialise le tableau;
        tableauEP[i].NB=0;
        sprintf(tableauEP[i].etablissement,"%s"," ");
    }

    indexEp->tableau=tableauEP;
    printf("%d",entete(fich,1));
    for (i=0;i<entete(fich,1);i++)
    {
        liredir(fichier,i,&buf);
        printf("u.u");
        ecrireBlocIndexEP(indexEp,&buf,i);
    }

}
/*******************************************************************************************************************/

void SupprElementIndexEP(IndexEP *indexEp,int bloc , int index /** dns le fichier */)
{
    int trouv=0;
    BlocIndexEP *tableau=indexEp->tableau;
    int nbBlocs=indexEp->nbBlocs;

    int i,k,j,w;

    i=0;k=0;
    while ((i<nbBlocs)&&(!trouv))
    {
        k=0;
        while ((k<tableau[i].NB)&&(!trouv))
        {
            if ((tableau[i].profs[k].index==index)&&(tableau[i].profs[k].NbBloc==bloc))
            {
                trouv=1;
            }
            else
            {
                k++;
            }
        }
        i++;
    }
   i--;

   /// i represente le bloc ou est la donnee ( dans l'index)
   /// k : deplacement dans le bloc i de l'index
    if (trouv) ///( i,k)
    {
        /// si il y avait juste un seul elemet dans ce bloc ( donc c'est le seul) ya3ni k=0..
        if ( (k==0)&&(tableau[i].NB==1))/// juste pour verifier
        {
            /// on supprime tt le bloc
            /// on doit faire des decalages
            for (w=k;w<(tableau[i+1].NB);w++) /// a partie de l'index de lelement qu'on veut supprimer
            {
                tableau[i].profs[w].dateRecrutement.annee=tableau[i+1].profs[w].dateRecrutement.annee;
                tableau[i].profs[w].dateRecrutement.jour=tableau[i+1].profs[w].dateRecrutement.jour;
                tableau[i].profs[w].dateRecrutement.mois=tableau[i+1].profs[w].dateRecrutement.mois;
                tableau[i].profs[w].index=tableau[i+1].profs[w].index;
                tableau[i].profs[w].NbBloc=tableau[i+1].profs[w].NbBloc;
            }
            tableau[i].NB=tableau[i+1].NB;
            sprintf(tableau[i].etablissement,"%s",tableau[i+1].etablissement);
            indexEp->nbBlocs--;
        }
        else
        {
            /// on supprime juste l'element : decalzges dans le bloc i seulement
            for (w=k;w<(tableau[i].NB -1);w++) /// a partie de l'index de lelement qu'on veut supprimer
            {
                tableau[i].profs[w].dateRecrutement.annee=tableau[i].profs[w+1].dateRecrutement.annee;
                tableau[i].profs[w].dateRecrutement.jour=tableau[i].profs[w+1].dateRecrutement.jour;
                tableau[i].profs[w].dateRecrutement.mois=tableau[i].profs[w+1].dateRecrutement.mois;
                tableau[i].profs[w].index=tableau[i].profs[w+1].index;
                tableau[i].profs[w].NbBloc=tableau[i].profs[w+1].NbBloc;
            }
            tableau[i].NB--;
        }
         indexEp->nbElts--;
    }
    else
    {

    }
    indexEp->tableau=tableau;
}

/*****************************************************************************************************/
void SupprElementIndexRE(IndexRE *indexRe,int bloc , int index /** dns le fichier */)
{
    int trouv=0;
    BlocIndexRE *tableau=indexRe->tableau;
    int nbBlocs=indexRe->nbBlocs;

    int i,k,j,w;

    i=0;k=0;
    while ((i<nbBlocs)&&(!trouv))
    {
        k=0;
        while ((k<tableau[i].NB)&&(!trouv))
        {
            if ((tableau[i].profs[k].index==index)&&(tableau[i].profs[k].NbBloc==bloc))
            {
                trouv=1;
            }
            else
            {
                k++;
            }
        }
        i++;
    }
   i--;

   /// i represente le bloc ou est la donnee ( dans l'index)
   /// k : deplacement dans le bloc i de l'index
    if (trouv) ///( i,k)
    {
        /// si il y avait juste un seul elemet dans ce bloc ( donc c'est le seul) ya3ni k=0..
        if ( (k==0)&&(tableau[i].NB==1))/// juste pour verifier
        {
            /// on supprime tt le bloc
            /// on doit faire des decalages
            for (w=k;w<(tableau[i+1].NB);w++) /// a partie de l'index de lelement qu'on veut supprimer
            {


                tableau[i].profs[w].index=tableau[i+1].profs[w].index;
                tableau[i].profs[w].NbBloc=tableau[i+1].profs[w].NbBloc;
            }
            tableau[i].NB=tableau[i+1].NB;
            sprintf(tableau[i].region,"%s",tableau[i+1].region);
            indexRe->nbBlocs--;
        }
        else
        {
            /// on supprime juste l'element : decalzges dans le bloc i seulement
            for (w=k;w<(tableau[i].NB -1);w++) /// a partie de l'index de lelement qu'on veut supprimer
            {

                tableau[i].profs[w].index=tableau[i].profs[w+1].index;
                tableau[i].profs[w].NbBloc=tableau[i].profs[w+1].NbBloc;
            }
            tableau[i].NB--;
        }
         indexRe->nbElts--;
    }
    else
    {

    }
    indexRe->tableau=tableau;
}

/******************************************************************/

void ecrireBlocIndexEP(IndexEP *indexEp, Bloc *buf, int numBuf)
{
    int i;
    int existe=0 ;
    int nbelts=indexEp->nbElts;
    int nbblocs=indexEp->nbBlocs;
    BlocIndexEP *tableau = indexEp->tableau;
    int numeroIndex=0;
    int n=0;
    int maxi=0;


    for (i=0;i<(buf->NbElt+buf->nbEff);i++)

    {

        /// on verifie si l'etablissement de lindividu i existe dans l'index
        existe=univExiste(tableau,buf->enseignants[i].etablissement_univ,nbblocs,&numeroIndex);


        if (existe)
        {
            /// on a le bloc numero index
            ///on ecrit directement


           n=tableau[numeroIndex].NB;

           if (n!=maxIEP)
           {
            /// cest pas plein
            tableau[numeroIndex].profs[n].dateRecrutement.annee =buf->enseignants[i].date_recrutement.annee;
            tableau[numeroIndex].profs[n].dateRecrutement.jour=buf->enseignants[i].date_recrutement.jour;
            tableau[numeroIndex].profs[n].dateRecrutement.mois =buf->enseignants[i].date_recrutement.mois;
             tableau[numeroIndex].profs[n].index=i;
              tableau[numeroIndex].profs[n].NbBloc=numBuf;
              tableau[numeroIndex].NB=n+1;
              nbelts++;
           }

        }
        if ((!existe)||(n==maxIEP))
        {
            /// on doit creer un nouveau bloc
            n=0;

            sprintf(tableau[nbblocs].etablissement,"%s",buf->enseignants[i].etablissement_univ);
            indexEp->tableau[nbblocs].profs[n].dateRecrutement.annee =buf->enseignants[i].date_recrutement.annee;
            tableau[nbblocs].profs[n].dateRecrutement.annee =buf->enseignants[i].date_recrutement.annee;

            tableau[nbblocs].profs[n].dateRecrutement.jour=buf->enseignants[i].date_recrutement.jour;
            tableau[nbblocs].profs[n].dateRecrutement.mois =buf->enseignants[i].date_recrutement.mois;
             tableau[nbblocs].profs[n].index=i;
              tableau[nbblocs].profs[n].NbBloc=numBuf;
              tableau[nbblocs].NB=n+1;
              nbelts++;
              nbblocs++;

        }
    }

    indexEp->nbBlocs=nbblocs;
    indexEp->nbElts=nbelts;
    indexEp->tableau=tableau;
}
/*************************************/


void ecrireBlocIndexRE(IndexRE *indexRe, Bloc *buf, int numBuf)
{


     /// on récupère les etablissements
    /// on récupère les etablissements
    FILE *f=NULL;
    char universites[108][500];
    char ligne[500];
    int i=0;
    char regions[108][2];

    f=fopen("universites.txt","r");

      i=0;
      fgets(&ligne,500,f);
       while ( !feof(f))
                   {
                        fgets(&ligne,2,f);
                        strcpy(regions[i],ligne);
                        fgets(&ligne,500,f);
                        strcpy(universites[i],ligne);

                        i++;
                   }

    fclose(f);

    int existe=0 ;
    int nbelts=indexRe->nbElts;
    int nbblocs=indexRe->nbBlocs;
    BlocIndexRE *tableau = indexRe->tableau;
    int numeroIndex=0;
    int n=0;
    int maxi=0;
    char reg[2];
    int k=0;
    /////////////// les univ




    for (i=0;i<buf->NbElt;i++)


    {


        /// on verifie si la region existe
        /// on recupere la region de l'universite :
        for (k=0;k<108;k++)
        {

            if ( strcmp(universites[k],buf->enseignants[i].etablissement_univ)==0)
            {
                sprintf(reg,"%s",regions[k]);

            }
        }

        existe=regionExiste(tableau,reg,nbblocs,&numeroIndex);


        if (existe)
        {
            /// on a le bloc numero index
            ///on ecrit directement


           n=tableau[numeroIndex].NB;

           if (n!=maxIEP)
           {
            /// cest pas plein

             tableau[numeroIndex].profs[n].index=i;
              tableau[numeroIndex].profs[n].NbBloc=numBuf;
              tableau[numeroIndex].NB=n+1;
              nbelts++;
           }

        }
        if ((!existe)||(n==maxIEP))
        {
            /// on doit creer un nouveau bloc
            n=0;

            sprintf(tableau[nbblocs].region,"%s",reg);
             tableau[nbblocs].profs[n].index=i;
              tableau[nbblocs].profs[n].NbBloc=numBuf;
              tableau[nbblocs].NB=n+1;
              nbelts++;
              nbblocs++;

        }
    }

    indexRe->nbBlocs=nbblocs;
    indexRe->nbElts=nbelts;
    indexRe->tableau=tableau;


}
/*************************************/






int menu1()
{
    int choix;
    int menu=1;
    char nomFich[30];

    Tfich *fichier;
     fichier=malloc(sizeof(Tfich));

    IndexEP *indexEp;/// index etablissement profs
     /// fichier de donees
    indexEp=malloc(sizeof(IndexEP));
     TfichIndexEP *fichIndexEP;
    fichIndexEP=malloc(sizeof(TfichIndexEP));

    IndexRE *indexRe;/// index etablissement profs
    indexRe=malloc(sizeof(IndexRE));

    TfichIndexRE *fichIndexRE;
    fichIndexRE=malloc(sizeof(TfichIndexRE));



    char name[50];

    int nbElements=0;



    while ( menu)
    {
        system("cls");
        cadre();
        gotoxy(10,3);
        affiche_esi2();
        nosInfos();

        gotoxy(wherex(),wherey()+12);
        affiche_ligne_bas();
        gotoxy(63,wherey()-10);
        printf(" Que voulez vous faire ?");
        gotoxy(55,wherey()+2);

        printf(" 1- Creer un nouveau fichier");
        gotoxy(55,wherey()+2);
        printf(" 2- Quitter");

        gotoxy(65,wherey()+3);
        printf(" Votre choix : ");
        scanf("%d",&choix);

        switch(choix)
        {

        case 1:
            menu=0;
            system("cls");
            cadre();
            gotoxy(10,3);
            affiche_esi2();
            gotoxy(wherex(),wherey()+4);
            affiche_ligne_haut();
            gotoxy(wherex(),wherey()+12);
            affiche_ligne_bas();
            printf("\n");
            gotoxy(43,wherey()-10);

            printf("Donnez le nom du fichier que vous voulez creer :");
            gotoxy(43,wherey()+4);
            printf("Entrez le nombre d'elements du fichier : (max 12000) ");
            gotoxy(93,wherey()-4);
             scanf("%s",&nomFich);
            gotoxy(97,wherey()+3);
            scanf("%d",&nbElements);
            chargementInit(fichier,nomFich,nbElements,indexEp,indexRe);
            epuration(fichier,indexEp,indexRe);
            return menu2(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);
            break;
        case 2:/// quitter
            return 0;
            break;
            return 0;
            break;
        }
    }



}

/**=============*/
int menu2(Tfich *fichier, IndexEP *indexEp,IndexRE *indexRe, char *nomFich,TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE)
{

    int menu=1;
    int choix=0;
    int matricule =0;
    int bloc=-1,deplacement=-1;
    int existe ;
    Bloc buf;
    char ligne[500];
    FILE *f;
    int i=0;
    char universites[108][500];
    char regions[108][2];
    int mutation =-1;
    int deb,fin;
     int reg=0;
    /**************/
     /// on récupère les etablissements

    f=fopen("universites.txt","r");


      i=0;
       while ( !feof(f))
                   {
                        fgets(&ligne,2,f);
                        strcpy(regions[i],ligne);
                        fgets(&ligne,500,f);
                        strcpy(universites[i],ligne);
                        i++;
                   }

    fclose(f);
    i=0;
    /**************/
    while ( menu)
    {
        system("cls");

        cadre();
        gotoxy(10,3);
        affiche_esi2();
        gotoxy(wherex(),wherey());
        affiche_ligne_haut();
        gotoxy(wherex(),wherey()+29);
        affiche_ligne_bas();
        gotoxy(47,wherey()-26);
        printf("    Gestion des informations des enseignants  ");
        gotoxy(37,wherey()+3);
        printf(" 1- Ajouter un nouvel enseignant au fichier");
         gotoxy(37,wherey()+2);
        printf(" 2- Recherche des informations d'un enseignant");
        gotoxy(37,wherey()+2);
        printf(" 3- Modification de l'etablissement d'un enseignant en raison de sa mutation");
         gotoxy(37,wherey()+2);
        printf(" 4- Suppression d'un enseignant (avec son matricule)");
        gotoxy(37,wherey()+2);
        printf(" 5- Affichage de tous les enseignants exercants dans un etablissmeent donne ");
        gotoxy(37,wherey()+1);
        printf("   ayant une anciennte entre deux valeurs donnees");

          gotoxy(37,wherey()+2);
         printf(" 6- Consultation des enseignants exercants dans une region donnee");
         gotoxy(37,wherey()+2);
         printf(" 7- Supprimer les enregistrements relatifs a une specialite donnee");
          gotoxy(37,wherey()+2);
         printf(" 8- Affichage de l'entete du fichier");
          gotoxy(37,wherey()+2);
         printf(" 9- Retour au menu");
          gotoxy(37,wherey()+2);
         printf(" 10- Quitter");



        gotoxy(60,wherey()+2);
        printf("   Votre choix : ");
        scanf("%d",&choix);
        gotoxy(60,wherey()+5);

        switch(choix)
        {
        case 1 :
            menu=0;
            /// insertion d'un element :
            insertion(fichier,indexEp,indexRe);
            que_faire(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);
            break;
        case 2:/// Recherche des informations d'un enseignant
            menu=0;
            system("cls");
            cadre();
            gotoxy(10,3);
            affiche_esi2();
            gotoxy(wherex(),wherey()+6);
            affiche_ligne_haut();
            gotoxy(wherex(),wherey()+12);
            affiche_ligne_bas();
            gotoxy(47,wherey()-7);
            printf("  Veuillez entrer le matricule de l'enseignant voulu : ");
            scanf("%d",&matricule);
            existe=rechercheMatricule(fichier,matricule,&bloc,&deplacement);
             if (existe)
            {
                liredir(fichier,bloc,&buf);
                /// on affiche les informations du monsieur
                system("cls");

                cadre();
                gotoxy(10,3);
                affiche_esi2();
                gotoxy(wherex(),wherey());
                affiche_ligne_haut();
                gotoxy(wherex(),wherey()+23);
                affiche_ligne_bas();
                 gotoxy(51,wherey()-19);

                 printf(" Informations de l'enseignant recherche");
                gotoxy(33,wherey()+3);
                textcolor(4);
                printf("Nom : ");
                textcolor(15);
                printf("%s  ",buf.enseignants[deplacement].nom);
                gotoxy(75,wherey());
                textcolor(4);
                printf("Prenom : ");
                textcolor(15);
                printf("%s  ",buf.enseignants[deplacement].prenom);
                textcolor(4);
                gotoxy(33,wherey()+2);
                printf("Date de naissance: ");
                textcolor(15);
                 printf("%d-%d-%d  ",buf.enseignants[deplacement].date_naissance.jour,
                        buf.enseignants[deplacement].date_naissance.mois,buf.enseignants[deplacement].date_naissance.annee);
                textcolor(4);
                 gotoxy(75,wherey());
                printf("Sexe : ");
                textcolor(15);
                printf("%s  ",buf.enseignants[deplacement].sexe);
                textcolor(4);
                gotoxy(33,wherey()+2);
                printf("Wilaya naissance: ");
                textcolor(15);
                 printf("%s  ",buf.enseignants[deplacement].wilaya_naissance);
                textcolor(4);
                 gotoxy(75,wherey());
                printf("Date de recrutement : ");
                textcolor(15);
                printf("%d-%d-%d  ",buf.enseignants[deplacement].date_recrutement.jour,
                        buf.enseignants[deplacement].date_recrutement.mois,buf.enseignants[deplacement].date_recrutement.annee);

                gotoxy(33,wherey()+2);
                textcolor(4);
                printf("Dernier Diplome : ");
                textcolor(15);
                printf("%s  ",buf.enseignants[deplacement].dernier_diplome);
                gotoxy(75,wherey());
                textcolor(4);
                printf("Grade : ");
                textcolor(15);
                printf("%s  ",buf.enseignants[deplacement].grade);

                gotoxy(33,wherey()+2);
                textcolor(4);
                printf("Groupe Sanguin : ");
                textcolor(15);
                printf("%s  ",buf.enseignants[deplacement].groupe_sanguin);
                gotoxy(75,wherey());
                textcolor(4);
                printf("Matricule : ");
                textcolor(15);
                printf("%d  ",buf.enseignants[deplacement].matricule);

                gotoxy(57,wherey()+2);
                textcolor(4);
                printf("Specialite : ");
                textcolor(15);
                printf("%s  ",buf.enseignants[deplacement].specialite);
                 gotoxy(45,wherey()+2);
                textcolor(4);
                printf("Etablissement: ");
                textcolor(15);
                printf("%s  ",buf.enseignants[deplacement].etablissement_univ);

            }
            else
            {
               gotoxy(57,wherey()+2);
               textcolor(4);
               printf(" L'ENSEIGNANT RECHERCHE N'EXISTE PAS ! ");
               textcolor(15);

            }
            que_faire(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);

            break;
        case 3:/// modification de l'etablissement d'un monsieur
            menu=0;
            system("cls");
            cadre();
            gotoxy(10,3);
            affiche_esi2();
            gotoxy(wherex(),wherey()+6);
            affiche_ligne_haut();
            gotoxy(wherex(),wherey()+12);
            affiche_ligne_bas();
            gotoxy(47,wherey()-7);
            printf("  Veuillez entrer le matricule de l'enseignant voulu : ");
            scanf("%d",&matricule);
            existe=rechercheMatricule(fichier,matricule,&bloc,&deplacement);
            if (existe)
            {
                /// on affiche toutes les univ pour qu'il puisse choisir la nouvelle affectation
                system("cls");
                //cadre();
                //gotoxy(10,3);
                //affiche_esi2();
                textcolor(4);
                gotoxy(20,3);
                printf("%c",201);
                for (i=0;i<108;i++)
                {
                    printf("%c",205);
                }
                printf("%c",187);
                textcolor(15);
                gotoxy(wherex(),wherey()+43);
                /// bas
                textcolor(4);
                gotoxy(20,wherey());
                printf("%c",200);
                for (i=0;i<108;i++)
                {
                    printf("%c",205);
                }
                printf("%c",188);
                textcolor(15);
                gotoxy(70,wherey()-40);
                textcolor(4);
                printf("Premiere page");
                i=0;
                gotoxy(32,wherey()+2);
                /// premiere page
                textcolor(15);
                while ( i<36)
                {
                    printf("%d- %s  ",i+1,universites[i]);
                    i++;
                    gotoxy(32,wherey());

                }
                if (choisir(&mutation))
                {
                    /// 2eme page
                    system("cls");
                    //cadre();
                    //gotoxy(10,3);
                    //affiche_esi2();
                    textcolor(4);
                    gotoxy(20,3);
                    printf("%c",201);
                    for (i=0;i<108;i++)
                    {
                        printf("%c",205);
                    }
                    printf("%c",187);
                    textcolor(15);
                    gotoxy(wherex(),wherey()+43);
                    /// bas
                    textcolor(4);
                    gotoxy(20,wherey());
                    printf("%c",200);
                    for (i=0;i<108;i++)
                    {
                        printf("%c",205);
                    }
                    printf("%c",188);
                    textcolor(15);
                    gotoxy(70,wherey()-40);
                    textcolor(4);
                    printf("Deuxieme Page");

                    gotoxy(32,wherey()+2);
                    /// premiere page
                    textcolor(15);
                    i=36;
                    while ( i<72)
                    {
                        printf("%d- %s  ",i+1,universites[i]);
                        i++;
                        gotoxy(32,wherey());

                    }
                    if ( choisir(&mutation))
                    {
                        /// affichage page 3 ( derniere )
                            /// 3eme page
                        system("cls");
                        //cadre();
                        //gotoxy(10,3);
                        //affiche_esi2();
                        textcolor(4);
                        gotoxy(20,3);
                        printf("%c",201);
                        for (i=0;i<108;i++)
                        {
                            printf("%c",205);
                        }
                        printf("%c",187);
                        textcolor(15);
                        gotoxy(wherex(),wherey()+43);
                        /// bas
                        textcolor(4);
                        gotoxy(20,wherey());
                        printf("%c",200);
                        for (i=0;i<108;i++)
                        {
                            printf("%c",205);
                        }
                        printf("%c",188);
                        textcolor(15);
                        gotoxy(70,wherey()-40);
                        textcolor(4);
                        printf("Troisieme Page");

                        gotoxy(32,wherey()+2);
                        /// premiere page
                        textcolor(15);
                        i=72;
                        while ( i<108)
                        {
                            printf("%d- %s  ",i+1,universites[i]);
                            i++;
                            gotoxy(32,wherey());

                        }
                          mutation=1000;
                          while ((mutation>=108)||(mutation<=0))
                          {
                              gotoxy(32,wherey()+5);
                               printf("Veuillez taper le numero de l'etablissement de mutation : (entre 1 et 108) ");
                              textcolor(4);
                              scanf("%d",&mutation);
                              textcolor(15);
                              if((mutation>=108)||(mutation<=0))
                              {
                                  system("cls");
                              }
                          }
                          modifUniv(fichier,matricule,universites[mutation-1],bloc,deplacement,indexEp);


                    }
                    else
                    {
                        modifUniv(fichier,matricule,universites[mutation-1],bloc,deplacement,indexEp);

                    }
                }
                else
                {
                    modifUniv(fichier,matricule,universites[mutation-1],bloc,deplacement,indexEp);
                }

            }
            else
            {
                gotoxy(57,wherey()+2);
               textcolor(4);
               printf("  CET ENSEIGNANT N'EXISTE PAS !\n\n ");
               textcolor(15);
            }
            que_faire(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);
            break;
        case 4: /// suppression d'un enseignant dapres son matricule

             menu=0;
            system("cls");
            cadre();
            gotoxy(10,3);
            affiche_esi2();
            gotoxy(wherex(),wherey()+6);
            affiche_ligne_haut();
            gotoxy(wherex(),wherey()+12);
            affiche_ligne_bas();
            gotoxy(40,wherey()-7);
            printf("  Veuillez entrer le matricule de l'enseignant a supprimer : ");
            scanf("%d",&matricule);
            existe=rechercheMatricule(fichier,matricule,&bloc,&deplacement);
            if (existe)
            {
                suppression(fichier,matricule,indexEp,indexRe);
                gotoxy(57,wherey()+2);
                               textcolor(4);
                               printf(" SUPPRESSION EFFECTUEE AVEC SUCCES ! ");
            }
            else
            {
                              gotoxy(57,wherey()+2);
                               textcolor(4);
                               printf(" L'ENSEIGNANT RECHERCHE N'EXISTE PAS ! ");
                               textcolor(15);

            }
            printf("\n\n");
            que_faire(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);


            break;
        case 5:
            /// affichage des enseignants travaillant dans un etablissement donne avec une anciennete donnee
            menu=0;
            system("cls");
            cadre();
            gotoxy(10,3);
            affiche_esi2();
            gotoxy(wherex(),wherey()+6);
            affiche_ligne_haut();
            gotoxy(wherex(),wherey()+12);
            affiche_ligne_bas();
            gotoxy(47,wherey()-7);
            /// choix de l'etablissmeent :
            /// on affiche toutes les univ pour qu'il puisse choisir la nouvelle affectation
                system("cls");
                //cadre();
                //gotoxy(10,3);
                //affiche_esi2();
                textcolor(4);
                gotoxy(20,3);
                printf("%c",201);
                for (i=0;i<108;i++)
                {
                    printf("%c",205);
                }
                printf("%c",187);
                textcolor(15);
                gotoxy(wherex(),wherey()+43);
                /// bas
                textcolor(4);
                gotoxy(20,wherey());
                printf("%c",200);
                for (i=0;i<108;i++)
                {
                    printf("%c",205);
                }
                printf("%c",188);
                textcolor(15);
                gotoxy(70,wherey()-40);
                textcolor(4);
                printf("Premiere page");
                i=0;
                gotoxy(32,wherey()+2);
                /// premiere page
                textcolor(15);
                while ( i<36)
                {
                    printf("%d- %s  ",i+1,universites[i]);
                    i++;
                    gotoxy(32,wherey());

                }
                if (choisir(&mutation))
                {
                    /// 2eme page
                    system("cls");
                    //cadre();
                    //gotoxy(10,3);
                    //affiche_esi2();
                    textcolor(4);
                    gotoxy(20,3);
                    printf("%c",201);
                    for (i=0;i<108;i++)
                    {
                        printf("%c",205);
                    }
                    printf("%c",187);
                    textcolor(15);
                    gotoxy(wherex(),wherey()+43);
                    /// bas
                    textcolor(4);
                    gotoxy(20,wherey());
                    printf("%c",200);
                    for (i=0;i<108;i++)
                    {
                        printf("%c",205);
                    }
                    printf("%c",188);
                    textcolor(15);
                    gotoxy(70,wherey()-40);
                    textcolor(4);
                    printf("Deuxieme Page");

                    gotoxy(32,wherey()+2);
                    /// premiere page
                    textcolor(15);
                    i=36;
                    while ( i<72)
                    {
                        printf("%d- %s  ",i+1,universites[i]);
                        i++;
                        gotoxy(32,wherey());

                    }
                    if ( choisir(&mutation))
                    {
                        /// affichage page 3 ( derniere )
                            /// 3eme page
                        system("cls");
                        //cadre();
                        //gotoxy(10,3);
                        //affiche_esi2();
                        textcolor(4);
                        gotoxy(20,3);
                        printf("%c",201);
                        for (i=0;i<108;i++)
                        {
                            printf("%c",205);
                        }
                        printf("%c",187);
                        textcolor(15);
                        gotoxy(wherex(),wherey()+43);
                        /// bas
                        textcolor(4);
                        gotoxy(20,wherey());
                        printf("%c",200);
                        for (i=0;i<108;i++)
                        {
                            printf("%c",205);
                        }
                        printf("%c",188);
                        textcolor(15);
                        gotoxy(70,wherey()-40);
                        textcolor(4);
                        printf("Troisieme Page");

                        gotoxy(32,wherey()+2);
                        /// premiere page
                        textcolor(15);
                        i=72;
                        while ( i<108)
                        {
                            printf("%d- %s  ",i+1,universites[i]);
                            i++;
                            gotoxy(32,wherey());

                        }
                          mutation=1000;
                          while ((mutation>=108)||(mutation<=0))
                          {
                              gotoxy(32,wherey()+5);
                               printf("Veuillez taper le numero de l'etablissement de mutation : (entre 1 et 108) ");
                              textcolor(4);
                              scanf("%d",&mutation);
                              textcolor(15);
                              if((mutation>=108)||(mutation<=0))
                              {
                                  system("cls");
                              }
                          }
                    }
                }
                 menu=0;
                system("cls");
                cadre();
                gotoxy(10,3);
                affiche_esi2();
                gotoxy(wherex(),wherey()+6);
                affiche_ligne_haut();
                gotoxy(wherex(),wherey()+12);
                affiche_ligne_bas();
                gotoxy(37,wherey()-7);
                printf("  Etablissement : %s",universites[mutation-1]);
                gotoxy(37,wherey()+1);
                printf(" Veuillez entrer l'intervalle d'anciennte recherche :");
                gotoxy(70,wherey()+1);
                printf ("DE : ");
                scanf("%d",&deb);
                gotoxy(70,wherey());
                printf("A  : ");
                scanf("%d",&fin);
                affichageDapresAnciennete(fichier,indexEp,indexRe,universites[mutation-1],deb,fin,nomFich,fichIndexEP,fichIndexRE);
               // que_faire();

que_faire(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);
            break;
        case 6:

            /// consultation de tous les enseignnats travaillant dans une region donnee:
            /// on va selectionner une region
            menu=0;
            system("cls");
            cadre();
            gotoxy(10,3);
            affiche_esi2();
            gotoxy(wherex(),wherey()+6);
            affiche_ligne_haut();
            gotoxy(wherex(),wherey()+12);
            affiche_ligne_bas();
            gotoxy(54,wherey()-9);
            printf("  Veuillez choisir la region voulue : ");
             gotoxy(62,wherey()+2);
               printf(" 1- Region CENTRE ");
            gotoxy(62,wherey()+1);
               printf(" 2- Region EST ");
            gotoxy(62,wherey()+1);
               printf(" 3- Region OUEST");
            gotoxy(62,wherey()+2);
               printf(" Votre Choix : ");
            scanf("%d",&reg);

            enseignantsParRegion(fichier,indexRe,regions[reg],indexEp,nomFich,fichIndexEP,fichIndexRE);
            que_faire(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);

            break;
        case 7:
            break;
        case 8:
            /// affichage de l'entete
            menu=1;
            system("cls");

            affichentete(fichier);
            que_faire(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);


            break;
        case 9:
            /// retour au menu
            /// on enregistre les index
            enregistreIndexEP(fichIndexEP,indexEp,nomFich);
            enregistreIndexRE(fichIndexRE,indexRe,nomFich);
            fermer(fichier);

            return menu1();
            break;

        case 10:
            enregistreIndexEP(fichIndexEP,indexEp,nomFich);
            enregistreIndexRE(fichIndexRE,indexRe,nomFich);
            fermer(fichier);
            return 0;
            break;
        }
    }




}


/**===============*/
int que_faire(Tfich *fichier, IndexEP *indexEp, IndexRE *indexRe,char *nomFich[],TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE)
   {
       int choix,i;
       textcolor(4);
       gotoxy(55,wherey()+4);
       printf("%c",201);
       for (i=1;i<40;i++)
       {
           printf("%c",205);
       }
       printf("%c",187);
       gotoxy(55,wherey()+8);
       printf("%c",200);
       for (i=1;i<40;i++)
       {
           printf("%c",205);
       }
       printf("%c",188);
       textcolor(15);
       printf("\n\n\n");
       gotoxy(65,wherey()-9);
       puts("Que voulez vous faire?");
       gotoxy(65,wherey()+1);
       printf("   1.Revenir au Menu");
       gotoxy(65,wherey()+1);
       printf("   2.Quitter");
       gotoxy(65,wherey()+1);
       printf("   Votre choix:");
       scanf("%d",&choix);
      if (choix==2)
      {
          return 0;
      }
      else
      {
          menu2(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);
          system("CLS");

      }
   }

int choisir( int * mutation)
{
    int choix,i;
       textcolor(4);
       gotoxy(55,wherey()+4);
       printf("%c",201);
       for (i=1;i<40;i++)
       {
           printf("%c",205);
       }
       printf("%c",187);
       gotoxy(55,wherey()+10);
       printf("%c",200);
       for (i=1;i<40;i++)
       {
           printf("%c",205);
       }
       printf("%c",188);
       textcolor(15);
       printf("\n\n\n");
       gotoxy(65,wherey()-11);
       puts("Que voulez vous faire?");
       gotoxy(65,wherey()+1);
       printf("1.Voir la page suivante ");
       gotoxy(65,wherey()+1);
       printf("2.Choisir un etablissement ");
       gotoxy(65,wherey()+1);
       printf("   Votre choix:");
       scanf("%d",&choix);
        gotoxy(47,wherey()+1);
      if (choix==2)
      {
          *mutation=1000;
          if ((*mutation>=108)||(*mutation<=0))
          {
                printf("Veuillez taper le numero de l'etablissement : (entre 1 et 108) ");
                textcolor(4);
              scanf("%d",mutation);
              textcolor(15);
          }
          while ((*mutation>=108)||(*mutation<=0))
          {
              system("cls");
              textcolor(4);
               gotoxy(40,wherey()+4);
               printf("%c",201);
               for (i=1;i<70;i++)
               {
                   printf("%c",205);
               }
               printf("%c",187);
               gotoxy(40,wherey()+10);
               printf("%c",200);
               for (i=1;i<70;i++)
               {
                   printf("%c",205);
               }
               printf("%c",188);
               textcolor(15);
               printf("\n\n\n");
               gotoxy(43,wherey()-9);
               printf("Veuillez taper le numero de l'etablissement : (entre 1 et 108) ");
              textcolor(4);
              scanf("%d",mutation);
              textcolor(15);
              if((*mutation>=108)||(*mutation<=0))
              {
                  system("cls");

              }
          }
          return 0;


      }
      else
      {
        return 1;
      }
}




int choisir2( Tfich *fichier, IndexEP *indexEp,IndexRE *indexRe,char *nomFich[],TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE)
{
    int choix,i;
       textcolor(4);
       gotoxy(55,45);
       printf("%c",201);
       for (i=1;i<40;i++)
       {
           printf("%c",205);
       }
       printf("%c",187);
       gotoxy(55,wherey()+8);
       printf("%c",200);
       for (i=1;i<40;i++)
       {
           printf("%c",205);
       }
       printf("%c",188);
       textcolor(15);
       printf("\n\n\n");
       gotoxy(65,wherey()-9);
       puts("Que voulez vous faire?");
       gotoxy(65,wherey()+1);
       printf("1.Voir la page suivante ");
       gotoxy(65,wherey()+1);
       printf("2.Terminer ");
       gotoxy(65,wherey()+1);
       printf("   Votre choix:");
       scanf("%d",&choix);
        gotoxy(47,wherey()+1);
      if (choix==2)
      {
        return 0;
          menu2(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);

      }
      else
      {
        return 1;
      }
}

/// fonction qui nous dit si l'universite existe dans l'index en mc:
int regionExiste(BlocIndexRE * tableau, char *region[],int t /*taille du tableau */, int *num)
{
    int i=0;
    int existe =0; /// booleen
    *num=0;

    /// on recupere la region de l'universite : c region

    for (i=0;i<t;i++)/// pourquoi un for et pas un while : psk elle peut exister plusieurs fois, nous on cherche l'index de la drniere
    {
            if ( strcmp(region,tableau[i].region)==0)// egalite
            {
                existe =1;
                *num=i;
            }

        i++;
    }

    return existe;
}


/*** enregistrement de l'index etablissement profs */
void enregistreIndexRE(TfichIndexRE *fichier,IndexRE *indexRe, char * nomFich[])
{

    BlocIndexRE *tableau=indexRe->tableau;
    int taille=indexRe->nbBlocs;
    int nbElt=indexRe->nbElts;

    int i;
char nom[50];
sprintf(nom,"%s%s",nomFich,"IndexRE");

    ouvrirIndexRE( fichier,nom,'n');
    /// on parcours le tableau d'index
    aff_enteteIndexRE(fichier,1,taille);
    aff_enteteIndexRE(fichier,2,nbElt);
    for (i=0;i<taille;i++)
    {
        ecriredirIndexRE(fichier,i,&tableau[i]);
    }
   fermerIndexRE(fichier);


}
/**=============================*/
void chargementIndexRE(TfichIndexRE *fichier,IndexRE *indexRe,Tfich *fich)
{

    Bloc buf;
    indexRe->nbBlocs=0;
    indexRe->nbElts=0;
    int i,k;
     BlocIndexRE tableauRE[tailleIndexRE];
    for ( i=0;i<tailleIndexRE;i++)
    {
        /// on initialise le tableau;
        tableauRE[i].NB=0;
        sprintf(tableauRE[i].region,"%s"," ");
    }

  indexRe->tableau=tableauRE;

    for (i=0;i<entete(fich,1);i++)
    {
        liredir(fichier,i,&buf);

        ecrireBlocIndexRE(indexRe,&buf,i);
    }

}
/*******************************************************************************************************************/
void enseignantsParRegion( Tfich *fichier,IndexRE *indexRe, char *region[2],IndexEP *indexEp,char *nomFich,TfichIndexEP *fichIndexEP,TfichIndexRE *fichIndexRE)
{
    /// on devra faire un affichage par page aussi :)
    int i=0;
    BlocIndexRE *tableau;
    tableau=indexRe->tableau;
    int total=0;

    for ( i=0;i<indexRe->nbBlocs;i++)
    {
        /// on parcours tous les blocs de lindex
        if ( strcmp(region,tableau[i].region)==0)
        {
            total=total+tableau[i].NB;
        }
    }
   int blocs[total];
   int deplacements[total];
    int k=0,w=0;

     for ( i=0;i<indexRe->nbBlocs;i++)
     {
        /// on parcours tous les blocs de lindex
        if ( strcmp(region,tableau[i].region)==0)
        {
           for (k=0;k<tableau[i].NB;k++)
           {
            blocs[w]=tableau[i].profs[k].NbBloc;
            deplacements[w]=tableau[i].profs[k].index;
            w++;
           }
        }
     }
     /// on recupere les infos de tout le mondeeeeeee
     /// deja triees

     int bloc;
     bloc=blocs[0];
     i=0;
     Bloc buf;
     int matricules[total];
     while (i<total)
     {
         liredir(fichier,blocs[i],&buf);

         while ( blocs[i]==bloc)
         {
             matricules[i]=buf.enseignants[deplacements[i]].matricule;

             i++;
         }
         printf("\n");
         bloc=blocs[i];
     }
     /// affichage par pages


i=0;
w=total;
     int continuer =1;
     int page=0;

     while (( i<w)&&(continuer))
    {
        page++;
        system("cls");
        cadre();
        gotoxy(10,3);
        affiche_esi2();
        gotoxy(wherex(),wherey()-6);
        affiche_ligne_haut();
        gotoxy(wherex(),wherey()+31);
        int var =wherey()+35;
        affiche_ligne_bas();
        gotoxy(70,wherey()-29);
        textcolor(4);
        printf("Page %d",page);
        textcolor(15);
        gotoxy(45,wherey()+2);
        for (k=i;k<25+i;k++)
        {
            if(k<w)
            {
                printf("%d- Matricule : %d ",k+1,matricules[k]);
                gotoxy(45,wherey()+1);
            }

        }

        if(k<w)
        {
            gotoxy(wherex(),var-1);
            continuer =choisir2(fichier,indexEp,indexRe,nomFich,fichIndexEP,fichIndexRE);
        }
        if(k>=w)
        {
            continuer =0;
        }

        i=k+1;
    }
    if (continuer==0)
    {
        system("cls");
        cadre();
        affiche_esi2();
    }








}


/**=====================*/
int quitter(Tfich *fichier)
{
    /// fermer tt les fichiers

    fermer(fichier);
    return 0;
}


/***********************************************************************************************************************************************************/

/****************************************************/

void diplome(char *dp[])
{
    int x;

    if ( wherey()>=45)
    {
        system("cls");
        cadre();
        affiche_esi2();
    }
    gotoxy(47,wherey()+2);
    textcolor(4);
    printf("Dernier diplome :  ");
    textcolor(15);
     gotoxy(42,wherey()+1);
    printf("1- Doctorat dEtat  2- Doctorat en sciences");gotoxy(42,wherey()+1);
    printf("3- PhD       4- HDR       5-Magistere");
    gotoxy(42,wherey()+1);
    printf("Votre Choix : ");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
           strcpy(dp,"Doctorat dEtat");
        break;
         case 2:
            strcpy(dp,"Doctorat en sciences");
        break;
         case 3:
            strcpy(dp,"PhD");
        break;
         case 4:
            strcpy(dp,"HDR");
        break;
        case 5:
            strcpy(dp,"Magistere");
        break;
    }
}
/**=============================*/
void specialite(char *spec[])
{
    int x;


    gotoxy(47,wherey()+2);
    textcolor(4);
    printf("La specialite :  ");
     textcolor(15);
    gotoxy(32,wherey()+1);
     printf("1- Informatique  2- Architecture  3- Medecine   4-Electronique"); gotoxy(32,wherey()+1);
     printf("5- Mecanique     6- Gestion       7- Chirdent   8-Comptabilite "); gotoxy(32,wherey()+1);
     printf("9- Automatique   10- Hydrolique");



    gotoxy(47,wherey()+1);
    printf("Votre Choix : ");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
            strcpy(spec,"Informatique");
        break;
        case 2:
            strcpy(spec,"Architecture");
        break;
        case 3:
            strcpy(spec,"Medecine");
        break;
        case 4:
            strcpy(spec,"Electronique");
        break;
        case 5:
            strcpy(spec,"Mecanique");
        break;
        case 6:
            strcpy(spec,"Gestion");
        break;
        case 7:
            strcpy(spec,"Chirdent");
        break;
        case 8:
            strcpy(spec,"Comptabilite");
        break;
         case 9:
            strcpy(spec,"Automatique");
        break;
         case 10:
            strcpy(spec,"Hydrolique");
        break;
    }
}
/**=============================*/
void grade(char *grade[])
{   int x;
         if (wherey()>=45)
         {
             system("cls");
             cadre();
             affiche_esi2();
         }
    gotoxy(47,wherey()+2);
    textcolor(4);
    printf(" Grade :");
    textcolor(15);
    gotoxy(37,wherey()+1);
    printf("1- Professeur(e)                 2- Maitre de conferences Rang A");    gotoxy(37,wherey()+1);
    printf("3- Maitre de conferences Rang B  4- Maitre assistant(e) Rang A");    gotoxy(37,wherey()+1);
    printf("5- Maitre assistant(e) Rang B    6- Assistant(e)");    gotoxy(37,wherey()+1);
    printf("Votre Choix : ");
    scanf("%d",&x);

     switch(x)
    {
        case 1:
            strcpy(grade,"Professeur(e)");

        break;
        case 2:
            strcpy(grade,"Maitre de conferences Rang A");

        break;
        case 3:
            strcpy(grade,"Maitre de conferences Rang B");

        break;
        case 4:
            strcpy(grade,"Maitre assistant(e) Rang A");

        break;
        case 5:
            strcpy(grade,"Maitre assistant(e) Rang B");

        break;
        case 6:
            strcpy(grade,"Assistant(e)");

        break;
    }
}
/**=============================*/
void sexe (char *sexe[])
{
    int x;
    gotoxy(47,wherey()+1);
    textcolor(4);
    printf("Le sexe : ");
    gotoxy(47,wherey()+1);
    textcolor(15);
    printf("  1- Masculin");
    gotoxy(47,wherey()+1);
    printf("  2- Feminin");
    gotoxy(47,wherey()+1);
    printf("  Choix : ");
    scanf("%d",&x);
    printf("\n");
    switch(x)
    {
        case 1:
            strcpy(sexe,"Masculin");

        break;
         case 2:
            strcpy(sexe,"Feminin");

        break;
    }
}
/**=============================*/
void groupe(char *grp[3])
{
    int x;

     if ( wherey()>=42)
     {
         system("cls");
         cadre();
         affiche_esi2();
     }
     gotoxy(47,wherey()+2);
    textcolor(4);
    printf("Le Groupe Sanguin : ");
    textcolor(15);
    gotoxy(47,wherey()+1);
     printf("1- O+   2- A+   3- B+   4- O- ");
     gotoxy(47,wherey()+1);
     printf("5- A-   6- B-   7- AB-  8- AB+");
     gotoxy(47,wherey()+1);
    printf("Votre Choix : ");
    scanf("%d",&x);


    switch(x)
    {
        case 1:
            strcpy(grp,"O+");
        break;
        case 2:
            strcpy(grp,"A+");
        break;
        case 3:
            strcpy(grp,"B+");
        break;
        case 4:
            strcpy(grp,"O-");
        break;
        case 5:
            strcpy(grp,"A-");
        break;
        case 6:
            strcpy(grp,"B-");
        break;
        case 7:
            strcpy(grp,"AB-");
        break;
        case 8:
            strcpy(grp,"AB+");
        break;
    }
}
/**********************************************************/
/**=============================*/
    /** pour generer une wliaya */
    void wilaya( char * wilaya[])
    {
        int w;
        const char wilayas[50][20];


        strcpy(wilayas[1],"Adrar");
        strcpy(wilayas[2],"Chlef");
        strcpy(wilayas[3],"Laghouat");
        strcpy(wilayas[4],"Oum El Bouaghi");
        strcpy(wilayas[5],"Batna");
        strcpy(wilayas[6],"Bejaia");
        strcpy(wilayas[7],"Biskra");
        strcpy(wilayas[8],"Bechar");
        strcpy(wilayas[9],"Blida");
        strcpy(wilayas[10],"Bouira");


        strcpy(wilayas[11],"Tamanrasset");
        strcpy(wilayas[12],"Tebessa");
        strcpy(wilayas[13],"Tlemcen");
        strcpy(wilayas[14],"Tiaret");
        strcpy(wilayas[15],"Tizi Ouzou");
        strcpy(wilayas[16],"Alger");
        strcpy(wilayas[17],"Djelfa");
        strcpy(wilayas[18],"Jijel");
        strcpy(wilayas[19],"Setif");
        strcpy(wilayas[20],"Saida");

        strcpy(wilayas[21],"Skikda");
        strcpy(wilayas[22],"Sidi Bel Abbes");
        strcpy(wilayas[23],"Annaba");
        strcpy(wilayas[24],"Guelma");
        strcpy(wilayas[25],"Constantine");
        strcpy(wilayas[26],"Medea");
        strcpy(wilayas[27],"Mostaganem");
        strcpy(wilayas[28],"Msila");
        strcpy(wilayas[29],"Mascara");
        strcpy(wilayas[30],"Ouargla");

        strcpy(wilayas[31],"Oran");
        strcpy(wilayas[32],"El Bayadh");
        strcpy(wilayas[33],"Illizi");
        strcpy(wilayas[34],"Bordj Bou Arreridj");
        strcpy(wilayas[35],"Boumerdes");
        strcpy(wilayas[36],"El Tarf");
        strcpy(wilayas[37],"Tindouf");
        strcpy(wilayas[38],"Tissemsilt");
        strcpy(wilayas[39],"El Oued");
        strcpy(wilayas[40],"Khenchela");

        strcpy(wilayas[41],"Souk Ahras");
        strcpy(wilayas[42],"Tipaza");
        strcpy(wilayas[43],"Mila");
        strcpy(wilayas[44],"Ain Defla");
        strcpy(wilayas[45],"Naama");
        strcpy(wilayas[46],"Ain Temouchent");
        strcpy(wilayas[47],"Ghardaia");
        strcpy(wilayas[48],"Relizane");
        int h=1;
        if( wherex()>=60)
        {
            system("cls");
            cadre();
            affiche_esi2();
        }
        while (h<49)
        {

            gotoxy(20,wherey()+1);
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(40,wherey());
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(60,wherey());
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(80,wherey());
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(100,wherey());
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(120,wherey());
            printf("%d- %s",h,wilayas[h]);
            h=h+1;

        }


 gotoxy(47,wherey()+2);

        textcolor(4);
         printf("La wilaya de naissance: ");

         textcolor(15);
         gotoxy(47,wherey()+1);
         printf("Votre Choix : ");
        scanf("%d",&w);
        printf("\n");
      while((w<1)||(w>48))

      {
          if( wherey()>=35)
        {
            system("cls");
            cadre();
            affiche_esi2();
        }
        h=1;
        while (h<49)
        {

            gotoxy(20,wherey()+1);
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(40,wherey());
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(60,wherey());
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(80,wherey());
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(100,wherey());
            printf("%d- %s",h,wilayas[h]);
            h++;
            gotoxy(120,wherey());
            printf("%d- %s",h,wilayas[h]);
            h=h+1;

        }

        gotoxy(47,wherey()+1);
        textcolor(4);
          printf("ERREUR ! Entrez la wilaya de nouveau : ");
          textcolor(15);
          gotoxy(47,wherey()+1);
          printf("Votre Choix : ");
          scanf("%d",&w);

      }
        /* on selesctionne la wilaya*/
        strcpy(wilaya,wilayas[w]);

    }
/**=============================*/
/****************************fct de verification de date************/
void DateR(Date* date)
    {
        system("cls");
        cadre();
        affiche_esi2();
        gotoxy(47,wherey()+1);
        textcolor(4);
        printf("Date de Recrutement : ");
        textcolor(15);
        // annee
        int a=0,m=0,j=0,exist=0;
        while(exist!=1)
            {
                textcolor(15);
            gotoxy(47,wherey()+1);
            printf("Jour: ");
            scanf("%d",&j);
           gotoxy(47,wherey());
            printf("Mois: " );
            scanf("%d",&m);
            gotoxy(47,wherey());
            printf("Annee: ");
            scanf("%d",&a);
            textcolor(4);

            if((a>2018)||(a<1979))
            {
                if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }

                 gotoxy(37,wherey());
                printf("Date erronee, Veuillez la retaper en entrant une annee entre 2018 et 1979");


            }
           else
            {
                if((m>12)||(m<1))
                {if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(47,wherey());
                    printf("Date erronee, Veuillez la retaper");

                }
                else
                {

                     if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))//31 jours
                      {
                            if((j>31)||(j<1))
                            {
                                if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(47,wherey());
                                printf("Date erronee, Veuillez la retaper");

                            }
                            else
                            {
                                exist=1;
                            }
                        }
                      else
                        {
                            //printf("\nm===%d\n",m);
                            if ( m==2)// fevrier
                            {
                                if ( (a%4)!=0)// bissexstile   29 jours
                                { //printf("\na===%d\n",(a%4)!=0);
                                    if((j>28)||(j<1))
                                    {
                                        system("cls");
                if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                                        printf("Date erronee, Veuillez la retaper");

                                    }
                                    else
                                    {
                                        exist=1;
                                    }
                                }
                                else
                                 {
                                    //printf("\na===%d\n",(a%4)!=0);
                                     if((j>29)||(j<1))
                                      {
                                          if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(47,wherey());
                                        printf("Date erronee, Veuillez la retaper");

                                      }
                                     else
                                      {
                                        exist=1;
                                      }
                                }
                            }
                            else // 30jours
                            {
                                 if((j>30)||(j<1))
                                    {
                                        if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(47,wherey());
                                        printf("Date erronee, Veuillez la retaper");

                                    }
                                  else
                                     {
                                        exist=1;
                                     }
                            }
                        }
                }

            }


            //printf("\nexist= %d \n",exist);

        }
        textcolor(15);

        (*date).jour=j;
        (*date).mois=m;
        (*date).annee=a;

    }

/**=============================*/
/****************************fct de verification de date************/
void DateN(Date* date)
    {
        gotoxy(47,wherey()+1);
        textcolor(4);
        printf("Date de Naissance : ");
        textcolor(15);
        // annee
        int a=0,m=0,j=0,exist=0;
        while(exist!=1)
            {
                textcolor(15);
            gotoxy(47,wherey()+1);
            printf("Jour: ");
            scanf("%d",&j);
           gotoxy(47,wherey());
            printf("Mois: " );
            scanf("%d",&m);
            gotoxy(47,wherey());
            printf("Annee: ");
            scanf("%d",&a);
            textcolor(4);

            if((a>1992)||(a<1953))
            {
                if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(37,wherey());
                printf("Date erronee, Veuillez la retaper en entrant une annee entre 1953 et 1992");


            }
           else
            {
                if((m>12)||(m<1))
                {
                    if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(47,wherey());
                    printf("Date erronee, Veuillez la retaper");

                }
                else
                {

                     if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))//31 jours
                      {
                            if((j>31)||(j<1))
                            {
                                if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(47,wherey());
                                printf("Date erronee, Veuillez la retaper");

                            }
                            else
                            {
                                exist=1;
                            }
                        }
                      else
                        {
                            //printf("\nm===%d\n",m);
                            if ( m==2)// fevrier
                            {
                                if ( (a%4)!=0)// bissexstile   29 jours
                                { //printf("\na===%d\n",(a%4)!=0);
                                    if((j>28)||(j<1))
                                    {
                                       if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(47,wherey());
                                        printf("Date erronee, Veuillez la retaper");

                                    }
                                    else
                                    {
                                        exist=1;
                                    }
                                }
                                else
                                 {
                                    //printf("\na===%d\n",(a%4)!=0);
                                     if((j>29)||(j<1))
                                      {
                                          if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                affiche_esi2();
                 gotoxy(47,wherey());
                                        printf("Date erronee, Veuillez la retaper");

                                      }
                                     else
                                      {
                                        exist=1;
                                      }
                                }
                            }
                            else // 30jours
                            {
                                 if((j>30)||(j<1))
                                    {
                                        if(wherey()>=48)
                {
                    system("cls");
                cadre();
                affiche_esi2();
                }
                 gotoxy(47,wherey());
                                        printf("Date erronee, Veuillez la retaper");

                                    }
                                  else
                                     {
                                        exist=1;
                                     }
                            }
                        }
                }

            }


            //printf("\nexist= %d \n",exist);

        }
        textcolor(15);

        (*date).jour=j;
        (*date).mois=m;
        (*date).annee=a;

    }


void insertion(Tfich *fichier,IndexEP *indexEp,IndexRE *indexRe)
{
    int mat;
    char nom[30],wilay[20],sx[8],gp[3],gd[50],dp[20],prenom[30];
    Date DR,DN;
    char spec[20],univ[50]= " UNIVERSITE";
    int n=entete(fichier,2);
    printf("\n\n\ n");
    int indexe[n];
    int index;
    int blocs[n];
    Bloc buf;
    int i=0,k=0,j=0,m=0;
    int inter=0;
    int numbloc=0;
    int numBuf=0;
    FILE *f=NULL;
    char universites[108][500];
    char ligne[500];
    int jj,mm,a;
    int existe,blocc,indx;




    system("cls");
            cadre();
            gotoxy(10,3);
            affiche_esi2();
            gotoxy(53,wherey()+2);
            printf(" Veuillez Remplir les informations de l'enseignant");
            gotoxy(47,wherey()+2);


 //   printf(" \n\n LES UNIVERSITES :\n");
    f=fopen("universites.txt","r"); /// on ouvre le fichier des univ
    while ( !feof(f))
       {
            fgets(&ligne,500,f);
            strcpy(universites[i],ligne);
            i++;
       }
    //printf("\n\n");
    fclose(f);
    if (entete(fichier,4)>0) /// s'il ya des element supprimé ds le fichier on l'crase
      {


            while (m<entete(fichier,1)) /// on parcours les bloc jusqu'a trouver un bloc avec des element supprimés
            {     //  printf("\n\nnum bloc actuel =%d \n",m);
                    liredir(fichier,m,&buf);
                   //  printf("nbr delemnt supp== %d \n\n",buf.nbEff);
                    if(buf.nbEff>0) /// lorsqu'on trouve le bloc avec des elmt supp
                    {   numbloc=m; /// on garde le numero du bloc
                 //   printf("il ya des elemnt efface== %d \n",buf.nbEff);
                        break;
                    }

                m++;
            }

            liredir(fichier,numbloc,&buf);/// on lis le bloc ds un buffer
            for (k=0; k<(buf.NbElt+buf.nbEff);k++) /// on recherche les positions des element supprimés
                {
                    if (buf.enseignants[k].efface==1)
                    {
                       // printf("\nkayen element efface hna xd avec lindex = %d \n",k);
                       indexe[j]=k; /// on les mets ds un tableau
                        blocs[j]=i;

                        j++;
                    }
                }
                index=indexe[0];
                 /// on recupere la position du premier élement supp
                                 /// c'est a cette position qu'on va insérer le nouvel element
                aff_entete(fichier,2,(entete(fichier,2))+1); /// on met a jour l'entete
                aff_entete(fichier,4,(entete(fichier,4))-1);


       }
    else  ///DS le cas ou on en a un aucun element supprimé
       { ///on regarde si le dernier bloc n'est pas plain a 100% on rajoute le nouvel element a la fin de ce bloc
        /// on lit le dernier bloc


                liredir(fichier,(entete(fichier,1)-1),&buf);

                if((buf.NbElt+buf.nbEff)<maximum)///si le dernier bloc n'est pas plein on rajoute a sa fin
                {

                    numbloc=(entete(fichier,1)-1);

                    index=(buf.NbElt+buf.nbEff); /// on se positionne au dernier element du bloc +1


                    aff_entete(fichier,2,(entete(fichier,2))+1); /// on met a jour l'entete
                    aff_entete(fichier,3,(entete(fichier,3))+1); /// le nbr d'element inséré
                    buf.NbElt++; /// on incremente le nombre d'element inséré ds le bloc

                  /*  printf("if nombre de bloc du fichier %d \n",entete(fichier,1));
                    printf("if nombre delement du fichier %d \n",entete(fichier,2));
                    printf("if nombre delement inseree du fichier %d \n",entete(fichier,3));
                    printf("if nombre delement supp du fichier %d \n",entete(fichier,4));*/
                }
                else /// sinon on aloue un nouveau bloc
                {
                  //  printf("\nle nombre de bloc == %d\n",entete(fichier,1));
                    aff_entete(fichier,1,(entete(fichier,1)+1)); ///on recupere le numero du dernier bloc

                    numbloc=(entete(fichier,1)-1); /// et on increment le nbr de bloc du fichier ds l'entete
                  //  printf("le num du dernier bloc == %d",numbloc);
                    liredir(fichier,numbloc,&buf); /// on lit le bloc vide
                    buf.efface=0; /// on met a jour tous les champs du bloc
                    buf.NBloc=numbloc;
                    buf.nbEff=0;
                    buf.NbElt=1;

                    index=0;
                    aff_entete(fichier,2,(entete(fichier,2))+1); /// on met a jour l'entete
                    aff_entete(fichier,3,(entete(fichier,3))+1); /// le nbr d'element inséré

                 /*   printf("\nelse nombre de bloc du fichier %d \n",entete(fichier,1));
                    printf("else nombre delement du fichier %d \n",entete(fichier,2));
                    printf("else nombre delement inseree du fichier %d \n",entete(fichier,3));
                    printf("else nombre delement supp du fichier %d \n",entete(fichier,4));*/
                }



    }
      mat=aleaMatricule();///on genere un nouveau matricule

        existe=rechercheMatricule(fichier,mat,&blocc,&indx);///on le compare avec les matricule du fichier
                while(existe==1) ///s'il existe deja on genere un autre jusqu'a trouver un qui est different
                {

                mat=aleaMatricule();
                existe=rechercheMatricule(fichier,mat,&blocc,&indx);

                }

        buf.enseignants[index].matricule=mat; /// on écrit ce matricule ds le buffer





        /****** on genere les infos ********/




         /** Nom */
         textcolor(4);
         printf("Le nom : ");
         textcolor(15);
         scanf("%s",&nom);

         sprintf(buf.enseignants[index].nom,"%s",nom);

         /** preNom */
        gotoxy(47,wherey()+1);
        textcolor(4);
         printf("Le prenom : ");
         textcolor(15);
         scanf("%s",&prenom);

         sprintf(buf.enseignants[index].prenom,"%s",prenom);

         /** Sexe */
         sexe(&sx);

         sprintf(buf.enseignants[index].sexe,"%s",sx);
           /** date de naissance */
         DateN(&DN);
         buf.enseignants[index].date_naissance.annee=DN.annee ;
         buf.enseignants[index].date_naissance.jour=DN.jour;
         buf.enseignants[index].date_naissance.mois=DN.mois;

          /** wilaya naissance */
         wilaya(&wilay);

         sprintf(buf.enseignants[index].wilaya_naissance,"%s",wilay);

         /** groupe sanguin*/
         groupe(&gp);

         sprintf(buf.enseignants[index].groupe_sanguin,"%s",gp);


           /** specialite*/
         specialite(&spec);

         sprintf(buf.enseignants[index].specialite,"%s",spec);

         /** grade*/
         grade(&gd);

         sprintf(buf.enseignants[index].grade,"%s",gd);

        /** dernier diplome*/
         diplome(&dp);

         sprintf(buf.enseignants[index].dernier_diplome,"%s",dp);

         /** etablissmeent / univ*/
         /// selection de l'univ : on les affiche d'abord
         int mutation;




         /// on affiche toutes les univ pour qu'il puisse choisir la nouvelle affectation
                system("cls");
                //cadre();
                //gotoxy(10,3);
                //affiche_esi2();
                textcolor(4);
                gotoxy(20,3);
                printf("%c",201);
                for (i=0;i<108;i++)
                {
                    printf("%c",205);
                }
                printf("%c",187);
                textcolor(15);
                gotoxy(wherex(),wherey()+43);
                /// bas
                textcolor(4);
                gotoxy(20,wherey());
                printf("%c",200);
                for (i=0;i<108;i++)
                {
                    printf("%c",205);
                }
                printf("%c",188);
                textcolor(15);
                gotoxy(53,wherey()-40);
                textcolor(4);
                printf("Choix de l etablissement - Premiere page");
                i=0;
                gotoxy(32,wherey()+2);
                /// premiere page
                textcolor(15);
                while ( i<36)
                {
                    printf("%d- %s  ",i+1,universites[i]);
                    i++;
                    gotoxy(32,wherey());

                }
                if (choisir(&mutation))
                {
                    /// 2eme page
                    system("cls");
                    //cadre();
                    //gotoxy(10,3);
                    //affiche_esi2();
                    textcolor(4);
                    gotoxy(20,3);
                    printf("%c",201);
                    for (i=0;i<108;i++)
                    {
                        printf("%c",205);
                    }
                    printf("%c",187);
                    textcolor(15);
                    gotoxy(wherex(),wherey()+43);
                    /// bas
                    textcolor(4);
                    gotoxy(20,wherey());
                    printf("%c",200);
                    for (i=0;i<108;i++)
                    {
                        printf("%c",205);
                    }
                    printf("%c",188);
                    textcolor(15);
                    gotoxy(53,wherey()-40);
                    textcolor(4);
                    printf("Choix de l etablissement - Deuxieme Page");

                    gotoxy(32,wherey()+2);
                    /// premiere page
                    textcolor(15);
                    i=36;
                    while ( i<72)
                    {
                        printf("%d- %s  ",i+1,universites[i]);
                        i++;
                        gotoxy(32,wherey());

                    }
                    if ( choisir(&mutation))
                    {
                        /// affichage page 3 ( derniere )
                            /// 3eme page
                        system("cls");
                        //cadre();
                        //gotoxy(10,3);
                        //affiche_esi2();
                        textcolor(4);
                        gotoxy(20,3);
                        printf("%c",201);
                        for (i=0;i<108;i++)
                        {
                            printf("%c",205);
                        }
                        printf("%c",187);
                        textcolor(15);
                        gotoxy(wherex(),wherey()+43);
                        /// bas
                        textcolor(4);
                        gotoxy(20,wherey());
                        printf("%c",200);
                        for (i=0;i<108;i++)
                        {
                            printf("%c",205);
                        }
                        printf("%c",188);
                        textcolor(15);
                        gotoxy(53,wherey()-40);
                        textcolor(4);
                        printf("Choix de l etablissement - Troisieme Page");

                        gotoxy(32,wherey()+2);
                        /// premiere page
                        textcolor(15);
                        i=72;
                        while ( i<108)
                        {
                            printf("%d- %s  ",i+1,universites[i]);
                            i++;
                            gotoxy(32,wherey());

                        }
                          mutation=1000;
                          while ((mutation>=108)||(mutation<=0))
                          {
                              gotoxy(32,wherey()+5);
                               printf("Veuillez taper le numero de l'etablissement : (entre 1 et 108) ");
                              textcolor(4);
                              scanf("%d",&mutation);
                              textcolor(15);
                              if((mutation>=108)||(mutation<=0))
                              {
                                  system("cls");
                              }
                          }
                    }
                }

         sprintf(buf.enseignants[index].etablissement_univ,"%s",universites[mutation-1]);

         /** date de recrutement */
         DateR(&DR);
         buf.enseignants[index].date_naissance.annee=DR.annee ;
         buf.enseignants[index].date_naissance.jour=DR.jour;
         buf.enseignants[index].date_naissance.mois=DR.mois;

         if ( wherey()>50)
         {
             system("cls");
             cadre();
             affiche_esi2();
         }
         gotoxy(35,wherey()+2);
         textcolor(4);

         printf("L enseignant a ete ajoute avec succes ! Voila son matricule : %d\n",mat);

         textcolor(15);




         /// on ecrit le buffer ds le fichier
         buf.enseignants[index].efface=0;
         ecriredir(fichier,numbloc,&buf);
         /// on ajoute dans l'index
         ajoutElementIndexRE(indexRe,universites[mutation-1],numbloc,index);
         ajoutElementIndexEP(indexEp,universites[mutation-1],numbloc,index,DR.jour,DR.jour,DR.annee);
         ///on met a jour l'entete

         ///on ecrit l'entete ds le fichier
         rewind(fichier->fich);
         fwrite(&(fichier->entete),sizeof(Entete),1,fichier->fich);/// on ecrit l'entete

}

/*********************************************************************************/
void suppression(Tfich *fichier,int matricule,IndexEP*indexEp, IndexRE *indexRe)
{
    int bloc,index,exist;
    int k=0;
    Bloc buf;
    int numBuf,elts,eltsupp;

    exist=rechercheMatricule(fichier,matricule,&bloc,&index);
    if(exist==1)
    {
        liredir(fichier,bloc,&buf);
        buf.enseignants[index].efface=1;
        /// on supprime de lindex aussi
        SupprElementIndexRE(indexRe,bloc,index);
        SupprElementIndexEP(indexEp,bloc,index);

        eltsupp=buf.nbEff;
        buf.nbEff++;
        buf.NbElt--;
        elts=(buf.nbEff+buf.NbElt);
        numBuf=bloc;

        if (buf.NbElt==0)
        {
            /// tous les elements du bloc ont ete suppprimes, donc on doit supprimer le bloc complet
            /// dans ce czs on va faire un graaand décalage :=)
            /// on va modifier les numeros de tout les blocs a partir de celui qu'on va supprimer
            for (k=numBuf;k<entete(fichier,1);k++)
            {
                liredir(fichier,numBuf+1,&buf);
                buf.NBloc=numBuf;
                ecriredir(fichier,numBuf,&buf);
                numBuf++;
            }
            /// on met a jour l'entete psk on a modifié le nombre d'elements :
            aff_entete(fichier,2,entete(fichier,2)-1);
            aff_entete(fichier,4,entete(fichier,4)-eltsupp);
            aff_entete(fichier,3,(entete(fichier,3))-elts);
            aff_entete(fichier,1,entete(fichier,1)-1);/// on a supprimé un bloc
                  /*  printf("\n nombre de bloc du fichier %d \n",entete(fichier,1));
                    printf(" nombre delement du fichier %d \n",entete(fichier,2));
                    printf(" nombre delement inseree du fichier %d \n",entete(fichier,3));
                    printf(" nombre delement supp du fichier %d \n",entete(fichier,4));*/

            /*************************************************************************************/
        }
        else
        {
            /// on va juste reecrire le bloc a sa place

            ecriredir(fichier,bloc,&buf);
            /// on met a jour l'entete psk on a modifié le nombre d'elements :
            aff_entete(fichier,2,entete(fichier,2)-1);
            aff_entete(fichier,4,entete(fichier,4)+1);

        }
        rewind(fichier->fich);
         fwrite(&(fichier->entete),sizeof(Entete),1,fichier->fich);/// on ecrit l'entete
         rewind(fichier->fich);
       /*  printf("\nnombre delement entete4 %d \n",entete(fichier,4));
                    printf("\n nombre de bloc du fichier %d \n",entete(fichier,1));
                    printf(" nombre delement du fichier %d \n",entete(fichier,2));
                    printf(" nombre delement inseree du fichier %d \n",entete(fichier,3));
                    printf(" nombre delement supp du fichier %d \n",entete(fichier,4));*/
        }
    else
    {

    }

}
/*********************************************************************************/
void suppression1(Tfich *fichier,int matricule)
{
    int bloc,index,exist;
    int k=0;
    Bloc buf;
    int numBuf,elts,eltsupp;

    if(exist==1)
    {
        liredir(fichier,bloc,&buf);
        buf.enseignants[index].efface=1;
        eltsupp=buf.nbEff;
        buf.nbEff++;
        buf.NbElt--;
        elts=(buf.nbEff+buf.NbElt);
        numBuf=bloc;

        if (buf.NbElt==0)
        {
            /// tous les elements du bloc ont ete suppprimes, donc on doit supprimer le bloc complet
            /// dans ce czs on va faire un graaand décalage :=)
            /// on va modifier les numeros de tout les blocs a partir de celui qu'on va supprimer
            for (k=numBuf;k<entete(fichier,1);k++)
            {
                liredir(fichier,numBuf+1,&buf);
                buf.NBloc=numBuf;
                ecriredir(fichier,numBuf,&buf);
                numBuf++;
            }
            /// on met a jour l'entete psk on a modifié le nombre d'elements :
            aff_entete(fichier,2,entete(fichier,2)-1);
            aff_entete(fichier,4,entete(fichier,4)-eltsupp);
            aff_entete(fichier,3,(entete(fichier,3))-elts);
            aff_entete(fichier,1,entete(fichier,1)-1);/// on a supprimé un bloc
            printf("\n nombre de bloc du fichier %d \n",entete(fichier,1));
                    printf(" nombre delement du fichier %d \n",entete(fichier,2));
                    printf(" nombre delement inseree du fichier %d \n",entete(fichier,3));
                    printf(" nombre delement supp du fichier %d \n",entete(fichier,4));

            /*************************************************************************************/
        }
        else
        {
            /// on va juste reecrire le bloc a sa place
            printf("on va juste reecrire le bloc a sa place");
            ecriredir(fichier,numBuf,&buf);
            /// on met a jour l'entete psk on a modifié le nombre d'elements :
            aff_entete(fichier,2,entete(fichier,2)-1);
            aff_entete(fichier,4,entete(fichier,4)+1);
            printf("\nnombre delement entete4 %d \n",entete(fichier,4));
            printf("\n nombre de bloc du fichier %d \n",entete(fichier,1));
                    printf(" nombre delement du fichier %d \n",entete(fichier,2));
                    printf(" nombre delement inseree du fichier %d \n",entete(fichier,3));
                    printf(" nombre delement supp du fichier %d \n",entete(fichier,4));
        }
        rewind(fichier->fich);
         fwrite(&(fichier->entete),sizeof(Entete),1,fichier->fich);/// on ecrit l'entete
    }
    else
    {
        printf("l element correspondant a ce matricule nexiste pas dans le fichier");
    }


}

/********************/
void ajoutElementIndexEP(IndexEP *indexEp,char *univ[],int bloc,int deplacement, int jour,int mois,int annee)
{
    BlocIndexEP *tableau;
    int nbblocs=indexEp->nbBlocs;
    int nbelts=indexEp->nbElts;
    tableau=indexEp->tableau;
    int existe=0;
    int numeroIndex;
    int n=0;


    /// on verifie si l'etablissement de lindividu i existe dans l'index
        existe=univExiste(tableau,univ,nbblocs,&numeroIndex);


        if (existe)
        {

            /// on a le bloc numero index
            ///on ecrit directement


           n=tableau[numeroIndex].NB;

           if (n!=maxIEP)
           {
            /// cest pas plein
            tableau[numeroIndex].profs[n].dateRecrutement.annee =annee;
            tableau[numeroIndex].profs[n].dateRecrutement.jour=jour;
            tableau[numeroIndex].profs[n].dateRecrutement.mois =mois;
             tableau[numeroIndex].profs[n].index=deplacement;
              tableau[numeroIndex].profs[n].NbBloc=bloc;
              tableau[numeroIndex].NB=n+1;
              nbelts++;
           }

        }
        if ((!existe)||(n==maxIEP))
        {

            /// on doit creer un nouveau bloc
            n=0;

            sprintf(tableau[nbblocs].etablissement,"%s",univ);

            tableau[nbblocs].profs[n].dateRecrutement.annee =annee;

            tableau[nbblocs].profs[n].dateRecrutement.jour=jour;
            tableau[nbblocs].profs[n].dateRecrutement.mois =mois;
             tableau[nbblocs].profs[n].index=deplacement;
              tableau[nbblocs].profs[n].NbBloc=bloc;
              tableau[nbblocs].NB=n+1;
              nbelts++;
              nbblocs++;

        }


    indexEp->nbBlocs=nbblocs;
    indexEp->nbElts=nbelts;
    indexEp->tableau=tableau;




}
  /**********************/
  void ajoutElementIndexRE(IndexRE *IndexRe,char *univ[],int bloc,int deplacement)
{
    BlocIndexRE *tableau;
    tableau=IndexRe->tableau;
    int k=0;


     /// on récupère les etablissements
    /// on récupère les etablissements
    FILE *f=NULL;
    char universites[108][500];
    char ligne[500];
    int i=0;
    char regions[108][2];
    char reg[2];
    int numeroIndex=-1;

    f=fopen("universites.txt","r");

      i=0;
      fgets(&ligne,500,f);
       while ( !feof(f))
                   {
                        fgets(&ligne,2,f);
                        strcpy(regions[i],ligne);
                        fgets(&ligne,500,f);
                        strcpy(universites[i],ligne);

                        i++;
                   }

    fclose(f);
    int nbelts=IndexRe->nbElts;
    int nbblocs=IndexRe->nbBlocs;
    int existe =0;



        /// on recupere les univs tan xDD

        /// on verifie si la region existe
        /// on recupere la region de l'universite :
        for (k=0;k<108;k++)
        {

            if ( strcmp(universites[k],univ)==0)
            {
                sprintf(reg,"%s",regions[k]);

            }
        }

        existe=regionExiste(tableau,reg,nbblocs,&numeroIndex);

        int n=0;
        if (existe)
        {
            /// on a le bloc numero index
            ///on ecrit directement


           n=tableau[numeroIndex].NB;

           if (n!=maxIEP)
           {
            /// cest pas plein

             tableau[numeroIndex].profs[n].index=deplacement;
              tableau[numeroIndex].profs[n].NbBloc=bloc;
              tableau[numeroIndex].NB=n+1;
              nbelts++;
           }

        }
        if ((!existe)||(n==maxIEP))
        {
            /// on doit creer un nouveau bloc
            n=0;

            sprintf(tableau[nbblocs].region,"%s",reg);
             tableau[nbblocs].profs[n].index=deplacement;
              tableau[nbblocs].profs[n].NbBloc=bloc;
              tableau[nbblocs].NB=n+1;
              nbelts++;
              nbblocs++;

        }






    IndexRe->tableau;
    IndexRe->nbElts=nbelts;
    IndexRe->nbBlocs=nbblocs;

}

void affichentete(Tfich *fichier)
{
    system("cls");
            cadre();

            affiche_esi2();
             affiche_ligne_haut();
            gotoxy(64,wherey()+2);
            printf("L'entete du fichier ");
            gotoxy(57,wherey()+3);
           // gotoxy(47,wherey()+1);
        textcolor(4);

            printf("Nombre de blocs dans le fichier : ");
            textcolor(15);
                   printf("%d \n",entete(fichier,1));
            gotoxy(57,wherey()+2);
            textcolor(4);
            printf("Nombre d'elements dans le fichier : ");
                   textcolor(15);
                   printf("%d \n",entete(fichier,2));
                   printf("\n\n");
                    affiche_ligne_bas();

         /*   gotoxy(47,wherey()+2);
            printf(" nombre delement inseree du fichier %d \n",entete(fichier,3));
            gotoxy(47,wherey()+2);
            printf(" nombre delement supp du fichier %d \n",entete(fichier,4));*/

}










