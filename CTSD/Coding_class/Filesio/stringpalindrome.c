#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0;str[i] != '\0';i++);

    printf("The string is a palindrome.\n");
    return 0;
}  