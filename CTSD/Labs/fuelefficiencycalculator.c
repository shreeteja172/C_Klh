#include<stdio.h>

int main(){
    float d, f;
    printf("enter distance\n");
    scanf("%f",&d);
    printf("enter fuel consumed\n");
    scanf("%f",&f);
    float mpg= d/f;
    printf("fuel efficiency is %f",mpg);
    return 0;
}