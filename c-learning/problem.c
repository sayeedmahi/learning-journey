#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int max = -1000000;
    int min = 1000000;
    long long sum = 0;

    while (n--) {
        scanf("%d", &x);

        if (min >= x) {
            min = x;
        }
        if (max <= x) {
            max = x;
        }
        sum = sum + x;
    }

    printf("%d %d %lld", min, max, sum);

    return 0;
}
