#include<stdio.h>

int main()
{
    int No,N,temp=0;
    printf("======================================================================");
    printf("\n Enter Three Digit Number to Check Maximum Digit from it => ");
    scanf("%3d",&No);
    printf("\n No = %d\n",No);
   while(No>0)
   {
       N=No%10;
     if(N>temp)
     {
         temp=N;
     }
     No=No/10;
   }
   printf("\n In Given Three Digit Number The Maximum Digit = %d",temp);
   printf("\n======================================================================");
   return 0;
   }
