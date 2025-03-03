#include <stdio.h>
#include <ctype.h>
void sumofdigits(char arr[]){
    int sum = 0;
    for(int i =0 ; arr[i]!='\0';i++){
        if (isdigit(arr[i])){
            sum += arr[i] - '\0';
        }
    }
    return sum;
}


int main(){
    int t;
    scanf("%d",&t);
    char str[101]; 
    getchar();

    while(t--){
        printf("Enter the number of test cases: ");
        // printf("Enter the string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0'; 

        int digitSum = sumOfdigits(str);
        printf("%d\n", digitSum);
    }    
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar(); 


    while (t--) {
        printf("Enter the string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0'; 

        int digitSum = sumofdigits(str); 
        printf("Sum of digits: %d\n", digitSum);
    }    
    return 0;
}
