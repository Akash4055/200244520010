#include<stdio.h>
void main()
{
	char ch='\0';
	printf("Enter a character");
	scanf("%c",&ch);
	if(ch=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
		printf("It's a vowel");
	else
		printf("It's not a vowel");
	getch();
}