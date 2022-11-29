#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
        printf("It is divisible by 5 and 11");

    }
    else
    {
        printf("It is not divisible by 5 and 11");

    }
    getch();
    return 0;

}

