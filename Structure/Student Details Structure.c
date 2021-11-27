#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static int Cnt = 0;

struct Stud
{

    int Roll_No;
    char Name[30];
    int Total;
    float Per;

};

int main()
{
    struct Stud Std;

    printf("\n Enter the Counts Of Students => ");
    scanf("%d",&Cnt);

    int i=0;

    for(i=0;i<Cnt;i++)
    {

        printf("\n Enter Student Roll No :- ");
        scanf("%d",&Std.Roll_No);

        printf("\n Enter Student Name :- ");
        fflush(stdin);
        scanf("%[^\n]",&Std.Name);

        printf("\n Enter Students Total Marks :- ");
        scanf("%d",&Std.Total);

        printf("\n Enter Students Percentage :- ");
        scanf("%f",&Std.Per);
    }

    getch();
    return 0;

}
