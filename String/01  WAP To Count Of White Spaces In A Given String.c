#include<stdio.h>
#include<conio.h>

int Count_Of_WSpace(char *Src);

int main()
{
   int Cnt_Space = 0 ;
   char Str[40]={};

   printf("\n Enter a string :- ");
   gets(Str);

   Cnt_Space = Count_Of_WSpace(Str);

   printf("\n Given Output :- %d ",Cnt_Space);

   getch();
   return 0;

}

int Count_Of_WSpace(char *Src)
{
    int i=0 , WCnt=0;

    while(Src[i]!='\0')
    {
        if(Src[i]== ' ')
        {
           WCnt++;
        }
        i++;
    }
    return WCnt;
}
