#include<stdio.h>
void main()
{
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	if(num/2==0)
		printf("Even number");
	else
		printf("Odd Number");
	getch();
}