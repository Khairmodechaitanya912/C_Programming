#include<stdio.h>

int main()
{
    char ch='\0';
    printf("\n=================================================================================\n");
    printf("\n Enter a Character to print Appropriate Statement for that Character => ");
    scanf("%c",&ch);
    printf("\n================================");
    switch(ch)
    {
        case 'A':
        case 'a':
            printf("\n Wel-Come...!");
            break;
        case 'B':
        case 'b':
            printf("\n Good Bye...!");
            break;
        case 'C':
        case 'c':
            printf("\n Have a Nice Day...!");
            break;
        case 'D':
        case 'd':
            printf("\n Good Day...!");
            break;
        default:
            printf("\n Thanks...!");
            break;
    }
    printf("\n================================");
    return 0;

}
