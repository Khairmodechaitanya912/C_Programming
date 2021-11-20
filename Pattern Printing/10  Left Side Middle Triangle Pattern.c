/*

              =======Given Pattern========

                     A
                     A  B
                     A  B  C
                     A  B
                     A

                ============================


*/



#include<stdio.h>
#include<conio.h>

int main()
{

    int iRow=0 , i=0 , j=0 , Ch='\0' ;

    printf("\n Enter Number Of Rows = ");
    scanf("%d",&iRow);

    printf("\n ==========Output Pattern==========\n\n");

    for(i=1;i<=iRow;i++)
    {

        for(j=1,Ch='A';j<=iRow;j++,Ch++)
        {

            if((i>=j)&&(i+j<=iRow+1))
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
