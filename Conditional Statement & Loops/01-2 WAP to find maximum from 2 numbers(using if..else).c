#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2;
    up:
    printf("\n==========================");
    printf("\n Enter two No => ");
    scanf("%d%d",&No1,&No2);
    printf("==========================");
    printf("\n No1 = %d   No2 = %d \n",No1,No2);
    if(No1==No2)
    {
        printf("\n Numbers are Equal...!");
        goto up;
    }
     printf("\n==========================");
    if(No1>No2)
    {
        printf("\n No1 is Maximum...");
    }
    else
    {
        printf("\n No2 is Maximum...");
    }
     printf("\n==========================");
    getch();
    return 0;
}
