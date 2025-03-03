#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int complement = ~num;  // Bitwise complement
    printf("Bitwise complement of %d is: %d\n", num, complement);
    
    return 0;
}
