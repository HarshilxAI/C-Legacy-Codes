#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,t;

	clrscr();

	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);

	t=a;
	a=b;
	b=t;

	printf("after swap a=%d",a);
	printf("after swap b=%d",b);

	getch();
}