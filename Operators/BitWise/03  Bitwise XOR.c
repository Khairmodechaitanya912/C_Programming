#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{


    int No1 = 0 , No2 = 0 , Res = 0 ;

    printf("\n Enter First Number = ");
    scanf("%d",&No1);

    printf("\n Enter Second Number = ");
    scanf("%d",&No2);

    Res = No1 ^ No2 ;

    printf("\n=========================================================\n");

    printf("\n Bitwise OR Between =>>  %d ^ %d = %d \n",No1,No2,Res);

    printf("\n=========================================================\n");

    getch();
    return 0;

}
