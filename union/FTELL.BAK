/* ftell() return current file posittion
get total size of file after arrive end of file
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int len;
	clrscr();
	fp=fopen("c:\\c_prog\\union\\myfile2.txt","r");

	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	fclose(fp);
	printf("size of file=%d bytes",len);

	getch();
}
