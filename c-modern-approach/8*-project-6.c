#include <stdio.h>
#include <string.h>
#include <ctype.h>
    #define MAX_LEN 10000
int main () {

    char arr[MAX_LEN];
    printf("Enter message: ");
    fgets(arr, sizeof(arr), stdin);


    printf("In B1FF-speak: ");
    for (int i=0; arr[i] != '\0'; i++) {
        char ch=toupper(arr[i]);
        if (ch=='A') putchar('4');
        else if(ch=='B') putchar('8');
        else if(ch=='E') putchar('3');
        else if (ch=='I') putchar('1');
        else if (ch=='O') putchar('0');
        else if (ch=='S') putchar('5');
        else putchar(ch);
    }
    for (int i=0; i<10; i++) {
        printf("!");
    }

}
