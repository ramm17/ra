#include<stdio.h>
#include<conio.h>
int main()
{
    int sec,h,m,s;
    printf("Enter the time in seconds:");
    scanf("%d",&sec);
    h=sec/3600;
    sec=sec%3600;
    m=sec/60;
    s=sec%60;
    printf("Hrs:%d Min:%d Sec:%d",h,m,s);
    getch();
    return 0;
}
