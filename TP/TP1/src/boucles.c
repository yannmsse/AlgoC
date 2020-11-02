/*
   MAISSE Yann
   3IRC Groupe 1
   Triangle rectangle
 */
#include <stdio.h>

int main() {
        int compter;
        int c;
        printf("Indiquez la taille du triangle : ");
        scanf("%d", &compter);
        while((c=getchar()) != EOF && c != '\n'); //Vidage du buffer

        for(int i = 0; i < compter; i++) { //Pour chaque lignes du triangle
                if(i == 0) { //Premiere ligne
                        printf("*\n");
                }

                else if(i == 1) { //Deuxieme ligne
                        printf("**\n");
                }

                else if(i == compter-1) { //Dernière ligne
                        for(int j = 0; j < compter; j++) {
                                printf("*");
                        }
                        printf("\n");
                }

                else { //Les autres lignes
                        printf("*"); //Etoile de gauche
                        for(int j = 0; j < i-1; j++) {
                                printf("#"); //Remplissage
                        }
                        printf("*\n"); //Etoile de droite
                }

        }
        return 0;
}
