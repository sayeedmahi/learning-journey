#include <stdio.h>

int main () {
    int a[5][5];
    int row, col;
    int rowsa[5];
    int colsa[5] = {0}; 
    for (row=0; row<5; row++) {
        int rowsum = 0;
        printf("Enter row %d: ", row+1);
        for (col=0; col<5; col++) {
            scanf("%d", &a[row][col]);   
            rowsum = rowsum + a[row][col]; 
            colsa[col] = colsa[col] + a[row][col];
        }
        rowsa[row] = rowsum;  
    }
    printf("Row totals: ");
    for (int i=0; i<5; i++) {
        printf("%d ", rowsa[i]);
    }
    printf("\n");

    printf("Column totals: ");
    for (int i=0; i<5; i++) {
        printf("%d ", colsa[i]);
    }
    printf("\n");


    return 0;
}
