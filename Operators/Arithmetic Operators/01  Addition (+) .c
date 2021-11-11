#include<stdio.h>
#include<conio.h>

int main()
{

    int A=0;
    int B=0;
    int Sum=0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&A);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&B);

    Sum = A + B ;           // Addition Operator

    printf("\n Addition Of %d + %d = %d \n",A,B,Sum);

    getch();
    return 0;
}
