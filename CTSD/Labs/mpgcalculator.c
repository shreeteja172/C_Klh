#include <stdio.h>

int main() {
    float distance, fuelConsumption, mpg;
    printf("Enter the distance traveled (in miles): ");
    scanf("%f", &distance);
    printf("Enter the amount of fuel consumed (in gallons): ");
    scanf("%f", &fuelConsumption);
    mpg = (fuelConsumption != 0) ? (distance / fuelConsumption) : 0;
    if (fuelConsumption != 0) {
        printf("The fuel efficiency is %.2f miles per gallon (MPG).\n", mpg);
    } else {
        printf("Fuel consumption cannot be zero.\n");
    }
    return 0;
}
