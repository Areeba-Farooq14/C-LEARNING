#include <stdio.h>

typedef union Student {
    int age;
    float marks;
    char grade;
} Student;

int main() {
    Student s;

    s.age = 18;
    printf("Age: %d\n", s.age);

    s.marks = 85.5;
    printf("Marks: %.2f\n", s.marks);

    s.grade = 'A';
    printf("Grade: %c\n", s.grade);

    return 0;
}