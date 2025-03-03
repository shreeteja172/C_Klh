#include <stdio.h>

int main()
{
    float m, e, l, p, c;
    printf("enter maths marks\n");
    scanf("%f", &m);
    printf("enter english marks\n");
    scanf("%f", &e);
    printf("enter language marks\n");
    scanf("%f", &l);
    printf("enter physics marks\n");
    scanf("%f", &p);
    printf("enter chemistry marks\n");
    scanf("%f", &c);

    float tm = (m + e + l + p + c) / 5;

    if (tm <= 100 && tm > 90)
    {
        printf("your grade is A\n");
    }
    else if (tm <= 90 && tm > 80)
    {
        printf("your grade is B\n");
    }
    else if (tm <= 80 && tm > 70)
    {
        printf("your grade is C\n");
    }
    else if (tm <= 70 && tm > 60)
    {
        printf("your grade is D\n");
    }
    else if (tm <= 60 && tm > 50)
    {
        printf("your grade is E\n");
    }
    else
    {
        printf("you FAILED\n");
    }
    printf("Your average is %f",tm);

    return 0;
}
