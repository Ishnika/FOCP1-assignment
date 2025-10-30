//cyclically rotate the array clockwise by one position,
#include<stdio.h>
int main()
{
    int num;
    printf("enter the length of the array:");
    scanf("%d",&num);
    int arr[num],i;
    for(i=0;i<num;i++)
    {
        printf("enter the %d value of the array:",i+1);
        scanf("%d",&arr[i]);
    }
    int arr_copy[num];
    for(i=0;i<num;i++)
    {
        arr_copy[i]=arr[i];
    }
    for(i=0;i<num;i++)
    {
        if(i==0)
        {
            arr[0]=arr_copy[num-1];
        }
        else{
            arr[i]=arr_copy[i-1];
        }
        printf("\n the %d value of the array in %d",i,arr[i]);
    }
    return 0;
}
