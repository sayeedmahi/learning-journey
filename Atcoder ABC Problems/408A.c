#include <stdio.h>
#include <string.h>
int main() {
    int n, s;
    int t[101];
    scanf("%d %d", &n, &s);
    for (int i=0; i<n; i++) {
        scanf("%d", &t[i]);
    }
    if (t[0]>(s+0.5)) {
    printf("No\n");
    return 0; }
    else {
    int diff;
    int count=0;
    for (int i=1; i<n; i++) {
        diff= t[i] - t[i-1];
        if (diff> (s+0.5)) count++;
    }
    if (count>=1) printf("No\n");
    else printf("Yes\n"); }
}


// #include <stdio.h>
// #include <string.h>
// int main() {
    
// }