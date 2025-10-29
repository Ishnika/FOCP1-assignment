//find the first occourance of 99 and return the position 
#include<stdio.h>
int main()
{
    int i,arr[10];
    for (i=0;i<10;i++)
    {
        printf("enter the %dst value of the array:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]==99)
        {
            printf("the first occourance of 99 is %d",i+1);
            break;
        }
    }
    return 0;
    
}
