#include<stdio.h>

int main()
{
  int No1,y,cnt=0;
  up:
  printf("\n Enter Number to check its prime or not => ");
  scanf("%d",&No1);
   if(No1==1||No1==0)
  {
    printf("\n its a natural Number... ");
    goto up;
  }
  for(y=2;y<=No1/2;y++)
  {
     if(No1%y==0)
     {
        cnt=1;
     }
  }

  if(cnt==0)
  {
      printf("\n its a prime Number... ");
  }
  else
  {
      printf("\n its not a prime Number...");
  }
  return 0;
}
