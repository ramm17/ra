#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d",&age);
    (age>=18)?printf("You are eligible to vote"):printf("You are not eligible to vote");
    getch();
    return 0;
}
