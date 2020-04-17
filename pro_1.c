#include<stdio.h>
void main()
{
	int a=5,b=2;
	/* 
	//1st logic
	b=a-b;
	a=a-b;
	b=a+b;
	
	//second logic
	b=a*b;
	a=b/a;
	b=b/a;
	*/
	//third logic
	a=a^b;
	b=a^b;
	a=a^b;
	printf(" a=%d b=%d",a,b);
	getch();
}