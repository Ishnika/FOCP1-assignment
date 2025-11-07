//hcf of two numbers
#include<stdio.h>
int main()
{
    int num_1;
    printf("enter the first number:");
    scanf("%d",&num_1);
    int num_2;
    printf("enter the second number:");
    scanf("%d",&num_2);
    int min,i,hcf;
    if(num_1<num_2)
    min=num_1;
    else 
    min=num_2;
    for(i=0;i<=min;i++)
    {
        if(num_1%i==0 &&num_2%i==0)
        hcf=i;
    }
    printf("the hcf of the two numbers is:%d",hcf);
    return 0;
}
