#include<stdio.h>
#include<conio.h>

int Count_Of_UpperCase(char *);

int main()
{

    int UCnt=0;
    char Str[40]={};

    printf("\n Enter A String :- ");
    gets(Str);

    UCnt = Count_Of_UpperCase(Str);

    printf("\n Count Of Upper Case Letter is :- %d ",UCnt);

    getch();
    return 0;

}

int Count_Of_UpperCase(char *Src)
{
    int i=0 , UCCnt=0 ;

    while(Src[i]!='\0')
    {
        if(Src[i]>='A'&& Src[i]<='Z')
        {
            UCCnt++;
        }
        i++;
    }

    return UCCnt;
}
