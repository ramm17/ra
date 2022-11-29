#include<stdio.h>
#include<conio.h>
int main()
{
    int numb;
    printf("Enter any number:");
    scanf("%d",&numb);
    if (numb%2==0)
    {
        printf("%d is the even number",numb);
    }
    else
    {
        printf("%d is the odd number",numb);
    }
    getch();
    return 0;
}
