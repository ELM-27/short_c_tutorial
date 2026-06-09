#include <stdio.h>
#include <stdlib.h>

struct Student {
    char * student_name;
    int studentID;
};

int main(int argc, char * argv[]) {
    struct Student student_1;
    struct Student * student_2;

    student_2 = (struct Student *) malloc(sizeof(struct Student));

    /*
    student_1.student_name = "Alice";
    student_1.studentID = 1001;

    printf("Student 1 info: %s %d\n", student_1.student_name, student_1.studentID);

    /*
    student_2->student_name = "Bob";
    student_2->studentID = 1002;

    printf("Student 2 info: %s %d\n", student_2->student_name, student_2->studentID);
    */

    free(student_2);

    return 0;
}