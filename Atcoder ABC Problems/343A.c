#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    if (sum != 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }
    return 0;
}
