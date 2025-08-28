#include<stdio.h> 
int main() {
    int t, n;
    scanf ("%d", &t);
    while(t--) {
        scanf("%d", &n);
    if (n>10)
    printf("10 %d", n-10);
    else if (n<=10)
    printf("0 %d", n);    
    }

}