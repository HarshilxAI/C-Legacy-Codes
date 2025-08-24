#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,number=0;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&number);

	do
	{
		printf("%d * %d=%d \n",number,i,(number*i));
		i++;
	}while(i<=10);

	getch();
}