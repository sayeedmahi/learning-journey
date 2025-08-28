#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {
    int chr;
    char str[200];
    printf("Enter the characters: ");

    for (int i=0; (chr!='\n'); i++) {
        chr=getchar();
        str[i]=chr;
    }
    printf ("Entered string is: %s", str);


}