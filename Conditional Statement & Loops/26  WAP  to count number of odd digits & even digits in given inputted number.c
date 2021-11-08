#include<stdio.h>
#include<conio.h>

int main()
{
  int No=0,EDig=0,ODig=0,Temp=0,Cnt=0;
    printf("\n==============================================================================");
    printf("\n\n Enter Number to check Count Number of Even digits & Odd digits => ");
    scanf("%d",&No);

    for(Temp=No;Temp!=0;Temp=Temp/10)
    {
        Cnt=Temp%10;
        if(Cnt%2==0)
        {
            EDig++;
        }
        else
        {
            ODig++;
        }
    }
    printf("\n==============================================================================");
    printf("\n Given Number is = %d  \n Even Digit Count = %d  \n Odd Digit Count = %d ",No,EDig,ODig);
    printf("\n==============================================================================");

    getch();
    return 0;
}
