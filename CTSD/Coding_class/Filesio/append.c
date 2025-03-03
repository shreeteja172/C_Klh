#include <stdio.h>

int main(){
    FILE *fptr = fopen("coding.txt", "a");

    if (fptr == NULL)
    {
        printf("Error couldn't open the file");
    }
    int str[100];
    
    fprintf(fptr, "Overwritten didn't happen so append\n");

    printf("%s", str);

    fclose(fptr);

    return 0;
}