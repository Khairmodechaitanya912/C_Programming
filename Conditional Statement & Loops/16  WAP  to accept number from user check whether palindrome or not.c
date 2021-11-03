#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Rev=0;
    printf("\n========================================================\n");
    printf("\n Enter Number to Check Its Palindrome OR Not => ");
    scanf("%d",&No);
    printf("\n========================================================\n");
    Temp=No;
    if(Temp>0)
    {
        for(Temp=No;Temp!=0;Temp=Temp/10)
        {
            Rev=(Rev*10)+(Temp%10);

        }
    }
    if(No==Rev)
    {
        printf("\n Its a Palindrome...!\n\n %d = %d",No,Rev);

    }
    else
    {
        printf("\n Its Not a Palindrome...!\n\n %d = %d",No,Rev);
    }
    printf("\n\n========================================================\n");
    getch();
    return 0;

}
