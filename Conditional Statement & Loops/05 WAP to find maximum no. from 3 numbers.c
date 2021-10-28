#include<stdio.h>

int main()
{
    int N1,N2,N3;

    up:
    printf("\n=============================================================");
    printf("\n Enter Three Number to check the Maximum from them => ");
    scanf("%d%d%d",&N1,&N2,&N3);
    if((N1==N2)&&(N2==N3))
    {
        printf("\n Numbers are Equal...!");
        goto up;
    }
    if(N1>N2)
    {
        if(N1>N3)
        {
            printf("\n N1 = %d is Maximum...!",N1);
        }
         else
          {
               printf("\n N3 = %d is Maximum...!",N3);
          }

    }

    else if(N2>N3)
    {
        printf("\n N2 = %d is Maximum...!",N2);
    }
    else
    {
        printf("\n N3 = %d is Maximum...!",N3);
    }
    printf("\n=============================================================\n");
}
