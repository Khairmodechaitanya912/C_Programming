#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50};
	
	printf("Base Address of Array is : %p\n ",Arr);
	printf("Base Address of Array is : %p\n ",&Arr);
	printf("Size of Array is : %d\n", sizeof(Arr));
	
	
	return 0;
}