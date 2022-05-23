#include<stdio.h> // compilar  location<> bracket
#include"dipss.h"// current directroy jite c. file ahe titeh .h file save ahe
int main()
{struct demo obj;
printf("inside main\n");
printf(" value of macro:%d\n",MAX);
printf("size of structure %d\n",sizeof(obj));  
fun();

return 0;
}
void fun()
{
printf("inside fun\n");
}