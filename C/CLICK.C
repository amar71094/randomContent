#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

struct abc
{
char name[20];
};

void main()
{      struct abc p;
	int x,y;
	union REGS in,out;
	in.x.ax=1;
	int86(0X33,&in,&out);

	clrscr();
	printf("Enter name\n");
	gets(p.name);
		clrscr();
	printf("Australia\n");

	while(!kbhit () )
	{
		in.x.ax = 3;
		int86 (0X33,&in,&out);
	 if(out.x.bx==1)
	{
	       x=  out.x.cx ;
	       y= out.x.dx;
	}
	 if( x >=0 && x<=70 && y <=10)

	      {


		 {  printf("name is %s",p.name);
		 break;
		} }
	 delay(100);
		}
getch();
}


