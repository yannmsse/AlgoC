/*
   MAISSE Yann
   3IRC Groupe 1
   Opérateurs aritmétiques et logiques
 */
#include <stdio.h>

int a = 16;
int b = 3;

int main() {
        printf("%d + %d = %d\n", a, b, (a+b));
        printf("%d - %d = %d\n", a, b, (a-b));
        printf("%d * %d = %d\n", a, b, (a*b));
        printf("%d / %d = %f\n", a, b, ((float)a/(float)b)); //Cast des int en float pour effectuer une division avec des décimales
        printf("%d modulo %d = %d\n", a, b, (a%b));
        printf("%d OU %d = %d\n", a, b, (a|b));
        printf("%d ET %d = %d\n", a, b, (a&b));
        printf("%d inversé = %d\n", a, (~a));
        printf("%d décalé de 1 bit à gauche = %d\n", a, (a<<1));
        printf("%d décalé de 1 bit à droite = %d\n", b, (b>>1));
        return 0;
}
