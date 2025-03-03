#include <stdio.h>
int main(){
    float t, d;
    printf("enter time\n");
    scanf("%f",&t);
    printf("enter distance\n");
    scanf("%f",&d);
    float s = d/t ;
    printf("the speed of the object is %f ",s);
    return 0;
}