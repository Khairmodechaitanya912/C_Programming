#include<stdio.h>

int main()
{
    int i,j;
    printf("\n Swapping of Two numbers => ");
    scanf("%d%d",&i,&j);
    printf("\n========================");
    printf("\n Before Swapping \n No1=%d   No2=%d ",i,j);
     i=i+j;
     j=i-j;
     i=i-j;
     printf("\n========================\n");
     printf(" After Swapping \n  no1=%d   no2=%d",i,j);
     printf("\n========================\n");

    return 0;
}
