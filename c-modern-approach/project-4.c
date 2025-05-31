#include <stdio.h>
#define TAX_PERC (5.0f / 100.0f)

int main()
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);

    float total = amount + amount * TAX_PERC;
    printf("With tax added: $%.2f\n", total);

    return 0;
}
