//to check if the given number is an armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int num ,count=0;
    printf("enter the number to be checked:");
    scanf("%d",&num);
    int num_copy=num, num_copy_2=num;
    //to count the number of digits in the number 
    while(num>0)
    {
        num=num/10;
        count++;
    }
    //to check is it is an armstrong number or not 
    int rem,flag=0;
    while(num_copy>0)
    {
        rem=num_copy%10;
        flag=flag+pow(rem,count);
        num_copy=num_copy/10;
    }
    if (num_copy_2==flag)
    {
        printf("%d is an armstrong number",num_copy_2);
    }
    else{
        printf("%d is not an armstrong number",num_copy_2);
    }
    return 0;
}
