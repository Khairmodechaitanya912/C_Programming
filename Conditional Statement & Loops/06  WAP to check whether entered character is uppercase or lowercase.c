#include<stdio.h>
#include<conio.h>

int main()
{
   char ch='\0';
   printf("\n==================================================================");
   printf("\n Enter Character to Check it is UPPERCASE Or LOWERCASE => ");
   scanf("%c",&ch);

   if((ch>='A')&&(ch<='Z'))
   {
       printf("\n Given Character is Upper_Case...!");
   }
   else if((ch>='a')&&(ch<='z'))
   {
       printf("\n Given Character is Lower_case...!");
   }
   else
   {
       printf("\n Given Character is not an Alphabet...!");
   }
   printf("\n==================================================================");
   getch();
   return 0;
}
