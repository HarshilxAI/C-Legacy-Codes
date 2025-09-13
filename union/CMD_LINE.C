#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	printf("program name is:%s\n",argv[0]);
	if(argc<2)
	{
		printf("no argu passed through command line\n");
	}
	else
	{
		printf("first argu is=%s\n",argv[1]);
	}
	getch();
}