#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char letter;
    scanf("%s", str);
    
    scanf(" %c", &letter);
    
    int inum = -1;
    
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == letter) {
            inum = i;
            break;
        }
    }
    
    if (inum != -1) {
        printf("%d\n", inum);
    } else {
        printf("-1\n");
    }                                                                                                                                                                                                                                                                                                                 
    
    return 0;
}
