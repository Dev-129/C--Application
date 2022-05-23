#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	char fname[30];
	int fd=0;  //file description

	printf("Enter the File name you want to open\n");
	scanf("%s",fname);
	char Data[15]="dipali kuratkr";
	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}else
	{
		printf(" file Successfully open file%d:\n",fd);   //3
	}
	write (fd,Data,14);
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