//find who all andhow many scored 99 
#include<stdio.h>
int main()
{
    int i,arr[10],count=0;
    for(i=0;i<10;i++)
    {
        printf("enter the value of %d element of the array:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("the positions having occourances of 99 are:");
    for(i=0;i<10;i++)
    {
        if(arr[i]==99)
        {
            printf("%d,",i+1);
            count+=1;
            
        }
    }
    printf("\n%d",count);
    return 0;
}
