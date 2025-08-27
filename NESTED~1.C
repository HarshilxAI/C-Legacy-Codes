#include <stdio.h>  
#include<conio.h>
void main()  
{  
   int n,i,j;
   clrscr();  
   printf("Enter the value of n :");  
   scanf("%d",&n);

     for(i=1;i<=n;i++)  // outer loop
      {
       for(j=1;j<=10;j++)  // inner loop
       {  
	   printf("%d\t",i*j); // printing the value.
       }
       printf("\n");

   }  
getch();
}