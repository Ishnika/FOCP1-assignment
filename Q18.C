//to identify and print duplicate elements in an array, or print “-1” if no duplicates exist
#include<stdio.h>
int main()
{
    int n,i,j,no_dup=0;
    printf("enter the number of terms in the array:");
    scanf("%d",&n);
    int arr[n],check[n];
    for(i=0;i<n;i++)
    {
        printf("enter the %d value:",i+1);
        scanf("%d",&arr[i]);
        check[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(check[i]==1)
        continue;
        
        int count=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                no_dup++;
                check[j]=1;
            }
        }
        if(count)
        printf("%d,",arr[i]);
    }
    if(no_dup==0)
    printf("%d",-1);
    return 0;
}
