#include<stdio.h>
#include<string.h>
 int main()
 {
	 char Arr[5]={'a','b','c','d','\0'};
	 char Brr[6]= "dipss";
	 printf("%s\n",Arr);
	 printf("%s\n",Brr);
     printf("%c\n",Arr[0]);
     printf("%c\n",Arr[1]);
     printf("%c\n",Arr[2]);
     printf("%c\n",Arr[3]);
	 printf("size of string of Arr:%d\n",sizeof(Arr));
	 printf("size of strig of Brr:%d\n",sizeof(Brr));
	 printf("length of strig of Arr:%d\n",strlen(Arr));
	 printf("length of strig of Brr:%d\n",strlen(Brr));
	 
	 return 0;
 }