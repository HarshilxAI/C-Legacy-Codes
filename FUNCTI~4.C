#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
void main()
{
    int a,b,result;
    clrscr();

    printf("\n sum of two numbers:");

    printf("\n Enter two numbers:");
    scanf("%d %d",&a,&b);

    result = sum(a,b);

    printf("\nThe sum is : %d",result);
    getch();
}
int sum(int a, int b)
{
    return a+b;
}