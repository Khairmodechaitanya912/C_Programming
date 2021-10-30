#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,temp=0,rev=0,Dcnt=0;
    printf("\n================================================================================\n");
    printf("\n Enter number => ");
    scanf("%d",&No);
    printf("\n================================================================================\n");
    for(temp=No;temp!=0;temp=temp/10)
    {
       Dcnt++;
    }
    if(Dcnt==4)
    {
        for(temp=No;temp!=0;temp=temp/10)
        {
            rev=(rev*10)+(temp%10);
        }
        printf("\n  The Inputted Number is = %d \n\n And \n\n  its Reverse Number is = %d",No,rev);
    }
    else
    {
        printf("\n Invalid Number...!");
    }
    printf("\n================================================================================");

    getch();
    return 0;
}
