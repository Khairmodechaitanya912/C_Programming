#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0,i=1,Cnt=1;
    printf("\n============================================================================");
    printf("\n Enter Range to print table =>> \n");
    scanf("%d%d",&No1,&No2);
    printf("\n");
    for(Cnt=1;Cnt<=10;Cnt++)
    {

        for(i=No1;i<=No2;i++)
        {
            printf(" %d * %d = %d ",No1,i,No1*i);
        }
        printf("\n");
    }
    printf("\n============================================================================");
    getch();
    return 0;
}
