#include<stdio.h>
int main()
{
void*p=NULL;
int ivalue=11;
double d value=23.11;
char cvalue='A';
p=&ivalue;
printf("the value of ivalueis:%d",*(*int)p);
p=&cvalue;
printf("the value of cvalueis:%d",*(*char)p);
printf("the address of ivalueis:%u",&*(*int)p);
printf("the address of ivalueis:%u",&*(*int)p);





return 0;
}