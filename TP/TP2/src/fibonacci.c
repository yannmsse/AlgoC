/*
   MAISSE Yann
   3IRC Groupe 1
   Suite de fibonacci
 */
#include <stdio.h>

int fibonacci(int n); //Prototype

int main() {
        int n;
        printf("Saisir les N termes à calculer : ");
        scanf("%d", &n); //Saisie
        for(int i = 0; i <= n; i++) { //Calcul de chaque termes entre 0 et n
                printf("%d ", fibonacci(i));
        }
        printf("\n");
        return 0;
}

int fibonacci(int n) { //Fonction récursive de calcul de la suite
        if(n < 2) {
                return 1;
        }
        else {
                return (fibonacci(n-2) + fibonacci(n-1)); //Appel récursif
        }
}
