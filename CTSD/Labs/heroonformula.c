#include <stdio.h>
#include <math.h> 

int main() {
    double side1, side2, side3, s, area;

    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    
    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);
    
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    
    printf("The area of the triangle is: %.2lf\n", area);
    
    return 0;
}

