#include<stdio.h>
#include<conio.h>

int main()
{

    int A=0;
    int B=0;
    int Modulo=0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&A);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&B);

    Modulo = A % B ;           // Modulus Operator

    printf("\n Division Of %d %% %d = %d \n",A,B,Modulo);

    getch();
    return 0;
}


