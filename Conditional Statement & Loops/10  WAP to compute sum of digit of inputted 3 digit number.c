#include<stdio.h>

int main()
{
    int No=0,temp=0,sum=0,digit=0;
    printf("\n===========================================");
    printf("\n Enter Number to find Digit Sum => ");
    scanf("%d",&No);
    temp=No;
    while(temp>0)
    {

        digit=temp%10;
        sum=sum+digit;
        printf("\n Digit = %d  Sum = %d",digit,sum);
        temp=temp/10;
    }
    printf("\n===========================================");
    printf("\n Sum of Digit in %d is = %d",No,sum);
    printf("\n===========================================\n");
    return 0;
}
