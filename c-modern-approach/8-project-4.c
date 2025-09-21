#include <stdio.h>
#define LEN(arr) ((int)(sizeof(arr)/sizeof(arr[0])))
int main () {
int a[10], i;
int N = LEN(a);
printf("Enter %d Numbers: ", N);
for (int i=0; i<N; i++) {
    scanf("%d", &a[i]);}
printf("In reverse order: ");
for (i=N-1; i>=0; i--) {
    printf("%d ", a[i]);}
    printf("\n");
}