#include <stdio.h>

int main() {
    float length, width, height, surfaceArea;

    printf("Enter the length of the room: ");
    scanf("%f", &length);

    printf("Enter the width of the room: ");
    scanf("%f", &width);

    printf("Enter the height of the room: ");
    scanf("%f", &height);

    surfaceArea = 2 * (length * width + length * height + width * height);

    printf("The surface area to be painted is: %.2f square units\n", surfaceArea);

    return 0;
}

