#include<stdio.h>

int main()
{
    char c;
    printf("\n========================================");
    printf("\n ASCII value of given character =>");
    scanf("%c",&c);
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
    {
       printf("\n %d=%c ", c,c );
    }
     else
     {
         printf("\n invalid input!!!!!");
     }
    printf("\n========================================");
     return 0;
}
