#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float rad,area;
    printf("Enter the value of radius of circle:");
    scanf("%f",&rad);

    area=(PI*rad*rad);
    printf("Area of circle is %.2f",area);
    getch();
    return 0;
}
