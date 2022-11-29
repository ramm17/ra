#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter any number to check whether is is perfect or not:");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {

        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(num==sum)
    {
        printf("%d is the perfect number",num);
    }
    else
    {
        printf("%d is not the perfect number",num);
    }
    getch();
    return 0;
}
