#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter any three sides of a Triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %.2f",area);
    getch();
    return 0;


}
