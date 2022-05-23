#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	int *q=NULL;
	int *p= NULL;
	printf("enter the size");
	scanf("%d",&size);
	p=(int*)malloc(size*sizeof(int));
	printf("Enter the Add:%d",*p);
	(int*)realloc(p,(size++)*(sizeof(int)));
	printf("Enter new add:%d",*(int*)p);
	free(p);
	free(q);
	
	
return 0;
}