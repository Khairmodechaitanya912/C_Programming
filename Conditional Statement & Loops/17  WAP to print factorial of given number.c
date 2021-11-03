#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Fac=1;
    printf("\n================================================\n");
    printf("\n Enter Number to calculate Factorial => ");
    scanf("%d",&No);
    Temp=No;
    while(Temp>1)
    {
      Fac=Fac*Temp;
      Temp--;
    }
   printf("\n================================================");
   printf("\n Factorial of Given Number is  %d! = %d",No,Fac);
   printf("\n================================================\n");

   getch();
   return 0;
}
