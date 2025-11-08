//insert an element at the front, middle, or end of an array
#include<stdio.h>
int main()
{
    //taking the inputs from the user 
    int num;
    printf("\nenter the number of elements in the array:");
    scanf("%d",&num);
    int i,arr[num+1];
    for(i=0;i<num;i++)
    {
        printf("enter the %d value:",i+1);
        scanf("%d",&arr[i]);
    }
    //printing the original array before insertion 
     printf("\nTHE ORIGINAL ARRAY IS :\n");
    for(i=0;i<num;i++)
    {
        printf("%d,",arr[i]);
    }
    int choice;
    printf("\nchoose 1.TO ADD IN FRONT\n 2. TO ADD IN MIDDLE \n 3. TO ADD AT THE END\n enter your choice:");
    scanf("%d",&choice);
    //specifyig the positins 
    int pos,flag=1;
    switch(choice)
    {
        case 1: {pos=0;
            break;}
        case 2 : {pos=num/2;
            break;}
        case 3 :{pos=num;
            break;}
        default:{printf("\nyou made a wrong choice\n");
            flag=0;
            break;}
    }
    if(flag)
    {
        //taking the values to be inserted 
        int val;
        printf("\nenter the value to be inserted:");
        scanf("%d",&val);
        for(i=num+1;i>pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=val;
        num++;
        printf("\nTHE ARRAY AFTER INSERTION IS:\n");
        for(i=0;i<num;i++)
        {
            printf("%d,",arr[i]);
        }
    }
    else
    {
        printf("\nas you made the wrong choice the operation cant be done");
    }
    return 0;
}
