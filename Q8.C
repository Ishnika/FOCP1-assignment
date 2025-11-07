//to generate the Fibonacci series up to ‘n’ terms
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of terms in series:");
    scanf("%d",&n);
    int i,flag_1,flag_2,flag_3; 
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            flag_1=0;
            printf("%d,",flag_1);
        }
        else if(i==1)
        {
            flag_2=1;
            printf("%d,",flag_2);
        }
        else
        {
            flag_3=flag_1+flag_2;
            flag_1=flag_2;
            flag_2=flag_3;
            printf("%d,",flag_3);
        }
    }
    return 0;
}
