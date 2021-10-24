#include<stdio.h>

int main()
{
    char Student_Name[25],Course[20],City[20];
    int Roll_No;
    printf("\n Student_Name => ");
    scanf("%s",&Student_Name);
    printf("\n Roll_No => ");
    scanf("%d",&Roll_No);
    printf("\n Course => ");
    scanf("%s",&Course);
    printf("\n City => ");
    scanf("%s",&City);
    system("cls");
    printf("\n=============================\n");
    printf("\n Student Name = %s \nRoll No = %d \nCourse = %s \nCity = %s",Student_Name,Roll_No,Course,City);
     printf("\n=============================\n");
    return 0;
}
