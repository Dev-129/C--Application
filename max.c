#include<stdio.h>
int main()
{
int i=0,j=0;
printf("Enter 1st no:");
scanf("%d",&i);
printf("Enter 2nd no:");
scanf("%d",&j);
if(i>j)
{printf("i is max:%d",i);}
else{printf("j is max %d",j);}
return 0;
}