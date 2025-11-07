/*to swap two numbers using four different methods, demonstrating diverse approaches such as 
arithmetic, bitwise XOR, pointer manipulation, and temporary variable*/
#include<stdio.h>
int main()
{
    int num_1;
    printf("enter the first number:");
    scanf("%d",&num_1);
    int num_2;
    printf("enter the second number:");
    scanf("%d",&num_2);
    int choice;
    printf("choose to swap the numbers:\n 1-ARITHEMATIC\n 2-BITWISE XOR\n 3-POINTER MANIPULATION\n 4-TEMPORARY VARIABLES\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: {
        num_1=num_1+num_2;
            num_2=num_1-num_2;
            num_1=num_1-num_2;
            printf("now the first number is %d and the second number is %d",num_1,num_2);
            break ;
        }
        case 2:{
            num_1=num_1^num_2;
            num_2=num_2^num_1;
            num_1=num_1^num_2;
            printf("now the first number is %d and the second number is %d",num_1,num_2);
            break;
        }
        case 3: {
            int *p=&num_1,*q=&num_2;
            int count=*p;
            *p=*q;
            *q=count;
            printf("now the first number is %d and the second number is %d",num_1,num_2);
            break ;
        }
        case 4: {
            int count;
            count=num_1;
            num_1=num_2;
            num_2=count;
            printf("now the first number is %d and the second number is %d",num_1,num_2);
            break ;
        }
        default:{
            printf("the choice made is wrong");
            break;
        }
    }
    return 0;
}
