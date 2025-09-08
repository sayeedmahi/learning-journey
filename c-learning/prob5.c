#include <stdio.h>
int main() {
 int n;
 scanf("%d", &n);
 int arr[10000];   // large array for big factorials
 int arr_len = 1;
 arr[0] = 1;

for (int i = 2; i <= n; i++) {
 int carry = 0;
 for (int j = 0; j < arr_len; j++) {
 int mul = i * arr[j] + carry;
 arr[j] = mul % 10;
 carry = mul / 10;
 }
 while (carry > 0) {
 arr[arr_len] = carry % 10;
 carry = carry/ 10;
 arr_len++;
 }
 }
 //reverse array number
 for (int i = arr_len - 1; i >= 0; i--) {
> printf("%d", arr[i]);
> }
 printf("\n");
 return 0;
}