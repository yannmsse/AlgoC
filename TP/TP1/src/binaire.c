/*
   MAISSE Yann
   3IRC Groupe 1
   Conversion décimale - binaire
 */
#include <stdio.h>

int main() {
        long int dec; //Décimale
        int bin[32]; //Chaine de caratère représentant les bits
        int i = 0;
        int c;

        printf("Nombre décimal : ");
        scanf("%ld", &dec); //Saisie au clavier
        while((c=getchar()) != EOF && c != '\n'); //Vidage du buffer

        while(dec > 0) {
                bin[i] = dec % 2; //Divisions par 2
                dec = dec / 2;
                i++;
        }
        if(i != 0) { //Gestion de 0
                for (int j = i - 1; j >= 0; j--) {
                        printf("%d", bin[j]); //Affichage de la chaine à l'envers
                }
        }
        else {
                printf("0");
        }
        printf("\n");
        return 0;
}
