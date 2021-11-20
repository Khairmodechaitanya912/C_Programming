#include<stdio.h>
#include<conio.h>

int Count_Of_LowerCase(char *);

int main()
{

    int LCnt=0;
    char Str[40]={};

    printf("\n Enter A String :- ");
    gets(Str);

    LCnt = Count_Of_LowerCase(Str);

    printf("\n Count Of Lower Case Letter is :- %d ",LCnt);

    getch();
    return 0;

}

int Count_Of_LowerCase(char *Src)
{
    int i=0 , LCCnt=0 ;

    while(Src[i]!='\0')
    {
        if(Src[i]>='a'&& Src[i]<='z')
        {
            LCCnt++;
        }
        i++;
    }

    return LCCnt;
}
