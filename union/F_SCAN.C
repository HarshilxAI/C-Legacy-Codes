#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char buff[255];
	clrscr();
	fp=fopen("c:\\c_prog\\union\\file1.txt","r");
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s ",buff);
	}
	fclose(fp);
	getch();
}
