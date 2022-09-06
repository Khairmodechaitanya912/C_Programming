#include<stdio.h>

int Add()
{
	
	int iNo1 = 0;
	int iNo2 = 0;
	int iRes = 0;
	
	printf("Enter 1 No : ");
	scanf("%d",&iNo1);
	
    printf("Enter 2 No : ");
	scanf("%d",&iNo2);
	
	iRes = iNo1 + iNo2;
	
	return iRes;
}