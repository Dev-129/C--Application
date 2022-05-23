#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	char fname[30];
	int fd=0;  //file description
    char Data[15];
	printf("Enter the File name you want to open\n");
	scanf("%s",fname);

	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}else
	{
		printf(" file Successfully open file%d:\n",fd);   //3
	}
	lseek(fd,4,0);  //1:file descriptor is the num given to specific name
	//  Displacement kitine halchal
	//kutun 0:start,1:current,2:end
	read(fd,Data,9);
	//printf("Data from the file is:%s\n",Data);
	write(1,Data,9);
	close(fd);
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