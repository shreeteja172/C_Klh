#include <stdio.h>

int main(){
    FILE *fptr = fopen("coding.txt", "w");

    if (fptr == NULL)
    {
        printf("Error couldn't open the file");
    }
    int str[100];
    
    fprintf(fptr, "This is an example of writing to a file in C.\n");

    printf("The file is overwritten.\n");

    printf("%s", str);

    fclose(fptr);

    return 0;
}