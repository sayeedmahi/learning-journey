#include <stdio.h>
#include <stdlib.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) { 
    int a, x, y;
    scanf("%d %d %d", &a, &x, &y);
    int numarr[] = {0};
    int len = abs (x-y) +1;
    if (x<a && a<y) {
        numarr[0] = x;
        numarr[len-1] = y;
        for (int i=1; i<(len-1); i++) {
            numarr[i] = numarr[i-1]+1;    }
}
    else if (y<a && a<x) {
        numarr[0] = y;
        numarr[len-1] = x;
        for (int i=1; i<(len-1); i++) {
            numarr[i] = numarr[i-1]+1;    }
        }
    if ((len%2!=0) && (numarr[(len-1)/2]==a)) printf("NO\n");
    else if ((len%2==0) && (numarr[len/2]==a || numarr[(len/2)-1]==a)) printf("NO\n"); 
    else printf("YES\n");
}
}
