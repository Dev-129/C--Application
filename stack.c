#include<stdio.h>
////////////////////////////////////////
///function name: Addition
///input:         2 integer
///output:        1 integer
///Author:        Dipali kuratkar
///Date:          5/6/2022
///
////////////////////////////////////////
int Addition(int no1,int no2)
{
int iret=0;
iret=no1 +no2;
return iret;
}
int main()
{
int ivalue1= 0, ivalue2= 0; 
int isum=0;
printf("Enter the first value:\n");
scanf("%d",&ivalue1);
printf("Enter the second value:\n");
scanf("%d",&ivalue2);
isum=Addition(ivalue1,ivalue2);
printf("the addition is:%d\n",isum);

return 0;

}

