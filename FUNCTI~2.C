#include<stdio.h>
#include<conio.h>


void average(int , int , int , int , int)  ;

void main()
{
    int a,b,c,d,e;
    clrscr();
	printf("\n average of five numbers:");
	printf("\n Enter five numbers:");
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	    average(a,b,c,d,e);
	getch();
}
void average(int x, int y, int z, int m, int n)
{
    float avg;
    avg = (x+y+z+m+n)/5;
    printf("The average of given five numbers : %f",avg);
}