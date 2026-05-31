#include "C_Sample.h"

/* 
 * Tuturial for basic C programming: 
 * 
 * Input: two files, one with a list of moves and the other 
 * 
 * There are two files that args[] takes:
 *   1. A list of movements. This file will contian one line
 *      containing a list of movements. These movements can either be
 *      u (up), d (down), l (left), or r (right). 
 *        - Note that in a standard coordinate plane, up and right are 
 *          positive movements while down and left are negative 
 *          movements, and the first value (x) stores left and right 
 *          movements while the second value (y) stores up and down 
 *          movements.
 *   2. A map. This .csv file contains a 11x11 grid, with the center of 
 *      the grid being labeled (0,0). Each point on the grid will 
 *      contain a number.
 * The goal of this project is to read the movements from the first
 * file and, starting from (0,0), find the final coordinate after all
 * the movements are completed. Once this is done, read the map file 
 * to find the correct number.
 * 
 * This project will be completed in _ phases: 
 *   1. Interpret movements
 *   2. Read the movement list and calculate the 
 *      final coordinate
 *   3. Read the map and store it in a 2D array
 *      - IMPORTANT: store the map using malloc and free the memory 
 *        at the end of the program
 *   4. Find the number at the final coordinate
 * 
 * Project files:
 *   - C_Sample.c should contain the main method
 *   - C_Sample_Functions.c should contain helper functions
 *   - C_Sample.h should act as the header file for both C_Sample.c 
 *      and C_Sample_Functions.c
 *   - Makefile is recommended to compile the code for this project
 * */

int main(int argc, char* argv[]) {
    /* open argv[1], argv[2] */
    FILE* movements = fopen(argv[1], "r");
    FILE* mapfile = fopen(argv[2], "r");

    /* initialize x, y */
    int x = 0, y = 0, number = 0;
    char * move = (char *)malloc(sizeof(char *));

    /* initialize map */
    int *map = (int *)malloc(11 * 11 * sizeof(int));

    /* read movement list and calculate final coordinates */
    while(feof(movements) == 0) {
        *move = fgetc(movements);
        read_movements(*move, &x, &y);
    }

    /* read map and store in 2D array */
    read_map(mapfile, map);

    /* find number at final coordinate */
    number = map[(y + 5) * 11 + (x + 5)];

    /* print file names */
    printf("final number: %d\n", number);

    fclose(movements);
    fclose(mapfile);
    free(map);
    free(move);

    /* end program */
    return 0;
}