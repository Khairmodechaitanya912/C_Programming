#include<stdio.h>
#include<conio.h>

int main()
{

    int A=0;
    int Res=0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&A);

    Res = --A ;           // Pre-Decrement Operator

    //Res = A--;         // Post-Decrement Operator

    printf("\n Decrement is = %d \n",Res);

    getch();
    return 0;
}



