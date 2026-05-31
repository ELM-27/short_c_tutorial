#include "C_Sample.h"

/* Function to interpret movements */
void read_movements(char move, int *x, int *y) {
    switch (move) {
        case 'u' :
            (*y)++; 
            break;
        case 'd' :
            (*y)--;
            break;
        case 'l' :
            (*x)--;
            break;
        case 'r' :
            (*x)++;
            break;
        default :
            break;
    }
}

/* Function to read and store store map */
void read_map(FILE *mapfile, int *map) {
    int i = 0, j = 0;
    
    for (i = 0; i < 11; i++) {
        for (j = 0; j < 11; j++) {
            fscanf(mapfile, "%d,", &map[i * 11 + j]);
        }
    }
}