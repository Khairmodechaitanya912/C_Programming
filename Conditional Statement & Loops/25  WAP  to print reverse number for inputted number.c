#include<stdio.h>

int main()
{
    int No=0,Temp=0,Rev=0;
    printf("\n=================================================");
    printf("\n Enter Number to Print Reverse Number => ");
    scanf("%d",&No);
    printf("=================================================");
    Temp=No;
    if(Temp!=0)
    {
        for(Temp=No;Temp!=0;Temp=Temp/10)
        {
            Rev=(Rev*10)+(Temp%10);
        }
        printf("\n %d = %d",No,Rev);
    }
    printf("\n=================================================");
    return 0;
}

