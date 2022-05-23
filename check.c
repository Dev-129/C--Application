# include <stdio.h>
int main()
{
int Arr[5]={10,20,30,40,50};
printf("the address of arr:%d",&Arr);
//Arr++;
printf("the address of arr:%d",&Arr+1);

printf("the address of arr:%d",(&(Arr)+1));
return 0;
}