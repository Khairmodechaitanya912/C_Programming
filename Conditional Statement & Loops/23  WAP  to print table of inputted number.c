#include<stdio.h>

int main()
{
  int No=0,i=1,Tab=0;
  printf("\n=======================================\n");
  printf("\n Enter Number to print Table => ");
  scanf("%d",&No);
  printf("\n=======================================");
  while(i<=10)
  {

   printf("\n %d * %d = %d",No,i,No*i);
   i++;

  }
  printf("\n=======================================");
  return 0;
}
