/*
   MAISSE Yann
   3IRC Groupe 1
   Pointeurs de tableau
 */
 #include <stdio.h>
 #include <stdlib.h> //Pour gérer random
 #include <time.h> //Pour initialiser le random

void fillInt(int* ptr, int size);
void fillFloat(float* ptr, int size);
void editInt(int* ptr, int size);
void editFloat(float* ptr, int size);
void printInt(int* ptr, int size);
void printFloat(float* ptr, int size);


int main() {
        int nbr = 10; //Taille des tableaux
        int var1[nbr];
        float var2[nbr];
        srand(time(NULL)); //Initialisation du seed de la fonction random par le timestamp actuel (unique)
        fillInt(&var1[0], nbr);
        fillFloat(&var2[0], nbr);
        printInt(&var1[0], nbr);
        printFloat(&var2[0], nbr);
        editInt(&var1[0], nbr);
        editFloat(&var2[0], nbr);
        printInt(&var1[0], nbr);
        printFloat(&var2[0], nbr);
        return 0;
}


void fillInt(int* ptr, int size) { //Fonction de remplissage aléatoire int
        for(int i = 0; i < size; i++) {
                *ptr = rand(); //rand() est un int (entre 0 et 65535)
                ptr++; //Incrément unitaire pour un int
        }
}

void fillFloat(float* ptr, int size) { //Fonction de remplissage aléatoire float
        for(int i = 0; i < size; i++) {
                *ptr = (float)rand()/(float)(RAND_MAX) * 6.0; //Random décimal entre 0 et 6 (choix arbitraire)
                ptr += 4; //Incrément de 4 pour les float
        }
}

void editInt(int* ptr, int size) {
        for(int i = 0; i < size; i++) {
                if(i % 2 == 0) { //Si divisible par 2
                        *ptr *= 3; //Multiplication par 3
                }
                ptr++;
        }
}

void editFloat(float* ptr, int size) {
        for(int i = 0; i < size; i++) {
                if(i % 2 == 0) {
                        *ptr *= 3.0;
                }
                ptr += 4;
        }
}

void printInt(int* ptr, int size) { //Affichage inline
        printf("INT : ");
        for(int i = 0; i < size; i++) {
                printf("%d ", *ptr);
                ptr++;
        }
        printf("\n");
}

void printFloat(float* ptr, int size) {
        printf("FLOAT : ");
        for(int i = 0; i < size; i++) {
                printf("%f ", *ptr);
                ptr += 4;
        }
        printf("\n");
}
