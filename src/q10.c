// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.
#include <stdio.h>

struct Car {
    char model[50];
    int year;
    float mileage;
};

int main() {
    struct Car c[3];
    int i, min = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter model, year, mileage:\n");
        scanf("%s %d %f", c[i].model, &c[i].year, &c[i].mileage);
        if (c[i].mileage < c[min].mileage)
            min = i;
    }

    printf("Lowest mileage car: %s %.2f\n", c[min].model, c[min].mileage);
    return 0;
}
