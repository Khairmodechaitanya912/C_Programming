#include<stdio.h>

extern int No1;
extern int No2;

extern void Hello();

int main()
{
	Hello();
	
	printf("Value Of No1 is : %d\n",No1);
	printf("Value Of No2 is : %d\n",No2);
	
	return 0;
}