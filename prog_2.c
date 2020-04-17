#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		printf("highest number is : %d",a);
	else if(b>a && b>c)
		printf("highest number is : %d",b);
	else
		printf("highest number is : %d",c);
	getch();
}