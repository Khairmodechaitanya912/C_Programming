#include<stdio.h>
#include<conio.h>

int main()
{

    int A=12;
    int B=10;

    printf("\n The Value of A = %d \n\n The Value of B = %d \n",A,B);

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    if(A == B)           // Equal ('==')
    {

        printf("\n A Is Equal To B \n");

    }
    else                // Not Equal ('!=')
    {

        printf("\n A Is Not Equal To B \n");

    }

    getch();

    if(A > B)           // Greater Then ('>')
    {

        printf("\n A Is Greater Then B \n");

    }
    else
    {

        printf("\n A Is Not Greater Then B \n");
    }

    getch();

     if(A < B)           // Less Then ('<')
    {

        printf("\n A Is Less Then B \n");

    }
    else
    {

        printf("\n A Is Not Less Then B \n");
    }

    getch();

    if(A >= B)            // Greater Then Or Equal To ('>=')
    {

        printf("\n A Is Greater Then Or Equal To B \n");

    }
    else
    {

        printf("\n A Is Not Greater Than Or Equal To B \n");

    }

    getch();

    if(A <= B)            // Less Than Or Equal To ('<=')
    {

        printf("\n A Is Less Than Or Equal To B \n");

    }
    else
    {

        printf("\n A Is Not Less Than Or Equal To B \n");

    }

    getch();

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    return 0;

}
