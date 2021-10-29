#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    printf("\n=============================================================================================");
    printf("\n Enter Character to Check it is Uppercase OR Lowercase OR Digit OR Special symbol =>");
    ch=getchar();
    //scanf("%c",&ch);

    if((ch>='A')&&(ch<='Z'))
    {
        printf("\n Given Character is Upper_Case...!");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\n Given Character is Lower_Case...!");
    }
    else if((ch>='0')&&(ch<='9'))
    {
        printf("\n Given Character is Digit...!");
    }
    else
    {
        printf("\n Given Character is Special Symbol...!");
    }
    printf("\n=============================================================================================");
    getch();
    return 0;

}
