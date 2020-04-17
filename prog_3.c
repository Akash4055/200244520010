#include<stdio.h>
void main()
{
	int year;
	printf("Enter a year :\t  ");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			printf("It's a Leap Year");
			else
				printf("It's not Leap Year");
		}
		else
				printf("It's  Leap Year");
	}
	else
				printf("It's not Leap Year");
	getch();
}