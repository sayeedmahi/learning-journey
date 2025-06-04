#include <stdio.h>

int main() {
    float x;
    printf("Enter value for x: ");
    scanf("%f", &x);

    float poly = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
    printf("Value of the polynomial: %.2f\n", poly);

    float poly_horner = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Polynomial value (Horner's Rule): %.2f\n", poly_horner);

    if (poly == poly_horner) 
        printf("They are exactly equal.\n");
    else 
        printf("They are NOT equal.\n");

    //float epsilon = 0.0001f;  // small tolerance to account for floating-point precision
    // if (fabs(poly - poly_horner) < epsilon)
    //     printf("They are approximately equal.\n");
    // else
    //     printf("They are NOT equal.\n");


    return 0;
}
