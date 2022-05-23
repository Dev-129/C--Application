# include<stdio.h>
int main()
{
int ivalue=11;
char cvalue='A';
double dvalue=20.11;
float fvalue=10.11;
void *ptr=NULL;
ptr=&ivalue;
printf("the value of ivalue%d\n",*(int*)ptr);
ptr=NULL;
ptr=&fvalue;
printf("the value of fvalue%f\n",*(float*)ptr);
ptr=NULL;
ptr=&cvalue;
printf("the value of cvalue%c\n",*(char*)ptr);


return 0;
}