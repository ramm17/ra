#include<stdio.h>
#include<conio.h>
int main()
{
    int numb;
    printf("Enter any number:");
    scanf("%d",&numb);
    (numb%2==0)?printf("It is even number"):printf("It is odd number");
    getch();
    return 0;
}
