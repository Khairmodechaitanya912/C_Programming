#include<stdio.h>
void Arithmatic_Operator(int,int);
int main()
{
   int N1,N2;
   printf("Enter two Number =>");
   scanf("%d%d",&N1,&N2);
   Arithmatic_Operator(N1,N2);
   return 0;
}
void Arithmatic_Operator(int No1,int No2)
{
    int sum,sub,Mult,div,mod;
   printf("\n______________________________________\n");
   sum=No1+No2;
   printf("\n Sum of Two Number =>%d",sum);
   printf("\n______________________________________\n");
   sub=No1-No2;
   printf("\n Substraction of Two Number =>%d",sub);
   printf("\n______________________________________\n");
   Mult=No1*No2;
   printf("\n Multiplication of Two Number =>%d",Mult);
   printf("\n______________________________________\n");
   div=No1/No2;
   printf("\n Division of Two Number =>%d",div);
   printf("\n______________________________________\n");
   mod=No1%No2;
   printf("\n Modulo of Two Number =>%d",mod);
   printf("\n______________________________________\n");

}
