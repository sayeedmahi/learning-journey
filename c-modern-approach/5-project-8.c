#include <stdio.h>
#include <stdlib.h>

int main() {
    // Departure and arrival times in minutes since midnight
    int dep[] = {480, 583, 679, 767, 840, 945, 1140, 1305};   // 8:00, 9:43, ...
    int arr[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};  // 10:16, 11:52, ...

    int n = sizeof(dep)/sizeof(dep[0]);
    int h, m;
    printf("Enter a 24-hour time (HH MM): ");
    scanf("%d %d", &h, &m);
    int input = h*60 + m;

    // Find closest flight
    int closest = 0;
    int min_diff = abs(dep[0] - input);
    for (int i = 1; i < n; i++) {
        int diff = abs(dep[i] - input);
        if (diff < min_diff) {
            min_diff = diff;
            closest = i;
        }
    }

    // Print in 12-hour format
    int dep_h = dep[closest]/60;
    int dep_m = dep[closest]%60;
    char dep_suf = (dep[closest] < 720) ? 'a' : 'p';
    if (dep_h == 0) dep_h = 12;
    else if (dep_h > 12) dep_h -= 12;

    int arr_h = arr[closest]/60;
    int arr_m = arr[closest]%60;
    char arr_suf = (arr[closest] < 720) ? 'a' : 'p';
    if (arr_h == 0) arr_h = 12;
    else if (arr_h > 12) arr_h -= 12;

    printf("Closest departure time is %d:%02d %c.m., arriving at %d:%02d %c.m.\n",
           dep_h, dep_m, dep_suf, arr_h, arr_m, arr_suf);

    return 0;
}
