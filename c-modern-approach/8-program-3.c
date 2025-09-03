#include <stdio.h>
#include <math.h>
int main() {
    int interest, year, i, j;
    double amount;
    printf("Enter interest rate: ");
    scanf("%d", &interest);
    printf("Enter number of years: ");
    scanf("%d", &year);

    printf("Years");
    for (i=0; i<5; i++) {
        printf("%6d%%", (interest+i));
    }
    printf("\n");
    
    for (j=1; j<=year; j++) {
        printf("%3d    ", j);
        for (i=0; i<5; i++) {
            amount = 100 * pow(1+ (interest+i)/100.0, j);
            printf("%7.2f", amount);
        }
        printf("\n");
    }
    
    

}