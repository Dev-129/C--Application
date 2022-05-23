# include<stdio.h>
struct Demo
{
int iNo;
float fvalue;
//char cvalue;//not use char and double becoz padding
int ivalue;
};
int main()
{
struct Demo obj;
obj.iNo=10;
obj.fvalue=10.11;
obj.ivalue=11;
printf("%f\n",obj.fvalue);
printf("%d\n",sizeof(obj));

 return 0;
 }