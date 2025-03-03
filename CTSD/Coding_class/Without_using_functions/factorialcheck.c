#include <stdio.h>

int main()
{
    int n, i = 1;
    long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Factorial of 0 = 1\n");
    }
    else if (n > 0)
    {
        while (i <= n)
        {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }
    else
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }

    return 0;
}
