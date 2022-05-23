# include<stdio.h>
void demo()
{
auto int A=10;
A++;
printf("the value of A:%d",A);
}
void hello()
{
static int B=10;
B++;
printf("the value of B:%d",B);
}

int main()
{
demo();
demo();
hello();
hello();
return 0;
}