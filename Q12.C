//FIND MAXIMUM AND MINIMUM SCORES 
#include<stdio.h>
int main()
{   
    //taking the length of the array from the user 
    int num,i;
    printf("enter the length of the array:");
    scanf("%d",&num);
    int arr[num];
    //taking the values of the array
    for(i=0;i<num;i++)
    {
        printf("enter the value of %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(i=0;i<num;i++)
    {
        if(max<arr[i])//for maximum value 
        {
            max=arr[i];
        }
        if(min>arr[i])//for minimum value 
        {
            min=arr[i];
        }
    }
    //printing maximum and minimum values 
    printf("the maximum value is:%d\n the minimum value is:%d",max,min);
    return 0;
}
