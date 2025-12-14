// Write a C program that stores student records (name, roll number, and marks) into a 
// file and then reads and displays all stored records.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int i;

    fp = fopen("students.txt", "w");
    for (i = 0; i < 3; i++) {
        printf("Enter name, roll, marks:\n");
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    printf("Student Records:\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF)
        printf("%s %d %.2f\n", s.name, s.roll, s.marks);

    fclose(fp);
    return 0;
}
