#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	char fname[30];
	int fd=0;
	
	printf("Enter the File name you want to creat\n");
	scanf("%s",fname);
	fd=creat(fname,0777);
	if(fd==-1)
	{
		printf("Unable to creat file\n");
	}else
	{
		printf(" file Successfully creat%d\n",fd);   //3
	}
	return 0;
}

//user
//owner
//Group
//Other
//Opration
  //read 4
  //write 2
  //execute 1