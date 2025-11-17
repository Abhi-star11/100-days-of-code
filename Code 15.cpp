//Write a program to input a character and check whether it is an uppercase alphabet, Lowecase alphabet, digit or special character
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("The following %c character is an Upercase alphabet\n",ch);
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("The following %c character is a lowercase alphabet\n",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("The following %c character is a digit\n",ch);
	}
	else if(ch=='!'||ch=='@'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'||ch=='?')
	{
		printf("The following %c character is a special symbol\n",ch);
	}
	else
	{
		printf("Invalid Input");
	}
}
