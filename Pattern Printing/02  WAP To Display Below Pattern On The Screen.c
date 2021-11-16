/*

         =======Given Pattern========

                  *
                  * *
                  * * *
                  * * * *

        ============================

*/

#include<stdio.h>
#include<conio.h>

int main()
{

    int iRow=0 , iCol=0 , i=0 ,j=0;

    printf("\n Enter Number of Rows = ");
    scanf("%d",&iRow);

    printf("\n Enter Number Of Columns = ");
    scanf("%d",&iCol);

    printf("\n ==========Given Pattern==========\n\n");

    for(i=1;i<=iRow;i++)
    {

        for(j=1;j<=iCol;j++)
        {

            if(i>=j)
            {

                printf(" * ");

            }

        }
        printf("\n");

    }

   printf("\n =================================\n");

   getch();
   return 0;

}
