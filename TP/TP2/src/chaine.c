/*
   MAISSE Yann
   3IRC Groupe 1
   Manipulation chaîne de caractère 
 */
#include <stdio.h>

int countChar(char* entree);
void cpyChar(char* entree, char* dest);
void catChar(char* entree1, char* entree2, char* dest);


int main() {
        char string1[] = "banane"; //Chaines de caractères de base
        char string2[] = "flambee";

        printf("La chaine de caractère %s fait %d caractères de long.\n", string1, countChar(string1)); //Affiche l'entier retourné de la fonction de comptage
        char cpyString[countChar(string2)+1]; //Création du tableau de longueur dynamique qui recoit la copie (+1 pour \0)
        cpyChar(string2, cpyString); //Fonction de copie
        printf("Chaine originale : %s, chaine copiee : %s\n", string2, cpyString);
        char catString[countChar(string1)+countChar(string2)+1];
        catChar(string1, string2, catString); //Fonction de concaténation
        printf("%s + %s = %s\n", string1, string2, catString);
        return 0;
}

int countChar(char* entree) { //Utilisation de pointeurs de chaine de caractères
        int i = 0;
        while(entree[i] != '\0') { //Tant que la chaine n'est pas finie
                i++; //On compte
        }
        return i;
}

void cpyChar(char* entree, char* dest) { //void car ne renvoi rien, la fonction ne fait que modifier le tableau créé
        int i;
        for(i = 0; entree[i] != '\0'; i++) {
          dest[i] = entree[i];
        }
        dest[i] = '\0'; //Cloture la chaine de caractères
}

void catChar(char * entree1, char* entree2, char* dest) {
        int i;
        for(i = 0; entree1[i] != '\0'; i++) {
          dest[i] = entree1[i];
        }
        int j;
        for(j = i; entree2[j-i] != '\0'; j++) {
          dest[j] = entree2[j-i];
        }
        dest[j] = '\0';
}
