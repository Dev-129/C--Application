#include<stdio.h>
struct demo
{
int i;
int j;
};
struct hello
{
float f;
int no;
struct demo dobj;
};
int main()
{
struct hello hobj;
hobj.f=10.11;
hobj.no=11;
hobj.dobj.i=10;
hobj.dobj.j=51;
printf("the value of i=%d",hobj.dobj.i);
printf("the size of hobj=%d",sizeof(hobj));
//printf("the size of dobj=",sizeof(dobj)); size not there becoz its declear only in struct hello


return 0;
}
