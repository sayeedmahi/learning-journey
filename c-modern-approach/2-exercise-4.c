// Write a program that declares several int and float variables—without initializing them—
// and then prints their values. Is there any pattern to the values? (Usually there isn’t.)

#include <stdio.h>

int main() {
    int a, b, c;
    float x, y, z;

    printf("Uninitialized int values: %d %d %d\n", a, b, c);
    printf("Uninitialized float values: %f %f %f\n", x, y, z);

    return 0;
}
