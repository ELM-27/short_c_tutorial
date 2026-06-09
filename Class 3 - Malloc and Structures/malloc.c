#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char * string_ptr;

    string_ptr = (char *) malloc(sizeof(char) * 21);

    /* 
    // string_ptr = "Allocated memory: 21"; causes an error
    strcpy(string_ptr, "Allocated memory: 21");

    printf("String stored at ptr: %s\n", string_ptr);

    /*
    string_ptr = (char *) realloc(string_ptr, sizeof(char) * 32);
    strcpy(string_ptr, "Allocated memory: 32 characters");

    printf("String stored at ptr: %s\n", string_ptr);

    */
    free(string_ptr);

    return 0;
}