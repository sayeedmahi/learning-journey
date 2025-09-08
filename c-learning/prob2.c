#include <stdio.h>
#include <stdlib.h>
int main() {
int t, n, a[n];
scanf ("%d", &t);
while (t--) {
    scanf("%d", &n);
for (int i=0; i<n; i++) {
scanf("%d", &a[i]);}
if (n%2!=0)
printf("-1\n");
else {
    int odd=0, even=0;
    for (int i=0; i<n; i++) {
        if (a[i]%2==0)
        even++;
        else
        odd++;
}
printf("%d\n", (abs(even-odd))/2);
}
}}