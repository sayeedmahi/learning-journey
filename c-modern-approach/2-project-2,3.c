#include <stdio.h>
#define FRACTION (4.0f/3.0f)
#define PI 3.1416f

int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    float volume = FRACTION * PI * radius * radius * radius;

    printf("The volume of a sphere with radius %.0f meters is %.2f cubic meters.\n", radius, volume);

    return 0;
}

