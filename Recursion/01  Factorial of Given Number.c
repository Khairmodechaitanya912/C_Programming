#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{

    int No=0;

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    printf("\n Enter Number To Find Factorial = ");
    scanf("%d",&No);

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    printf("\n Factorial of %d is = %d \n", No,Factorial(No));

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    getch();
    return 0;

}

int Factorial(int Num)
{

    int Fact = 1 ;

    if(Num > 0)
    {

        return Num * Factorial(Num-1);

    }
    else
    {

        return Fact;
    }
}
