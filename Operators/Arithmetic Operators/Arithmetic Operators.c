#include<stdio.h>
#include<conio.h>

int main()
{

    int A=20 ;
    int B=10 ;
    int C=0 ;

    // Addition Operator

    C = A + B ;

    printf("\n Addition Of %d + %d is = %d \n",A,B,C);

    getch();

    // Subtraction Operator

    C = A - B ;

    printf("\n Subtraction Of %d - %d is = %d \n",A,B,C);

    getch();

    // Multiplication Operator

    C = A * B ;

    printf("\n Multiplication Of %d * %d is = %d \n",A,B,C);

    getch();

    // Division Operator

    C = A / B ;

    printf("\n Division Of %d / %d is = %d \n",A,B,C);

    getch();

    // Modulus Operator

    C = A % B ;

    printf("\n Modulus Of %d %% %d is = %d \n",A,B,C);

    getch();

    // Increment Operator

    C = ++A ;            // Pre-Increment

    printf("\n Increment is = %d \n",C);

    getch();

    // Decrement Operator

    C = --A ;           // Pre-Decrement

    printf("\n Decrement is = %d \n",C);


    getch();
    return 0;
}
