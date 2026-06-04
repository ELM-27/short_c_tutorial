#include <stdio.h>

int main(int argc, char *argv[]) {
    int user_input;
    int i;
    // char * tempString;
    char tempString[100];
    int int_list[5];

    
    printf("While true loop in C:\n");
    while(1) {
        printf("Enter a number: ");
        scanf("%d", &user_input);

        if (user_input == 0) {
            printf("Exiting loop.\n");
            break;
        }

        printf("Input: %d\n", user_input);
    }

    
    user_input = -1;

    printf("Conditional while loop in C:\n");
    while(user_input != 0) {
        printf("Enter a number: ");
        scanf("%d", &user_input);

        printf("Input: %d\n", user_input);
    }
    printf("Exiting loop.\n");

    
    printf("For loop in C:\n");
    for(i = 0; i < 5; i++) {
        printf("i: %d\n", i);
    }

    
    printf("Infinite for loop in C:\n");
    for(;;) {
        printf("Enter a number: ");
        scanf("%d", &user_input);

        if (user_input == 0) {
            break;
        }

        printf("Input: %d\n", user_input);
    }

    for(i = 0; i < 46; i++) {
        tempString[i] = "Sentence with spaces.\n Sentence past newline."[i]; 
    }
    i = 0;

    printf("Forms of if statements in C:\n");
    while(1) {
        if (tempString[i] == '\n') {
            break;
        } else if (tempString[i] == ' ') {
            tempString[i] = '_';
        } else {
            i++;
            continue;
        }
    }
    
    printf("%s\n", tempString);

    return 0;
}
