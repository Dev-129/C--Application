# include<stdio.h>
int addition(int i,int j,int k)
{
int L=0;
L=i+j+k;
return L;
}
int main()
{
int A=10,B=20,C=30,D=0;

D=addition(A,B,C);
printf("the value of addition is=%d\n",D);
return 0;
}