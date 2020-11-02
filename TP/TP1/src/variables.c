/*
   MAISSE Yann
   3IRC Groupe 1
   Valeurs de différents types de variables
 */
#include <stdio.h>

unsigned char var1 = 13;
signed char var2 = -8;
unsigned short var3 = 50345;
signed short var4 = 32000;
unsigned int var5 = 3200000000;
signed int var6 = -1800000000;
long int var7 = 4294967000;
long long int var8 = 1694967000;
float var9 = 1.414;
double var10 = 2.7654342689;
long double var11 = 7.88765453784;

int main() {
        printf("Valeur unsigned char : %u\n", var1);
        printf("Valeur signed char : %d\n", var2);
        printf("Valeur unsigned short : %hu\n", var3);
        printf("Valeur signed short : %hu\n", var4);
        printf("Valeur unsigned int : %u\n", var5);
        printf("Valeur signed int : %i\n", var6);
        printf("Valeur long int : %ld\n", var7);
        printf("Valeur long long int : %lld\n", var8);
        printf("Valeur float : %f\n", var9);
        printf("Valeur double : %f\n", var10);
        printf("Valeur long double : %Lf\n", var11);
        return 0;
}
