// Write a program to input a character and check whether it is a vowel or consonant using if-else
#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter a alphabet of your choice: ");
	scanf("%c",&alphabet);
	if((alphabet>='A'&&alphabet<='Z')||(alphabet>='a'||alphabet<='z'))
	{
		if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'||alphabet=='A'||alphabet=='E'||alphabet=='O'||alphabet=='I'||alphabet=='U')
		{
			printf("The %c is a vowel\n",alphabet);
		}
		else
		{
			printf("The %c is a consonent\n",alphabet);
		}
	}
	else
	{
		printf("Invalid input the following character is not an Alphabet\n");
	}
}
