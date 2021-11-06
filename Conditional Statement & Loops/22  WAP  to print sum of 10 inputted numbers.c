#include<stdio.h>

int main()
{
    int No=0,Sum=0,i=0;
    while(i<10)
    {
       printf("==========================================\n");
       printf(" Enter Number from User => ");
       scanf("%d",&No);
       Sum=Sum+No;
       i++;
    }
    printf("\n==========================================\n");
    printf("\n Sum of 10 inputted Number is => %d \n",Sum);
    printf("\n==========================================\n");
    return 0;
}
