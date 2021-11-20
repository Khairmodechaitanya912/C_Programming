#include<stdio.h>
#include<conio.h>

int Count_Of_Digit(char *Src);

int main()
{

    int DCnt=0;
    char Str[40]={};

    printf("\n Enter A String :- ");
    gets(Str);

    DCnt = Count_Of_Digit(Str);

    printf("\n Count Of Digits In Given String :-  %d ",DCnt);

    getch();
    return 0;

}

int Count_Of_Digit(char *Src)
{
    int i=0 , Dig_Cnt = 0;

    while(Src[i]!='\0')
    {

        if(Src[i]>= '0' && Src[i]<= '9')
        {

            Dig_Cnt++;
        }

        i++;
    }

    return Dig_Cnt;
}
