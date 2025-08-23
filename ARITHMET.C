
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,mul,sub;
	float div;
	clrscr();

	printf("enter number first:\n");
	scanf("%d",&a);
	printf("enter number second:\n");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("sum=%d\n",sum);
	printf("substraction=%d\n",sub);
	printf("multiplication=%d\n",mul);
	printf("division=%f\n",div);
	getch();


}