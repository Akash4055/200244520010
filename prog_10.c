#include<stdio.h>
void main()
{
	char sex;
	int salary;
	float netsal;
	printf("enter sex and salary :");
	scanf("%c%d",&sex,&salary);
	if(sex='m'||'M')
	{
		if(salary>8000)
			netsal=salary-(salary*0.05);
		else
			netsal=salary-(salary*0.02);
	}
	else if(sex='f'||'F')
	{
		if(salary>5000)
			netsal=salary-(salary*0.03);
		else
			netsal=salary-(salary*0.01);
	}
	else
		printf("Enter valid inputs");
	printf("\n Net salary is : %f",netsal);
	getch();
}