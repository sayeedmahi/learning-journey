//USE OF SIZEOF AND DESIGNATOR IN ARRAY
#include <stdio.h>
#define SIZE ((int) sizeof(a) / sizeof(a[0]))

int main() {
    int a[]= {8,562,6567,87,97,34,[8]=29 };
    for (int i=0; i<SIZE;  i++) {
    a[i]=0;
    printf ("%d ", a[i]);}

}
/*It seems like a designated initializer could end up initializing an array element
more than once. Consider the following array declaration:
int a[] = {4, 9, 1, 8, [0] = 5, 7};
The net effect is the same as if we had written
int a[] = {5, 7, 1, 8};
Thus, the length of this array is four.
*/