#include<stdio.h>

int main()
{
    int No1=0,No2=0,i=0;
    printf("\n===========================");
    printf("\n Enter Two number => ");
    scanf("%d%d",&No1,&No2);
    printf("\n===========================");
    printf("\n Factors of %d => ",No1);
    for(i=1;i<=No1;i++)
    {
        if(No1%i==0)
        {
            printf("\n %d ",i);
        }
    }
    printf("\n===========================");
    printf("\n Factors of %d => ",No2);
    for(i=1;i<=No2;i++)
    {
        if(No2%i==0)
        {
            printf("\n %d ",i);
        }
    }
    printf("\n===========================");
    return 0;
}
