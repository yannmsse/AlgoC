/*
   MAISSE Yann
   3IRC Groupe 1
   Valeurs de différents types de variables avec les pointeurs
 */
#include <stdio.h>


int main() {
        unsigned char var1;
        signed char var2;
        unsigned short var3;
        signed short var4;
        unsigned int var5;
        signed int var6; //Variables de base
        long int var7;
        long long int var8;
        float var9;
        double var10;
        long double var11;

        unsigned char *ptrvar1 = &var1;
        signed char *ptrvar2 = &var2;
        unsigned short *ptrvar3 = &var3;
        signed short *ptrvar4 = &var4;
        unsigned int *ptrvar5 = &var5;
        int *ptrvar6 = &var6; //Création pointeur et association avec la variable de base
        long int *ptrvar7 = &var7;
        long long int *ptrvar8 = &var8;
        float *ptrvar9 = &var9;
        double *ptrvar10 = &var10;
        long double *ptrvar11 = &var11;

        *ptrvar1 = 13;
        *ptrvar2 = -8;
        *ptrvar3 = 50345;
        *ptrvar4 = 32000;
        *ptrvar5 = 3200000000;
        *ptrvar6 = -1800000000; //Initialisation de la variable par son pointeur
        *ptrvar7 = 4294967000;
        *ptrvar8 = 1694967000;
        *ptrvar9 = 1.414;
        *ptrvar10 = 2.7654342689;
        *ptrvar11 = 7.88765453784;

        printf("Valeur unsigned char : %u | Adresse : %p\n", *ptrvar1, ptrvar1);
        printf("Valeur signed char : %d | Adresse : %p\n", *ptrvar2, ptrvar2);
        printf("Valeur unsigned short : %hu | Adresse : %p\n", *ptrvar3, ptrvar3);
        printf("Valeur signed short : %hd | Adresse : %p\n", *ptrvar4, ptrvar4);
        printf("Valeur unsigned int : %u | Adresse : %p\n", *ptrvar5, ptrvar5);
        printf("Valeur signed int : %d | Adresse : %p\n", *ptrvar6, ptrvar6); //Affichage par pointeur et adresse
        printf("Valeur long int : %ld | Adresse : %p\n", *ptrvar7, ptrvar7);
        printf("Valeur long long int : %lld | Adresse : %p\n", *ptrvar8, ptrvar8);
        printf("Valeur float : %f | Adresse : %p\n", *ptrvar9, ptrvar9);
        printf("Valeur double : %f | Adresse : %p\n", *ptrvar10, ptrvar10);
        printf("Valeur long double : %Lf | Adresse : %p\n", *ptrvar11, ptrvar11);
        return 0;
}
