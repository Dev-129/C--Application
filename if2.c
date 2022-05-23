#include<stdio.h>
// 0 to 10 100,10 to 40 500,40 to 300
int main()
{
	auto int iage=0;
	printf("Enter your age\n");
	scanf("%d",&iage);
	if((iage>=0)&&(iage<=10))
	{
		printf("your ticket amout :100");
	}
	else if((iage>10)&&(iage<=40))
	{
		printf("your ticket amout :500");
	}
	else if(iage>40)
	{
		printf("your ticket amout :300");
	}
		return 0;
}