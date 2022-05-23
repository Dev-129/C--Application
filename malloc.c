#include<stdio.h>
# include<stdlib.h>
int main()
{
int arr[5];
int size =0;
int *ptr=NULL;
printf(" Enter the no element:");
scanf("%d",&size);
ptr=(int*)malloc(size*sizeof(int));

if(ptr==NULL)
{
printf("unable to allocate memory");
}
else
{
printf("memory allocate succesfully");} 
free(ptr);

return 0;

 }
