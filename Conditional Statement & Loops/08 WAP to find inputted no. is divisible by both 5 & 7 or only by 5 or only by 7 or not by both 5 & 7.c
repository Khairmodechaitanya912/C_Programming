#include<stdio.h>
#include<conio.h>

int main()
{
    int No;
    up:
    printf("\n===================================================");
    printf("\n Enter a Number => ");
    scanf("%d",&No);

    if(No==0)
    {
        printf("\n Invalid Number...!");
        goto up;
    }
    if((No%5==0)&&(No%7==0))
    {
        printf("\n Given Number is divisible by both 5 & 7");
    }
    else if(No%5==0)
    {
         printf("\n Given Number is divisible only by 5 ");
    }
    else if(No%7==0)
    {
         printf("\n Given Number is divisible only by 7");
    }
    else
    {
         printf("\n Given Number is not divisible by both 5 & 7");
    }
     printf("\n====================================================");
    getch();
    return 0;
}
