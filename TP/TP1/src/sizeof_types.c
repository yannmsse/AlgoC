/*
   MAISSE Yann
   3IRC Groupe 1
   Taille des types de variables
 */
#include <stdio.h>

int main() {
        printf("Taille unsigned char : %lu octet\n", sizeof(unsigned char));
        printf("Taille signed char : %lu octet\n", sizeof(signed char));
        printf("Taille unsigned short : %lu octets\n", sizeof(unsigned short));
        printf("Taille signed short : %lu octets\n", sizeof(signed short));
        printf("Taille unsigned int : %lu octets\n", sizeof(unsigned int));
        printf("Taille signed int : %lu octets\n", sizeof(signed int));
        printf("Taille long int : %lu octets\n", sizeof(long int));
        printf("Taille long long int : %lu octets\n", sizeof(long long int));
        printf("Taille float : %lu octets\n", sizeof(float));
        printf("Taille double : %lu octets\n", sizeof(double));
        printf("Taille long double : %lu octets\n", sizeof(long double));
        return 0;
}
