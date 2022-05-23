#include<stdio.h>
int z=0;
extern int z=Addition(A,B);
int main()
{
	int A=10;
	int B=30;
	printf("Addition is :%d",z);
	return 0;
}