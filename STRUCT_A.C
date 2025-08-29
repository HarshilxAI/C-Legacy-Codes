#include<stdio.h>
#include<conio.h>
struct student
{
int rno;
char name[10];
};
void main()
{
	int i;
	struct student s1[3];
	clrscr();
	printf("enter 3 students record\n");
	for(i=0;i<3;i++)
	{
		printf("enter rollno:");
		scanf("%d",&s1[i].rno);
		printf("\nenter name:");
		scanf("%s",&s1[i].name);
	}
	printf("\n list of student information:");
	for(i=0;i<3;i++)
	{
		printf("\nrollno:%d",s1[i].rno);
		printf("\tenter name:%s",s1[i].name);
	}
	getch();
}