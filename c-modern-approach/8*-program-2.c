// #include <stdio.h>
// int main() {
    
//     int digit, a[10]= {0};
//     long n;
//     printf("Enter a number: ");
//     scanf("%ld", &n);
//     while (n>0) {
//         digit=n%10;
//         if (a[digit]) {
//             printf("Repeated digit\n");
//             return 0;
//         }
//         a[digit]=1;
//         n=n/10;}
//         printf("No repeated digit\n");
//         return 0;

// }
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int digit; 
    bool a[10]= {false};
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n>0) {
        digit=n%10;
        if (a[digit]) {
            break;
        }
        a[digit]=true;
        n=n/10;}
        if (n>0)
        printf("Repeated digit\n");
        else
        printf("No repeated digit\n");
        return 0;

}