#include <stdio.h>
#include <stdlib.h>
int comp(const void*a, const void*b) {
    return (*(int*)a - *(int*)b);
}

int main () {
    int n;
    scanf("%d", &n);
    int arr[]= {0};
    for (int i=0; i<n; i++) {
    scanf("%d", &arr[i]); }
    qsort(arr, n, sizeof(int), comp);
    
    int largest= 0;
    for (int i= n-1; i>=0; i--) {
        largest= largest*10+arr[i];
    }
    
    int smallest= 0;
    if (arr[0]==0) {
        for (int i=1; i<n; i++) {
            if (arr[i]!=0) {
                int temp= arr[0];
                arr[0]= arr[i];
                arr[i]= temp;
                break; } } }
    for (int i=0; i<n; i++) {
        smallest=smallest*10+ arr[i];
    }
    printf("%d\n", (largest-smallest));
}

