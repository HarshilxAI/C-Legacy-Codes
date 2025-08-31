#include<stdio.h>
#include<conio.h>
struct	 address
{
	int pin;
	char city[20];
	char phone[14];
};
struct employee
{
	char name[20];
	struct address add;



};
void display(struct employee);
void main()
 {
	struct employee e1;
	clrscr();
	printf("\n enter employee info\n");
	scanf("%s",e1.name);
	printf("\nenter city=");
	scanf("%s",e1.add.city);
	printf("\nenter pin=");
	scanf("%d",&e1.add.pin);
	printf("\nenter phone=");
	scanf("%s",e1.add.phone);

	display(e1);
	getch();
 }

 void display(struct employee e1)
 {
	printf("\n detail is......");
	printf("\n name=%s",e1.name);
	printf("\n  city=%s",e1.add.city);
	printf("\n pin=%d",e1.add.pin);
	printf("\n phone=%s",e1.add.phone);
 }