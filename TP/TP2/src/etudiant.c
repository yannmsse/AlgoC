/*
   MAISSE Yann
   3IRC Groupe 1
   Etudiant
 */
#include <stdio.h>

int main() {
        char nom[5][10] = {"Fremiot", "Lenoir", "Valentin", "Fauchery", "Dupont"}; //Tableau de chaine de caractères (2D)
        char prenom[5][10] = {"Theo", "Leo", "Matthieu", "Theodore", "Michel"};
        char adresse[5][15] = {"Mulhouse", "Saint-Honoré", "Besancon", "Ecully", "Paris"};
        int note1[5] = {19, 2, 17, 12, 4};
        int note2[5] = {1, 16, 13, 15, 20};
        for(int i = 0; i < 5; i++) {
                printf("Nom : %s | Prenom : %s | Adresse : %s | ProgC : %d | SE : %d\n", nom[i], prenom[i], adresse[i], note1[i], note2[i]);
        }
}
