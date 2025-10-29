//COUNT THE NUMBER OF PRIME NUMBER IN AN ARRAY 
#include<stdio.h>
int main()
{ 
    //taking the length of the array from the user
    int num,i,j,count=0;
    printf("enter the length of the array:");
    scanf("%d",&num);
    int arr[num];
    //itaking the values of the array from the user 
    for(i=0;i<num;i++)
    {
        printf("enter the element no. %d:",i+1);
        scanf("%d",&arr[i]);
    }
    //checking for the prime numbers taking a counter value if it changes from 0 to 1 the number is not prime 
    for(i=0;i<num;i++)
    {
        int count=0;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                count=1;
                break;
            }
            else
            continue;
            
        }
        if(count==0)
    printf("\n %d is a prime number",arr[i]);
    }
    return 0;
    
}
