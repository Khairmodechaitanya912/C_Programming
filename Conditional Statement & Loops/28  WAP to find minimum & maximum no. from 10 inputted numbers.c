#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=1,Max=0,Min=0;
    printf("\==============================================");
    for(i=1;i<=10;i++)
    {
        printf("\n Enter %d Number => ",i);
        scanf("%d",&No);
        if(i==1)
        {
            Max=No;
            Min=No;
            continue;
        }
       if(No>Max)
        {
            Max=No;
        }
      else if(No<Min)
        {
            Min=No;
        }
    }
    printf("\===================================================");
    printf("\n The Maximum Number is %d \n The Minimum Number is %d \n",Max,Min);
    printf("\===================================================");
    getch();
    return 0;

}
