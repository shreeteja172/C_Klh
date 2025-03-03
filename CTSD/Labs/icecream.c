#include <stdio.h>
int main(){
    float i;
    float Total_used;
    float remainingic;
    printf("enter the initial quantity of ice cream (in Litres) : ");
    scanf("%f", &i);
    Total_used = 80 * 0.25;
    remainingic = i - Total_used;
    printf("The remaining ice cream after selling 80 cones is: %.2f liters\n", remainingic);
    return 0;
    }
