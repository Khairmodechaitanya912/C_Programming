#include<stdio.h>

int main()
{
    int N1,N2;
    up:
    printf("\n===================================================");
    printf("\n Enter Two Number to Check Maximum from it => ");
    scanf("%d%d",&N1,&N2);

    if(N1==N2)
    {
        printf("\n Both Numbers are Equal...!\n");
        goto up;
    }
    else if (N1>N2)
    {
        printf("\n N1 = %d is Maximum Number...!",N1);
    }
    else
    {
        printf("\n N2 = %d is Maximum Number...!",N2);
    }
        printf("\n===================================================");
    return 0;
}
