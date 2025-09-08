//IDENTITY MATRIX USING 2D ARRAY
#include <stdio.h>
#define N 10
int main () {
int arr[N][N];
int row, col;
for (row=0; row<N; row++) {
    for (col=0; col<N; col++) {
        if (row==col)
        arr[row][col] =1;
        else 
        arr[row][col]=0;
    }
}
for (row=0; row<N; row++) {
    
    for (col=0; col<N; col++) {
    printf("%d ", arr[row][col]); }
    printf("\n");
    }
}