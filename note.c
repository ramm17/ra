#include<stdio.h>
#include<conio.h>
int main()
{
    int amt,note;
    note=0;
    printf("Please Enter your amount:");
    scanf("%d",&amt);
    if (amt>=1000)
    {
        note=amt/1000;
        printf("Note1000:%d\n",note);
        amt%=1000;

    }
    if(amt>=500)
    {
        note=amt/500;
        printf("Note500:%d\n",note);
        amt%=500;
    }
    if(amt>=100)
    {
        note=amt/100;
        printf("Note100:%d\n",note);
        amt%=100;
    }
    if (amt>=50)
    {
        note=amt/50;
        printf("Note50:%d\n",note);
        amt%=50;
    }
    if(amt>=20)
    {
      note=amt/20;
      printf("Note20:%d\n",note);
      amt%=20;
    }
    if(amt>=10)
    {
       note=amt/10;
      printf("Note10:%d\n",note);
      amt%=10;
    }
    if(amt>=5)
        {
            note=amt/5;
            printf("Note5:%d\n",note);
            amt%=5;
        }
        if(amt>=2)
        {
            note=amt/2;
            printf("Note2:%d\n",note);
            amt%=2;
        }
        if(amt>=1)
        {
            note=amt/1;
            printf("Note1:%d\n",note);
            amt%=1;
        }
        getch();
        return 0;


    }

