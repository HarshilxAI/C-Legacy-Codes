#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	clrscr();
	fp=fopen("c:\\c_prog\\union\\f1.txt","w");
	fputc('a',fp);
	fclose(fp);
	getch();
}
