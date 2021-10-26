#include<stdio.h>

int main()
{
    int No;
    printf("\n================================================");
    printf("\n Enter a ASCII value to get a character =>");
    scanf("%d",&No);
    if(No<=127)
    {
        printf("\n The given ASCII value of character is => %C",No);
    }
    else
    {
        printf("\n Invalid Inputs!!!!!!!!");
    }
    printf("\n================================================");
  return 0;
}
