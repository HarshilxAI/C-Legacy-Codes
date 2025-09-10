#include<stdio.h>
#include<conio.h>

void main ()  
{  
    char s[11] = "darshil";
    int i = 0;   
    int count = 0;
    clrscr();
    while(i<11)
    {
	if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
	{
	    count ++;
	}
	i++;
    }
    printf("The number of vowels %d",count);
    getch();
}