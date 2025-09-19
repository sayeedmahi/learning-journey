#include <stdio.h>
int main () {
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    if (a!=b) printf("A");
    else if (a==c) printf("B");
    else printf("C");
}