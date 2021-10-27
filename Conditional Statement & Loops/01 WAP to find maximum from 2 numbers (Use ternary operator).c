#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2;
    printf("\n Enter two number => ");
    scanf("%d%d",&No1,&No2);
    printf("========================\n");
    printf(" N1= %d    N2= %d \n",No1,No2);
    No1<No2?printf("\n N2 is Greater..."): printf("\n N1 is Greater...");
    printf("\n========================");
    getch();
    return 0;

}
