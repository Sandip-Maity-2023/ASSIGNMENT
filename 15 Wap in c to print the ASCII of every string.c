#include <stdio.h>

int main() {
    char str[100];

    printf("ENTER A STRING: ");
    gets(str);  //The gets() function in C is used to read a line from the standard input (usually the keyboard) and store it as a string.
    printf("ASCII values of characters in the string:\n");

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c: %d\n", str[i], str[i]);
    }

    return 0;
}
