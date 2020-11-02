/*
   MAISSE Yann
   3IRC Groupe 1
   Puissance d'un nombre
 */
#include <stdio.h>

int main() {
    int d = 16;
    int masque = 10000000000000001000;   //masque avec le 4ème et 20 ème bits à 1 
    if((masque & d) == 10000000000000001000){
        printf("1\n");
    }else{
        printf("0\n");
    }
}