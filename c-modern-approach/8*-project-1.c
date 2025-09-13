#include <stdio.h>
int main() {
    int digit, a[10] = {0}, b[10] = {0};
    long n;
    int repeated_digit = 0;
    printf("Enter a number: "); 
    scanf("%ld", &n);
    while (n>0) {
        digit = n%10;
        if (a[digit]==1) {
            b[digit]=1;
            repeated_digit=1;
        }
        a[digit]=1;
        n=n/10;
    }
if (repeated_digit==1) {
     printf("Repeated digit(s): ");
    for (int i=0; i<10; i++) {
        if (b[i]!=0) printf("%d ", i);
    }
    printf("\n");
}
    else
    printf("No repeated digits");}