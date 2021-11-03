#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,No1=1,No2=0,Range=0;
    printf("\n===============================================\n");
    printf("\n Enter Range for a Fibonacii Series => ");
    scanf("%d",&Range);
    printf("\n===============================================\n");
    printf("\n Fibonacci's Series For Expected Range => ");
    while(Range>=1)
    {
        printf("\n \t\t\t\t\t  %d ",No2);
        No=No1;
        No1=No2;
        No2=No2+No;
        Range--;
    }
    printf("\n===============================================\n");
    getch();
    return 0;
}
