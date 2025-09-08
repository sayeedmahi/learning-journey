// #include <stdio.h>
// #define N 10
// int main () {
// int a[N], i;
// printf("Enter %d Numbers: ", N);
// for (int i=0; i<N; i++) {
//     scanf("%d", &a[i]);}
// printf("In reverse order: ");
// for (i=N-1; i>=0; i--) {
//     printf("%d ", a[i]);}
//     printf("\n");
// }

// Reverses a series of numbers using a variable-length array - C99 only // 
#include <stdio.h>
int main() {
int i, n;
printf("How many numbers do you want to reverse? ");
scanf("%d", &n);
int a[n];
printf("Enter %d numbers: ", n);
for (i=0; i<n; i++)
scanf("%d", &a[i]);
for (i=n-1; i>0; i--)
printf("%d ", a[i]);
printf("\n");
}
