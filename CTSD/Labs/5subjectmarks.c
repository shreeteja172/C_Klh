# include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float per;
    printf("Enter five subject marks:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    per=(s1+s2+s3+s4+s5)/5;
    printf("Percentage=%f\n",per);
    if(per>=90)
    {
    printf("grade A");
    }
    else if (per>=80)
    {
    printf("Grade B");
    }
    else if(per>=70)
    {
    printf("Grade C");
    }
    else if (per>=60)
    {
    printf("Grade D");
    }
    return 0;
}
