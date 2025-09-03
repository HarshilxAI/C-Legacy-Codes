/*A variable is a name of the memory location.
 It is used to store data. 
Its value can be changed, and it can be reused many times.
type variable_list;  
*/
#include<stdio.h>
#include<conio.h>
void main()
{

	int a=10;
	long int b=20;
	float f=20.8f;
	char c='A';
	clrscr();
	printf("integer value a=%d\n",a);
	printf("float value f= %f\n",f);
	printf("long integer value=%ld\n",b);
	printf("character value c=%c\n",c);
getch();  
}
