#include <stdio.h>
int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a==0 && b==0) printf("1");
    else if (a==b) printf("0");
    else printf("%d", a);
}