#include<stdio.h>
#include<conio.h>

int main()
{
  int Sum=0,No=0;
  printf("====================================================================================");
  printf("\n Enter Numbers to calculate Sum Untill user Zero or Negative =>> \n\n");

  while(1)
  {
    scanf("%d",&No);
    if(No<=0)
    {
        break;
    }
    Sum=Sum+No;
  }
  printf("\n Sum of Given Inpuuted Number is %d...!",Sum);
  printf("\n====================================================================================");
  getch();
  return 0;
}
