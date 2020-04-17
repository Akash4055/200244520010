#include<stdio.h>
void main()
{
	int units;
	float amt;
	printf("enter no. of units consumed :");
	scanf("%d",&units);
	if(units>0 && units<=200)
		printf("Your Billing amount is : %f",units*0.5);
	else if(units>200 && units<=400)
	{
		amt=100+(units-100)*0.65;
		printf("Your Billing amount is : %f",amt); 
	}
	else if(units>400 && units<=600)
	{
		amt=230+(units-400)*0.80;
		printf("Your Billing amount is : %f",amt); 
	}
	else if(units>600)
	{
		amt=390+(units-600)*1;
		printf("Your Billing amount is : %f",amt); 
	}	
	else
	printf("enter valid unit");
	getch();
}