#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,r;
    printf("Enter the range for odd-even:");
    scanf("%d",&r);
    printf("\nOdd\tEven\n");
    while(a<=r)
    {
        if(a%2==0)
        {
            printf("%d\n",a);//even

        }
        else
        {
            printf("%d\t",a);//odd
        }
        a++;
    }
    getch();
    return 0;
}
