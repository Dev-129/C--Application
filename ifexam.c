#include<stdio.h>
int main()
{auto int istd=0;
printf("Enter the standard\n");
scanf("%d",&istd);
if(istd== 1)
{
printf("your exam is at:8");
}
else if(istd== 2)
{
printf("your exam is at:9");
}
else if(istd== 3)
{
printf("your exam is at:10");
}
else if(istd== 4)
{
printf("your exam is at:11");
}
else if(istd== 5)
{
printf("your exam is at:12");
}
else 
{
printf("invalid standard\n");}
return 0;
}