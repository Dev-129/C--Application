#include<stdio.h>

extern int Z=add(A,B);

int main()
{

int A=10,B=20;
int Z =add(A,B);

printf("print the value of Z=%d",Z);
return 0;

}