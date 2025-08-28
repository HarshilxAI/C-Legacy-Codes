/* store address of variable
size of pointer is 2 byte */

#include<stdio.h>
#include<conio.h>

	void main()
	{
		int n=50;
		int *p;
		clrscr();

		p=&n;
		printf("Address of p variable is %x \n",p);
		printf("Value of p variable is %d \n",*p);
	getch();
	}