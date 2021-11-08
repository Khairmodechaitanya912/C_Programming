#include<stdio.h>

int main()
{
    int No=0,i=1,Max=0;
    printf("\n===========================================================");
    while(i<=10)
    {
        printf("\n Enter %d Numbers  => ",i);
        scanf("%d",&No);
        if(i==1)
        {
            Max=No;
        }
         if(No>Max && No<0)
        {
            Max=No;

        }
        else if(No>Max && No>0)
        {
            Max=No;
        }

        i++;


    }
      printf("\n===========================================================");
      printf("\n Maximum Number from Given Inputted Number = %d ",Max);
      printf("\n===========================================================");
}
