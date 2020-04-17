#include<stdio.h>
void main()
{
	char ch='a';
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("reverse case : %c",ch);
	}
	else if(ch>='a' &&ch<='z')
	{
		ch=ch-32;
		printf("reverse case : %c",ch);
	}
	else
	printf("please enter a valid character");
	getch();
}