#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", s);
    int count =0;
    for (int i=0; i<n-2; i++) {
        if (s[i]=='#' && s[i+2]=='#' && s[i+1]=='.') count++;
    }
    printf("%d", count);
    
}

