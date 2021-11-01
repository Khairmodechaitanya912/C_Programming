#include<stdio.h>
#include<conio.h>

void Swap(int*,int*);

int main()
{
   int No1,No2;
   printf("\n==========================================");
   printf("\n Enter Two Number => ");
   scanf("%d%d",&No1,&No2);
   printf("\n==========================================\n");
   printf("\n Before Swapping => No1 = %d  No2 = %d \n",No1,No2);
   printf("\n===========================================\n");
   Swap(&No1,&No2);
   printf("\n After Swapping  => No1 = %d  No2 = %d  \n",No1,No2);
   printf("\n===========================================\n");
}

void Swap(int*X1,int*X2)
{
    int temp=0;
    temp=*X1;
    *X1=*X2;
    *X2=temp;
}
