/*


                =======Given Pattern========

                     A
                     A  B
                     A  B  C
                     A  B  C  D
                     A  B  C  D  E

                ============================

*/


#include<stdio.h>
#include<conio.h>

int main()
{

    int iRow=0 , iCol=0 , i=0 , j=0 , Ch='\0' ;

    printf("\n Enter Number Of Rows = ");
    scanf("%d",&iRow);

    printf("\n Enter Number Of Columns = ");
    scanf("%d",&iCol);

    printf("\n ==========Output Pattern==========\n\n");

    for(i=1;i<=iRow;i++)
    {

        for(j=1,Ch='A';j<=iCol;j++,Ch++)
        {

            if(i>=j)
            {

                printf(" %c ",Ch);

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
