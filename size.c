 # include<stdio.h>
  int main()
  {
	  int ivalue=10;
	  int *iptr=&ivalue;
	  char cvalue='A';
	  char *cptr=&cvalue;
	  float fvalue=10.11;
	  float *fptr=&fvalue;
	  double dvalue=20.11;
	  double *dptr=&dvalue;
	  printf("%d\n",& cvalue);
	   printf("%c\n",cvalue);
	   printf("%d\n",sizeof(cvalue));
	   printf("%d\n",sizeof(cptr));
	   printf("%d\n",sizeof(*cptr));
	   return o;
  }