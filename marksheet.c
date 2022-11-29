#include<stdio.h>
#include<conio.h>
int main()
{
    float en,ne,ma,sc,co,tot,per;
    printf("STUDENT GRADING SYSTEM\n");
    printf("-----------------------\n");
    printf("Enter the obtained marks for the following subjects:\n");
    printf("English:");
    scanf("%f",&en);
    printf("Nepali:");
    scanf("%f",&ne);
    printf("Maths:");
    scanf("%f",&ma);
    printf("Science:");
    scanf("%f",&sc);
    printf("Computer:");
    scanf("%f",&co);
    tot=(en+ne+ma+sc+co);
    per=tot/5;
    printf("Total Obtained Marks:%.2f\n",tot);
    printf("Total Percentage:%.2f\n",per);
    if(per>=90)
    {
        printf("Congrats,you score A+");
    }
    else if(per>=80)
    {
         printf("Congrats,you score A");
    }
    else if(per>=70)
    {
         printf("Congrats,you score B+");
    }
    else if(per>=60)
    {
         printf("Congrats,you score B");
    }
    else if(per>=50)
    {
         printf("Congrats,you score C+");
    }
    else if(per>=40)
    {
         printf("Congrats,you score C");
    }
    else
    {
         printf("Sorry,you are failed ");
    }
    getch();
    return 0;


}


