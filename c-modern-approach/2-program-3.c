// Converting from Fahrenheit to Celsius

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main()
{
    float fahrenheit;
    printf("Enter fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    printf("Celsius equivalent: %.0f\n", (fahrenheit - FREEZING_PT) * SCALE_FACTOR);

    return 0;
}


// #include <stdio.h>
// int main ()
// {
//     float ferenheit, celcius;
//     printf("ferenheit temperature: ");
//     scanf("%f", &ferenheit);

//     celcius = (ferenheit - 32) * 5/9 ;
//     printf("celcius temperature: %.0f\n", celcius);
//     return 0;
// }