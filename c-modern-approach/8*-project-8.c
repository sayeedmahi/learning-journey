#include <stdio.h>

int main () {
    int a[5][5];
    int row, col;
    int rowsa[5];
    int colsa[5] = {0}; 
    int colmax[5], colmin[5];

for (int i=0; i<5; i++) {
    colmax[i]= -1;
    colmin[i]= 101; //assuming marks are from 0-100, if not we may use INT_MIN and INT_MAX from limit.h header file
}

    for (row=0; row<5; row++) {
        int rowsum = 0;
        printf("Enter student %d grades : ", row+1);
        for (col=0; col<5; col++) {
            scanf("%d", &a[row][col]);   
            rowsum = rowsum + a[row][col]; 
            colsa[col] = colsa[col] + a[row][col];
            if (colmax[col]<a[row][col]) colmax[col]=a[row][col];
            if (colmin[col]>a[row][col]) colmin[col]=a[row][col];
        }
        rowsa[row] = rowsum;  
    }

    for (int j=0; j<5; j++) {
    printf("Student %d Total score : %d, Average score : %f\n", j+1, rowsa[j], ((float)(rowsa[j])/5));
    }


for (int i=0; i<5; i++) {
        printf("Quiz %d Average score: %f, Highest score: %d, Lowest score: %d\n", i+1, ((float)(colsa[i])/5), colmax[i], colmin[i]);
    }
    return 0;
}
