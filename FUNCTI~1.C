#include<stdio.h>
#include<conio.h>

void sum();  //function prototype

void main()
{
    printf("\n sum of two numbers:");
    sum();                 //function call
    sum();
    getch();

}
	void sum()       //function definition
	{
	    int a,b,c,m;
	    printf("\nEnter two numbers");
	     scanf("%d %d",&a,&b);
	     c=a+b;
	    printf("The sum is %d",c);
	    m=a*b;
	    printf("mul is %d",m);
}