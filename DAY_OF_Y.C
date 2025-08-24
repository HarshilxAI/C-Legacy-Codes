#include<stdio.h>
#include<conio.h>
void main()
{
	int n,y,y1,m,d;

	clrscr();

	printf("enter number year");
	scanf("\n %d",&n) ;

	y=n/365;
	printf("\n%d year=",y);

	y1=n%365;
	m=y1/360;
	printf("\n %d month=",m);

	d=y1%30;
	printf("\n %d day=",d);

	getch();
}

