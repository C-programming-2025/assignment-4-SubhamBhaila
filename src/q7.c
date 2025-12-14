// Write a C program that defines a structure Employee with members: name, employee ID, and salary. 
// Take input for 5 employees and display the details of the employee with the highest salary.
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[5];
    int i, max = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter name, id, salary:\n");
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
        if (e[i].salary > e[max].salary)
            max = i;
    }

    printf("Highest Salary Employee:\n");
    printf("%s %d %.2f\n", e[max].name, e[max].id, e[max].salary);
    return 0;
}
