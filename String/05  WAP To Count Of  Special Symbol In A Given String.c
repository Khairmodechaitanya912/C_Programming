#include<stdio.h>
#include<conio.h>

int Count_Of_SpecialSymbol(char *Src);

int main()
{

    int SpCnt=0;
    char Str[40]={};

    printf("\n Enter A String :- ");
    gets(Str);

    SpCnt = Count_Of_SpecialSymbol(Str);

    printf("\n Count Of Special Symbol In Given String :-  %d ",SpCnt);

    getch();
    return 0;

}

int Count_Of_SpecialSymbol(char *Src)
{
    int i=0 , SpSCnt = 0;

    while(Src[i]!='\0')
    {

        if(!((Src[i]>= '0' && Src[i]<= '9') || (Src[i]>= 'A' && Src[i]<= 'Z' ) || (Src[i]>= 'a' && Src[i]<= 'z' )))
        {

            SpSCnt++;
        }

        i++;
    }

    return SpSCnt;
}
