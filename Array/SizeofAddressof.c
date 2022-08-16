#include<stdio.h>

int main()
{
	
	char ch = 'A';
	int i = 11;
	float f = 3.14;
	double d = 9.567;
	
	printf("\nValues From the variables..\n");
	printf("%c\n",ch);
	printf("%d\n",i);
	printf("%f\n",f);
	printf("%lf\n",d);
	
	printf("\nSize of each Variable...\n");
	
	printf("Size of Character : %d\n",sizeof(ch));
	printf("Size of integer : %d\n",sizeof(i));
	printf("Size of float : %d\n",sizeof(f));
	printf("Size of Double : %d\n",sizeof(d));
	
	printf("\nAddress of each Variable...\n");
	
	printf("Address of ch : %d\n",&ch);
	printf("Address of i : %d\n",&i);
	printf("Address of f : %d\n",&f);
	printf("Address of d : %d\n",&d);
	
	printf("Address of ch : %p\n",&ch);
	printf("Address of i : %p\n",&i);
	printf("Address of f : %p\n",&f);
	printf("Address of d : %p\n",&d);
	return 0;
}