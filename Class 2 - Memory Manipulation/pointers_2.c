#include <stdio.h>

int main(int argc, char * argv[]) {
    int x_basic;
    int * x_pointer;

    x_basic = 5;
    x_pointer = 5;

    printf("x_basic: %d\n", x_basic);
    printf("x_pointer: %d\n", x_pointer);
    printf("x_pointer (dereferenced): %d\n", *x_pointer);
}