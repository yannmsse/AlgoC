/*
   MAISSE Yann
   3IRC Groupe 1
   Couleurs
 */
#include <stdio.h>

typedef struct RGBA RGBA;
struct RGBA {
        unsigned char red;
        unsigned char green;
        unsigned char blue;
        unsigned char alpha;
};

int main() {
        RGBA couleurs[10] = {{0x10, 0x11, 0x12, 0x13}, //Notation hexadécimal
                             {0x20, 0x21, 0x22, 0x23},
                             {0x30, 0x31, 0x32, 0x33},
                             {0x40, 0x41, 0x42, 0x43},
                             {0x50, 0x51, 0x52, 0x53},
                             {0x60, 0x61, 0x62, 0x63},
                             {0x70, 0x71, 0x72, 0x73},
                             {0x80, 0x81, 0x82, 0x83},
                             {0x90, 0x91, 0x92, 0x93},
                             {0xa0, 0xa1, 0xa2, 0xa3}};

        for(int i = 0; i < 10; i++) {
                printf("R : 0x%x | G : 0x%x | B : 0x%x | A : 0x%x\n", couleurs[i].red, couleurs[i].green, couleurs[i].blue, couleurs[i].alpha); //Affichage hexadécimal
        }
        return 0;
}
