/* store address of variable
size of pointer is 2 byte*/

#include<stdio.h>  
#include<conio.h>

	void main()
	{
	int number=50;
	int *p;
	p=&number;
	printf("Address of p variable is %x \n",p);
	printf("Value of p variable is %d \n",*p);
	getch();
	}