//to print a binary pyramid pattern
#include<stdio.h>
int main()
{
    int row ;
    printf("enter the number of rows:");
    scanf("%d",&row);
    int i,j,spaces ;
    for(i=1;i<=row;i++)
    {
        int start=0;
        for(j=0;j<i;j++)
        {
            printf("%d",start);
            start=1-start;
        }
        for(spaces=0;spaces<2*(row-i);spaces++)
        {
            printf(" ");
        }
        start=0;
        for(j=0;j<i;j++)
        {
            printf("%d",start);
            start=1-start;
        }
        printf("\n");
    }
    return 0;
}
