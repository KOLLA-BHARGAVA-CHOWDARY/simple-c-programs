#include<stdio.h>
void main()
{
    int n,max=0;
    float avg,per,t;
    printf("enter no.of subjects and total marks: ");
    scanf("%d%f",&n,&t);
    int s[n];
    printf("enter each subject marks: ");
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    for(int i=0;i<n;i++)
        max=max+s[i];
    avg=(float)max/n;
    per=(max/t)*100;
    printf("total marks=%d\naverage=%.2f\npercentage=%.2f",max,avg,per);
}
