//FIND A PEAK ELEMENT(AN ELEMENT GREATER THAN BOTH THE NEIGHBOURING ELEMENTS)
#include<stdio.h>
int main()
{   
    //takinf the length of the elements from the user
    int num;
    printf("enter the length of the array:");
    scanf("%d",&num);
    int i, arr[num];
    //taking the values of the elements from the user 
    for(i=0;i<num;i++)
    {
        printf("enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    //traversing the array and checking is which all elemts are greater than its neighbouring elements 
    for(i=0;i<num;i++)
    {
        if(i==0)
        {
            if(arr[i]>arr[i+1])
            printf("%d is a peak element",arr[i]);
        }
        if (i==num-1)
        {
            if(arr[i]>arr[i-1])
            printf("%d is a peak element",arr[num-1]);
        }
        if(i!=0 && i!=num-1)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            printf("%d is a peak element\n",arr[i]);
        }
    }
    return 0;
}
