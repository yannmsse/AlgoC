/*
   MAISSE Yann
   3IRC Groupe 1
   Puissance d'un nombre
 */
#include <stdio.h>

int main() {
   
    int nombre = 0;
    int puissance = 0;
    printf("Veuillez saisir le premier nombre : ");
    scanf("%d", &nombre); //Saisie au clavier
    printf("Veuillez saisir la puissance à laquelle vous souhaitez l'élever : ");
    scanf("%d", &puissance); //Saisie au clavier
    printf("%d \n",nombre);
    int res = nombre;

    for(int i = 1; i< puissance; i++){
        res = res*nombre;
    }
    printf("%d \n",res);

}