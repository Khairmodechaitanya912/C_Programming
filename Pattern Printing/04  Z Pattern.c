/*

           =======Given Pattern========

                  *   *   *   *

                          *

                      *

                  *   *   *   *

          ============================

*/

#include<stdio.h>
#include<conio.h>

int main()
{

    int iRow=0 , iCol=0 , i=0 , j=0 ;

    printf("\n Enter The Number Of Rows = ");
    scanf("%d",&iRow);

    printf("\n Enter The Number Of Columns = ");
    scanf("%d",&iCol);

     printf("\n ==========Output Pattern==========\n\n");

    for(i=1;i<=iRow;i++)
    {

        for(j=1;j<=iCol;j++)
        {

            if(i==iRow||i==1||j==iCol-i+1)
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
