#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	int c;
	clrscr();

	printf("enter valu of a:");
	scanf("%d",&a);

	printf("\n enter value of b:");
	scanf("%d",&b);

	printf("\n enter option");
	scanf("%d",&n);


	switch(n)
	{
		case 1:
			c=a+b;
			printf("\n sum=%d",c);
			break;
		case 2:
			c=a-b;
			printf("\n sub=%d",c);
			break;
		case 3:
			c=a*b;
			printf("\n mul=%d",c);
			break;
		case 4:
			c=a/b;
			printf("\n div=%d",c);
			break;
		default:
			printf("\n enter valid option");
			break;
	}
	getch();
}
