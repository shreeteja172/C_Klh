#include <stdio.h>

int main()
{
    // your code goes here
    int num, rev = 0, rem, palnum;
    scanf("%d", &num);
    palnum = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (rev == palnum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}
