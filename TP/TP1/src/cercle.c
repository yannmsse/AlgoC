/*
   MAISSE Yann  
   3IRC Groupe 1
   Calcul de périmetre et d'aire d'un cercle de rayon donné
 */
#include <stdio.h>
#include <math.h> //Importation de Pi

int main() {
        int c;
        float rayon;
        printf("Indiquez le rayon du cercle : ");
        scanf("%f", &rayon); //Saisie au clavier
        while((c=getchar()) != EOF && c != '\n'); //Vidage du buffer
        float aire = M_PI * (rayon * rayon); //Calcul aire
        float perimetre = M_PI * 2 * rayon; //Calcul périmètre
        printf("L'aire est de %f et le périmètre est de %f pour un rayon de %f\n", aire, perimetre, rayon);
        return 0;
}