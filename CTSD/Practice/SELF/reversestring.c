#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "hello";
    char str2[50];
    char str3[100];
    // scanf("%s",str2);
    printf("The reveresed string : \n");
    puts(strrev(str1));
    strcpy(str2,strrev(str1));
    strcat(str3,str2);
    puts(str3);
    return 0;
}

