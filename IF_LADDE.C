#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;

	clrscr();

	printf("enter value of a,b,c");
	scanf("\n %d \n %d \n %d",&a,&b,&c) ;



	if(a>b && a>c)
	{
		printf("%d is maximum number",a);

	}
	else if(b>a && b>c)
	{
		printf("%d is maximum number",b);
	}
	else
	{
		printf("%d is maximum number",c);
	}

	getch();
}
