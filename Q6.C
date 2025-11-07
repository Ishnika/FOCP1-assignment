//that allows the user to convert between Binary and Decimal systems based on their choice
#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    printf("choose :1-TO CONVERT DECIMAL TO BINARY\n 2- TO CONVERT BINARY TO DECIMAL\nenter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : {
            int num_1;
            printf("enter the decimal number:");
            scanf("%d",&num_1);
            int binary_num=0;
            int place=1;
            while(num_1>0)
            {
                int rem=num_1%2;
                binary_num=binary_num+place*rem;
                num_1=num_1/2;
                place=place*10;
            }
            printf("the binary form of the number is:%d",binary_num);
            break;
        }
        case 2:{
            int num_2;
            printf("enter the binary form of the number:");
            scanf("%d",&num_2);
            int count=0,dec_num=0;
            while(num_2>0)
            {
                int rem=num_2%10;
                dec_num=dec_num+rem*pow(2,count);
                num_2=num_2/10;
                count=count+1;
            }
            printf("the decimal number is %d",dec_num);
            break;
        }
        default : {
            printf("the choice enter is incorrect");
            break;
        }
    }
    return 0;
}
