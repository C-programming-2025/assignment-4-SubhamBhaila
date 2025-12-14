// Write a C program that uses a structure Point with members x and y, representing coordinates. 
// Write a function that takes two Point structures and returns the distance between them.
#include <stdio.h>
#include <math.h>

struct Point {
    float x, y;
};

float distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point a, b;
    printf("Enter coordinates of two points:\n");
    scanf("%f %f %f %f", &a.x, &a.y, &b.x, &b.y);

    printf("Distance = %.2f\n", distance(a, b));
    return 0;
}
