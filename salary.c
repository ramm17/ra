#include<stdio.h>
#include<conio.h>
int main()
{
    int sal,bon;
    printf("Please Enter your salary:");
    scanf("%d",&sal);
    if (sal>=35000)
    {
        bon=sal*15/100;
        printf("Your bonus amount is:Rs.%d\n",bon);
        sal+=bon;

    }
    printf("Your Total Salary: Rs.%d",sal);
    getch();
    return 0;
}
