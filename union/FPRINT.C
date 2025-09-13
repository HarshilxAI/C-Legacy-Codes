#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	clrscr();
	fp=fopen("c:\\c_prog\\union\\file1.txt","w");
	fprintf(fp,"hello how are you...\n");
	fclose(fp);
	getch();
}

