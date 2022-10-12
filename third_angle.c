#include<stdio.h>
void main()
{
    int a1,a2,a3;
    printf("enter the two angles of a triangle: ");
    scanf("%d%d",&a1,&a2);
    if((a1+a2)<180)
    {
        a3=180-(a1+a2);
        printf("the third angle is: %d",a3);
    }
    else
        printf("invalid input");
}
