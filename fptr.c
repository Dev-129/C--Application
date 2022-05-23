#include<stdio.h>
int addition(int No1,int No2)
{
int ans=0;
ans=No1+No2;
return ans;
}
int main()
{
int a=10,b=20;
int ret;
//ret=addition(a,b);
int(*fptr)(int,int);
fptr=addition;
printf("the address of addition%u\n",addition);   
ret=fptr(a,b);
printf("addition ofno:%d\n",ret);
return 0;
}