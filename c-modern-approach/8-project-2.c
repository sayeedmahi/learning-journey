#include <stdio.h>

int main() {
    int digit, b[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        b[digit]++;
        n /= 10;
    }

    printf("Digit:\t\t");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
    }
    printf("\nOccurrences:\t");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", b[i]);
    }
    printf("\n");

    return 0;
}