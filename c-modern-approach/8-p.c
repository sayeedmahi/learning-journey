#include <stdio.h>
#define SIZE ((int) sizeof(a) / sizeof(a[0]))
int main() {
    int a[]= {8,562,6567,87,97,34,[8]=29 };
    for (int i=0; i<SIZE;  i++) {
    a[i]=0;
    printf ("%d ", a[i]);}
}