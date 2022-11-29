#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greater\n",a);
        if(b>c)
        {
            printf("%d is middle number\n",b);
            printf("%d is smaller number\n",c);

        }
        else
        {
            printf("%d is middle number\n",c);
            printf("%d is smaller number\n",b);
        }

    }
    else if(b>a && b>c)
    {
        printf("%d is greater\n",b);
        if(a>c)
        {
            printf("%d is middle number\n",a);
            printf("%d is smaller number\n",c);
        }
        else
        {
            printf("%d is middle number\n",c);
            printf("%d is smaller number\n",a);
        }
    }
    else
    {
        printf("%d is greater\n",c);
        if(a>b)
        {
            printf("%d is middle number\n",a);
            printf("%d is smaller number\n",b);
        }
        else
        {
            printf("%d is middle number\n",b);
            printf("%d is smaller number\n",a);
        }
    }
    getch();
    return 0;
}
