#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char name[50];
};

void main()
{
	struct student s1;
	clrscr();
	s1.rno=101;
       strcpy(s1.name,"darshil");

	printf("\nstudent rollno=%d",s1.rno);
	printf("\nstudent name=%s",s1.name);

	getch();
}
