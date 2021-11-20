#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int i=0;

    puts("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        i++;
    }

    printf("\n Length of Given String is  = %d \n",i);

    getch();
    return 0;

}
