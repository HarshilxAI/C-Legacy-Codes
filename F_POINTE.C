#include<stdio.h>
#include<conio.h>
int add();      //function prototype
void main()
{
	int r;
	int (*p)(); //pointer to function declaration
	clrscr();
	p=&add;    //address of function
	r=(*p)();  //call pointer to function
	printf("\n address of function=%d",p);
	printf("\naddition=%d",r);
	getch();

}
int add()
{
	int a,b;
	printf("\nenter a");
	scanf("%d",&a);
	printf("\nenter b");
	scanf("%d",&b);
	return a+b;
}
