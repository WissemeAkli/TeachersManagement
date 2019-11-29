#include "affichage.h"


/**************************************/
   void cadre (void)
   {

        int i;
        for (i=0; i<150;i++)
        {
            textcolor(4);
            gotoxy(0,i);
            printf("%c",178);
        }
        for (i=1; i<150;i++)
        {
            textcolor(4);
            gotoxy(i,60);
            printf("%c",178);
        }
        textcolor(15);
   }
/*******************************/


/**======================*/
/*Procedure pour afficher le cadre du sous menu d'en haut*/
  void affiche_ligne_haut(void)
   {
        int i;
        textcolor(4);
        gotoxy(30,wherey()+8);
        printf("%c",201);
        for (i=0;i<88;i++)
        {
            printf("%c",205);
        }
        printf("%c",187);
        textcolor(15);
   }

   /*Procedure pour afficher le cadre du sous menu d'en bas*/
   void affiche_ligne_bas(void)
   {
        int i;
        textcolor(4);
        gotoxy(30,wherey());
        printf("%c",200);
        for (i=0;i<88;i++)
        {
            printf("%c",205);
        }
        printf("%c",188);
        textcolor(15);
   }
/******************************/
    /* fonction pour l'affichage du logo "esi" sans delay*/
   void affiche_esi2(void)
   {
        textcolor(15);
        gotoxy(1,1);
        printf("\n\n   %c%c%c%c%c  %c%c%c%c%c  %c%c%c%c%c  ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("\n   %c      %c        %c          ",219,219,219);
        printf("\n   %c      %c        %c                                    ",219,219,219);
        printf("\n   %c%c%c%c%c  %c%c%c%c%c    %c",219,219,219,219,219,219,219,219,219,219,219);
        printf("\n   %c          %c    %c",219,219,219);
        printf("\n   %c          %c    %c",219,219,219);
        printf("\n   %c%c%c%c%c  %c%c%c%c%c  %c%c%c%c%c\n\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        textcolor(15);
   }
/**=====================*/

void nosInfos()
{
        gotoxy(wherex(),wherey());
        affiche_ligne_haut();
        gotoxy(wherex(),wherey()+2);

        gotoxy(64,wherey());

        printf("  TP SFSD - TO7F ");
        gotoxy(52,wherey()+1);
        printf(" Gestion des informations d'enseignants");
        gotoxy(58,wherey()+2);
        textcolor(4);
        printf(" Binome :");
        textcolor(15);
        gotoxy(68,wherey());
        printf(" AKLI Wisseme");
           gotoxy(68,wherey()+1);
        printf(" NOUAR Rania Manel");
        gotoxy(58,wherey()+1);
        textcolor(4);
        printf(" Groupe :");
        textcolor(15);
        printf("  08");


}


