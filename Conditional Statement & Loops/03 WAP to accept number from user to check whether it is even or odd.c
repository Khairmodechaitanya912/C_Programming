#include<stdio.h>

int main()
{
    int No;
    up:
    printf("=======================================");
    printf("\n Enter number to check Even or Odd => ");
    scanf("%d",&No);

    if(No==0)
    {
        printf("\n Number are Null or Natural...! \n");
        goto up;
    }
    if(No%2==0)
    {
        printf("\n %d is Even Number...!",No);
    }
    else
    {
        printf("\n %d is Odd Number...! ",No);
    }
     printf("\n=======================================\n");
    return 0;

}
