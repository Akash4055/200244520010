#include<stdio.h>
void main()
{
	int marks;
	printf("Enter Your marks");
	scanf("%d",&marks);
	if(marks>=0 && marks<=100)
	{
		if(marks>=75)
			printf("\n grade A");
		else if(marks>=55 && marks<=75)
			printf("\n grade B");
		else if(marks>=35 && marks<=55)
			printf("\n grade C");
		else
			printf("Fail");
	}
	else
		printf("Enter valid marks");
	getch();
}