//[2,2] IDENTITY MATRIX
#include <stdio.h>
int main () {
    int ident[2][2]= {[0][0]=1, [1][1]=1};
    int row, col;
    for (int row=0; row<2; row++) {
        for (int col=0; col<2; col++) {
            printf("%d ", ident[row][col]);
        }
        printf("\n");
    }
}