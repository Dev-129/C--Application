#include<stdio.h>
 int no=10;
void gun()
{
	register float fvalue=20.1;
	printf("value of f is%f",fvalue);
}
int main()
{
printf(" inside main");
gun();
return 0;
}
