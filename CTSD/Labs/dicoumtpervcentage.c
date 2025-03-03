#include <stdio.h>

int main() {
    float originalPrice, discountPercentage, discountedPrice;
    printf("Enter the original price (in rupees): ");
    scanf("%f", &originalPrice);
    printf("Enter the discount percentage: ");
    scanf("%f", &discountPercentage);
    discountedPrice = originalPrice - (originalPrice * (discountPercentage / 100));
    printf("The discounted price is %.2f.\n", discountedPrice);
    return 0;
}

