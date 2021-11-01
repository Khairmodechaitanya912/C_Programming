#include<stdio.h>

int main()
{
    int No=0,temp=0,Dcnt=0,Rev=0;
    printf("\n=====================================\n");
    printf("\n Enter Number => ");
    scanf("%d",&No);
    printf("\n=====================================");
    for(temp=No;temp!=0;temp=temp/10)
    {
        Dcnt++;
    }
    if(Dcnt==3)
    {
        for(temp=No;temp!=0;temp=temp/10)
        {
            Rev=(Rev*10)+(temp%10);
        }
        printf("\n The Inputted Number is = %d \n\n And \n\n its Reverse is = %d",No,Rev);
        printf("\n=====================================");
    }
    return 0;
}
