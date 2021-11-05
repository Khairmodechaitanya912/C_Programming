#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch='A';
    printf("\n============================================");
    printf("\n A to Y Characters are as follows => ");
    for(Ch='A';Ch<='Y';Ch++)
    {
        printf("\n\t\t\t\t     %c ",Ch);

    }
    printf("\n============================================\n");
    getch();
    return 0;
}
