#include<stdio.h>
#include<conio.h>

int main()
{

    int A=0;
    int B=0;
    int Sub=0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&A);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&B);

    Sub = A - B ;           // Subtraction Operator

    printf("\n Subtraction Of %d - %d = %d \n",A,B,Sub);

    getch();
    return 0;
}

