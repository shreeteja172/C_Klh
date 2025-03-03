#include<stdio.h>

int main(){
    float l,b,h;
    printf("enter length\n");
    scanf("%f",&l);
    printf("enter breadth\n");
    scanf("%f",&b);
    printf("enter height\n");
    scanf("%f",&h);
    float a=2*((l*b)+(b*h)+(l*h));
    printf("the surface area of the cuboid is %f",a);
    return 0;
}