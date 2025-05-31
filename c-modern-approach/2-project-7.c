#include <stdio.h>

int main()
{
    int amount;
    printf("Enter dollar amount: ");
    scanf("%d", &amount);

    int twenties = amount / 20;
    int remaining_amount = amount % 20;

    int tens = remaining_amount / 10;
    int remaining_amount2 = remaining_amount % 10;

    int fives = remaining_amount2 / 5;
    int final_amount = remaining_amount2 % 5;

    int ones = final_amount;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int amount;
//     printf("Enter dollar amount: ");
//     scanf("%d", &amount);

//     printf("$20 bills: %d\n", amount /20);

//     int remaining_amount = amount - (20 * (amount /20));
//     printf("$10 bills: %d\n", remaining_amount /10);    

//     int remaining_amount2 = remaining_amount - (10 * (remaining_amount /10) );
//     printf("$5 bills: %d\n", remaining_amount2 /5);       

//     int final_amount = remaining_amount2 - (5 * (remaining_amount2 /5));
//     printf("$1 bills: %d\n", final_amount /1);     
// }