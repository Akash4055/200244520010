#include<stdio.h>
void main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	if(num%3==0)
	{
		if(num%7==0)
			printf("Three - Seven");
		else
			printf("Three");
	}
	else if(num%7==0)
		printf("Seven");
	else
		printf("Not by both");
	getch();
}