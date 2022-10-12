 #include<stdio.h>
 void main()
 {
    int d,y,w,h;
    printf("enter number of days: ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
    h=d*24;
    d=h/24;
    printf("no.of years=%d\nno.of weeks=%d\nno.of days=%d",y,w,d);
 }
