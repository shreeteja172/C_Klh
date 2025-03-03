#include <stdio.h>

int main()
{
    int testc, n;

    scanf("%d", &testc);

    while (testc--)
    {
        scanf("%d", &n);

        int num_even = 0;
        int num_odd = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    num_even++;
                }
                else
                {
                    num_odd++;
                }
            }
        }
        if (num_even == num_odd)
        {
            printf("0\n");
        }
        else if (num_even > num_odd)
        {
            printf("1\n");
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}