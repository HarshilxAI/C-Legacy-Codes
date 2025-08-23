#include<stdio.h>
#include<conio.h>
void main()
{
	char car[10][10]={"BMW","celerio","swift","eco"};
	int rno[3],i;
	clrscr();

	printf("\nfirst way of array");
	for(i=0;i<=3;i++)
	{
		printf("\n");
		printf("car[%d]=%s",i,car[i]);
	}
	printf("\n................................. ");
	printf("\n second way of array");
	rno[0]=1;
	rno[1]=2;
	rno[2]=3;
	for(i=0;i<3;i++)
	{
		printf("\n");
		printf("rno[%d]=%d",i,rno[i]);
	}

	getch();
}