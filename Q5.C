//to determine the quadrant in which a given coordinate point (x, y) lies on the XY plane
#include<stdio.h>
int main()
{
    int x ;
    printf("enter the x coordinate:");
    scanf("%d",&x);
    int y ;
    printf("enter the y coordinate:");
    scanf("%d",&y);
    if(x>0 && y>0)
        printf("the coordinate is in the first quadrant");
    else if(x<0 && y>0)
        printf("the coordinate is in the second quadrant");
    else if(x<0 && y<0)
        printf("the coordinate is in the third quadrant");
    else if(x>0 && y<0)
        printf("the coordinate is in the fourth quadrant");
    else if(x==0 && y!=0)
        printf("the coordinate is on the y axis ");
    else if(x!=0 && y==0)
        printf("the coordinate is on the x axis ");
    else 
        printf("the coordinate is the origin");
    return 0 ;
}
