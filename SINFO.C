#include<stdio.h>
#include<conio.h>
void main()
{
	char n,add,bdate;
	clrscr();

	printf("enter name=\n");
	scanf("%s",&n);

	printf("\n enter address=\n");
	scanf("%s",&add);

	printf("\n enter birth date=\n");
	scanf("%s",&bdate);

	printf("name= %c",n);
	printf("\n address= %s",add);
	printf("\n birth date= %s",bdate);

	getch();
}
