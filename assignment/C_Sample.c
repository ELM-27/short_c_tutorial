#include "C_Sample.h"

/* 
 * How to compile and run (on linux):
 *  1. In a terminal, navigate to this folder
 *  2. In the terminal, type "make"
 *     - This will compile the code if there are no errors
 *     - If errors are present, they will be printed in the terminal
 *     - Other messages may also be printed. It it best to not ignore
 *       these, however you can still run the code if you receive
 *       these messages.
 *  3. In the terminal, type "./C_Sample test_n.txt map_m.csv", with
 *     n and m being replaced by the numbers for each file.
 */

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

    /* initialize x, y */

    /* read movement list and calculate final coordinates */

    /* read map and store in 2D array */

    /* find number at final coordinate */

    /* print file names */

    /* end program */
    return 0;
}