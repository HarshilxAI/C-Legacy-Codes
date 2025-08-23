#include<stdio.h>
#include<conio.h>
void main()
{
    char sname[5][5]={"abc","def","hij","aaa","bbb"};
    int rollno[5]={1,2,3,4,5};
    int i;
    clrscr();
    for(i=0;i<5;i++)
    {
	printf("sname=%s \t rollno=%d\n",sname[i],rollno[i]);
    }
    getch();
    
}