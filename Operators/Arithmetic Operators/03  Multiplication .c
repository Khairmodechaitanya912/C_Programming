#include<stdio.h>
#include<conio.h>

int main()
{

    int A=0;
    int B=0;
    int Mult=0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&A);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&B);

    Mult = A * B ;           // Multiplication Operator

    printf("\n Multiplication Of %d * %d = %d \n",A,B,Mult);

    getch();
    return 0;
}

