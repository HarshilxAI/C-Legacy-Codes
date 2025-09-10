#include<stdio.h>  
#include <string.h>
void main()
{
	char name[6];
	clrscr();
	printf("Enter your name: ");
	gets(name); //reads string from user
	printf("Your name is: ");
	puts(name);  //displays string
	getch();
	}