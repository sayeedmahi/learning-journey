#include <stdio.h>
#include <stdbool.h> 
int main () {
    bool weekend[7] = { true, false, false, false, false, false, true };
    for (int i = 0; i < 7; i++) {
        printf("%d ", weekend[i]);
    }
    return 0;
}

/* Using designated initializers:
    bool weekend[7] = { [0] = true, [6] = true };
 */