/*

           =======Given Pattern========

                  *           *

                  *    *      *

                  *        *  *

                  *           *

          ============================


*/


#include<stdio.h>
#include<conio.h>

int main()
{

    int iRow=0 , iCol=0 , i=0 , j=0 ;

    printf("\n Enter Number Of Rows = ");
    scanf("%d",&iRow);

    printf("\n Enter Number Of Columns = ");
    scanf("%d",&iCol);

    printf("\n ==========Output Pattern==========\n\n");


    for(i=1;i<=iRow;i++)
    {

        for(j=1;j<=iCol;j++)
        {

            if(j==1||j==i||j==iCol)
            {

                printf(" * ");

            }

            else
            {

                printf("   ");

            }

        }

        printf("\n");

    }

     printf("\n =================================\n");


    getch();
    return 0;

}
