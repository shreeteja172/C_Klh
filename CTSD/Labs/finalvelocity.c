#include <stdio.h> 
 
int main() { 
    double initialVelocity, acceleration, time, finalVelocity; 
    printf("Enter the initial velocity (in meters per second): "); 
    scanf("%lf", &initialVelocity); 
    printf("Enter the acceleration (in meters per second squared): "); 
    scanf("%lf", &acceleration); 
    printf("Enter the time (in seconds): "); 
    scanf("%lf", &time); 
    finalVelocity = initialVelocity + (acceleration * time); 
    printf("The final velocity is: %.2f meters per second\n", finalVelocity); 
    return 0; 
}