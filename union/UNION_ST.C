#include<stdio.h>
#include<conio.h>
struct store
{
	double price;
	union
	{
		struct
		{
		char *title;
		char *author;
		int num_page;
		}book;

		struct
		{
		int color;
		int size;
		char *design;
		}shirt;
      }item;
};
	void main()
	{
		struct store ss;
	       clrscr();
	       ss.item.book.title="c program";
	       ss.item.book.author="john";
	       ss.item.book.num_page=120;
	       printf("\n title is=%s",ss.item.book.title);
		printf("\n author is=%s",ss.item.book.author);
		printf("\n number of pages is=%d",ss.item.book.num_page);
	       printf("\n size of  %ld",sizeof(ss));
	       getch();
	}