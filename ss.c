# include<stdio.h>
int main()
{
double no=3.14;
double *a=&no;
double **b=&a;
double ***c=&b;
double ****d=&c;
printf("%d\n",sizeof(a));
printf("%d\n",sizeof(*a));
printf("%d\n",sizeof(no));

return 0;
}