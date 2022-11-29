#include<stdio.h>
#include<conio.h>
int main()
{
    char al;
    printf("Enter any alphabet to check whether it is vowel or consonant:");
    scanf("%c",&al);
    if(al=='a'||al=='e'||al=='i'||al=='o'||al=='u')
    {
        printf("Entered alphabet is vowel");

    }
    else
    {
        printf("Entered alphabet is consonant");

    }
    getch();
    return 0;

}
