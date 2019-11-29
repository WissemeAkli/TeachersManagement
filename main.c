#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maximum 100
#define maxIEP 100
#define tailleIndexEP 500
#define tailleIndexRE 500



#include "Fonctions.c"
//#include "affichage.c"




int main()
{
    system("mode con cols=150 lines=60");
    textbackground(3);
    textcolor(7);
    system("cls");
    return menu1();
}
