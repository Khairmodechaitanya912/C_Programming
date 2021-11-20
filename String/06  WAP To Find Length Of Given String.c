#include<stdio.h>
#include<conio.h>

int strlenX(char *);

int main()
{

    int Len=0;
    char Str[40]={};

    printf("\n Enter A String :- ");
    gets(Str);

    Len = strlenX(Str);

    printf("\n Length Of Given String Is :- %d ",Len);

    getch();
    return 0;

}

int strlenX(char *Src)
{

    int i=0;

    while(Src[i]!='\0')
    {
        i++;
    }

    return i;
}
