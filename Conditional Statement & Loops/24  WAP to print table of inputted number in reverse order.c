#include<stdio.h>

int main()
{
    int No=0,i=10;
    printf("\n=========================================================\n");
    printf("\n Enter a number to print Table in reverse order => ");
    scanf("%d",&No);
    printf("\n=========================================================");
    while(i>=1)
    {
        printf("\n %d * %d = %d",No,i,No*i);
        i--;
    }
    printf("\n=========================================================");
    return 0;
}
