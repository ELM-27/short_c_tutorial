#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Function to interpret movements */
void read_movements(char move, int *x, int *y);

/* Function to read and store store map */
void read_map(FILE *mapfile, int *map);