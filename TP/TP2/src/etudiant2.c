/*
   FREMIOT Théo
   CHABOT Axel
   4ETI Groupe D
   Etudiant2
 */
#include <stdio.h>

typedef struct Eleve Eleve; //Nouveau type défini par la structure Eleve
struct Eleve { //Structure
        char nom[10]; //Taille définie quantitativement
        char prenom[10];
        char adresse[15];
        int note1;
        int note2;
};

int main() {
        Eleve eleves[5] = {{"Fremiot", "Theo", "Mulhouse", 19, 1}, //Déclaration et initialisation de tableau de structure (inline)
                           {"Lenoir", "Leo", "Saint-Honoré", 2, 16},
                           {"Valentin", "Matthieu", "Besancon", 17, 13},
                           {"Fauchery", "Theodore", "Ecully", 12, 15},
                           {"Dupont", "Michel", "Paris", 4, 20}};

        for(int i = 0; i < 5; i++) {
                printf("Nom : %s | Prenom : %s | Adresse : %s | ProgC : %d | SE : %d\n", eleves[i].nom, eleves[i].prenom, eleves[i].adresse, eleves[i].note1, eleves[i].note2);
        }
}


