#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
    scanf ("%lld", &n);
    if (n<=1)
    printf("NO\n");
    else  {
        int count =0;
        for (long long i=1; i<=n; i++) {
            if (n%i==0)
            count++;
        }
        if (count>2)
        printf("NO\n");
        else
        printf("YES\n");
    }
    }
}