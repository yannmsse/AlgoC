/*
   MAISSE Yann
   3IRC Groupe 1
   Nombres entre 1 et 1000 divisible par 2 et 15
   Nombres entre 1 et 1000 divisible par 103 ou 107
   Nombres entre 1 et 1000 divisible par 5 ou 7 si il n'est pas divisible par 3
 */
#include <stdio.h>

int main() {
        unsigned short i;
        
        for(i=1; i <= 1000; i++) {
                if(i % 2 == 0) { //Divisible par 2 ?
                        if(i % 15 == 0) { //Divisible par 15 ?
                                printf("%hu est divisible par 2 et 15\n", i);
                        }
                }
        }

        for(i=1; i <= 1000; i++) {
                if(i % 103 == 0) { //Divisible par 103 ?
                        printf("%hu est divisible par 103\n", i);
                        continue; //Continuer sans tester la division de 107
                }
                if(i % 107 == 0) { //Divisible par 107 ?
                        printf("%hu est divisible par 107\n", i);
                }
        }

        for(i=1; i <= 1000; i++) { //De 1 à 1000
                if(i % 3 != 0) { //Pas divisible par 3 ?
                        if(i % 5 == 0) { //Divisible par 5
                                printf("%hu est divisible par 5 ou 7 mais pas par 3\n",i);
                                continue; //Continue sans tester la division à 7
                        }
                        else if(i % 7 == 0) { //Divisible par 7
                                printf("%hu est divisible par 5 ou 7 mais pas par 3\n",i);
                        }
                }
        }
        return 0;
}
