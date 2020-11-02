/*
   MAISSE Yann
   3IRC Groupe 1
   Choix d'opérateur par un switch
 */
#include <stdio.h>


int main () {
        int num1, num2;
        char op;
        int c;

        printf("Premier nombre : ");
        scanf("%d", &num1); //Saisie au clavier
        while((c=getchar()) != EOF && c != '\n'); //Vidage du buffer
        printf("Second nombre : ");
        scanf("%d", &num2);
        while((c=getchar()) != EOF && c != '\n');
        printf("Opérateur : ");
        scanf("%c", &op);
        while((c=getchar()) != EOF && c != '\n');

        switch(op) { //Selon l'opérateur
        case '+':
                printf("%d + %d = %d\n", num1, num2, (num1+num2));
                break;

        case '-':
                printf("%d - %d = %d\n", num1, num2, (num1-num2));
                break;

        case '*':
                printf("%d * %d = %d\n", num1, num2, (num1*num2));
                break;

        case '/':
                printf("%d / %d = %f\n", num1, num2, ((float)num1/(float)num2)); //Cast des int en float pour effectuer une division avec des décimales
                break;

        case '%':
                printf("%d modulo %d = %d\n", num1, num2, (num1%num2));
                break;

        case '&':
                printf("%d & %d = %d\n", num1, num2, (num1&num2));
                break;

        case '|':
                printf("%d | %d = %d\n", num1, num2, (num1|num2));
                break;

        case '~':
                printf("%d inversé = %d\n", num1, (~num1));
                break;

        default:
                printf("Opérateur inconnu\n");
        }
        return 0;
}
