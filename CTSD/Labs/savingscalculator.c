#include <stdio.h>

int main()
{
    float i, ts;
    printf("enter income\n");
    scanf("%f", &i);
    printf("enter total expenses\n");
    scanf("%f", &ts);
    float s = i - ts;
    printf("the total savings is %f", s);
    return 0;
}