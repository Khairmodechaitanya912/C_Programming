#include<stdio.h>
#include<conio.h>

int main()
{

    int A=0;
    int Res=0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&A);

    Res = ++A ;           // Pre-Increment Operator

    //Res = A++;         // Post-Increment Operator

    printf("\n Increment is = %d \n",Res);

    getch();
    return 0;
}



