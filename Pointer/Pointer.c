#include<stdio.h>

int main()
{
	int No = 11;
	
	int *p = &No;
	
	
	printf("%d\n",No);
	printf("%d\n",p);
	printf("%p\n",&No);
	printf("%p\n",&p);
	printf("%d\n",sizeof(No));
	printf("%d\n",sizeof(p));
	
	return 0;
}