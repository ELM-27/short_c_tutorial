#include <stdio.h>

void function(int * n, char * s) {
    (*n)++;
    s = "New string";
}

int main(int argc, char * argv[]) {

    // What is a pointer?
    int x_basic;
    int * x_pointer;

    x_basic = 5;
    x_pointer = &x_basic;

    printf("x_basic: %d\n", x_basic);
    printf("x_pointer: %p\n", x_pointer);

    printf("\n");

    /*
    // How do I get and update information stored in pointers?
    printf("x_basic (dereferenced from x_pointer): %d\n", *x_pointer);

    *x_pointer = 10;
    printf("x_basic (after update through pointer): %d\n", x_basic);

    (*x_pointer)++;
    printf("x_basic (after incrementing through pointer): %d\n", x_basic);

    printf("\n");

    /*
    // How are pointers used to create strings?
    char * string;
    string = "This is a string"; // length: 16 (including null terminator)

    printf("string: %s\n", string);
    printf("string (address): %p\n", string);
    printf("string (first char): %c\n", *string);
    printf("string (second char): %c\n", *(string + 1));
    printf("string (second char): %c\n", string[1]);
    printf("string (last char): %c\n", *(string + 15));
    printf("string (null terminator): %c\n", *(string + 16));
    printf("string (reference beyond bounds): %c\n", *(string + 17));

    printf("\n");

    /*
    // How are pointers used to create arrays of strings?
    char * string_list[3];
    string_list[0] = "First string";
    string_list[1] = "Second string";
    string_list[2] = "Third string";

    printf("string_list[0]: %s\n", string_list[0]);
    printf("string_list[2]: %s\n", string_list[2]);

    printf("string_list (address of array):          %p\n", string_list);
    printf("string_list (address of first element):  %p\n", string_list[0]);
    printf("string_list (address of second element): %p\n", string_list[1]);
    printf("string_list (address of third element):  %p\n", string_list[2]);
    
    // Note: pointer arrays are not frequently used outside of string arrays

    printf("\n");

    /*
    // What happens to memory when I update a pointer?
    char * old_string = string_list[0];

    printf("string_list (address of first element):  %p\n", string_list[0]);
    string_list[0] = "New first string";
    printf("string_list (address of first element):  %p\n", string_list[0]);

    printf("old string_list[0]: %s\n", old_string);

    printf("\n");

    /*
    // How are pointers used to pass by reference?
    int n = 5;
    char * s = "Old string";

    printf("Before function call: n = %d, s = %s\n", n, s);
    function(&n, s);
    printf("After function call: n = %d, s = %s\n", n, s);
    */

    return 0;
}