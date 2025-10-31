#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int unsorted = 0;
        for (int i=0; i<n-1; i++) {
            if (a[i]>a[i+1]) {
                unsorted = 1;
                break;
            }
        }
        if(unsorted) printf ("0\n");
        else {
            int mindiff = a[1]-a[0];
            for (int i=1; i<n-1; i++) {
            if ((a[i+1]-a[i])<mindiff) {
                mindiff= a[i+1]-a[i];
            }
        }
        printf("%d\n", (mindiff/2)+1);
        }
    }
}