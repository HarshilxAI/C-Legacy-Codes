#include<stdio.h>
#include<conio.h>

void main ()
{
    int i, j,temp;

    int a[4] = { 10, 9, 7, 101};
    clrscr();
    for(i = 0; i<4; i++)
    {
	for(j = i+1; j<4;j++)
	{
	    if(a[j] < a[i])
	    {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	    }
	}
    }
    printf("Printing Sorted Element List ...\n");
    for(i = 0; i<4; i++)
    {
	printf("%d\t",a[i]);
    }
    getch();
}