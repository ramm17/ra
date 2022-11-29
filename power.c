#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

    int a,b,x;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    x = pow(a,b);
    printf("The value of power is %d",x);
    getch();
    return 0;
}
