//traverse an array and store the value of odd and even values in two differetn arrays 
#include<stdio.h>
int main()
{   
    //taking the length of the array from the user and initialising variables 
    int num;
    printf("enter the number of elements in the array:");
    scanf("%d",&num);
    int i,arr[num],even_array[num],odd_array[num];
    int even_in=0,odd_in=0 ;
    //putting the values in the array
    for(i=0;i<num;i++)
    {
        printf("enter the value of the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    //reading the values from the array 
    for(i=0;i<num;i++)
    {
        if(arr[i]%2==0)//if the values are even the loop runs and the values is added to the even_array
        {
            even_array[even_in]=arr[i];
            even_in+=1;//this is used to increase the value of the index so that the next element is inserted on the next index
        }
        else//if the values are odd this loop runs and adds the value to odd_array
        {
            odd_array[odd_in]=arr[i];
            odd_in+=1;//index value is increased 
        }
    }
    //reading both the odd and even array and printing it 
    printf("the elements of even_array are:");
    for(i=0;i<even_in;i++)
    {
        printf("%d,",even_array[i]);
    }
    printf("\nthe elements of odd_array are:");
    for(i=0;i<odd_in;i++)
    {
        printf("%d,",odd_array[i]);
    }
    return 0;
}
