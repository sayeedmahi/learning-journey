#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[101], t[101];
    scanf("%d", &n);
    scanf("%s", s);
    scanf("%s", t);
    
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
