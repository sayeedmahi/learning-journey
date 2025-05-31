#include <stdio.h>

int main()
{
    float loan, interest, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly_interest = interest/12/100; 
    float month_1 = loan + loan * monthly_interest - payment;
    float month_2 = month_1 + month_1 * monthly_interest - payment;
    float month_3 = month_2 + month_2 * monthly_interest - payment;

    printf("Balance remaining after first payment: $%.2f\n", month_1);
    printf("Balance remaining after second payment: $%.2f\n", month_2);
    printf("Balance remaining after third payment: $%.2f\n", month_3);

}

// using loop:
// #include <stdio.h>

// int main()
// {
//     float loan, interest_rate, payment;
//     printf("Enter amount of loan: ");
//     scanf("%f", &loan);
//     printf("Enter interest rate: ");
//     scanf("%f", &interest_rate);
//     printf("Enter monthly payment: ");
//     scanf("%f", &payment);

//     float monthly_interest = interest_rate / 12 / 100;
//     float balance = loan;

//     for (int i = 1; i <= 3; i++) {
//         balance = balance + balance * monthly_interest - payment;
//         printf("Balance remaining after month %d: $%.2f\n", i, balance);
//     }

//     return 0;
// }
