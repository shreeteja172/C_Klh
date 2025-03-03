#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of an array in numbers: ");

    scanf("%d", &n);

    int arr[n];

    printf("Enter %d values:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}