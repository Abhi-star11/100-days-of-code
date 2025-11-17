//Write a program to input three numbers and find the largest among them using if-else
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	printf("Enter the third number: ");
	scanf("%d",&num3);
	if(num1>num2&&num1>num3)
	{
		printf("The number %d is the largest\n",num1);
	}
	else if(num2>num1&&num2>num3)
	{
		printf("The number %d is the largest\n",num2);
	}
	else if(num3>num1&&num3>num2)
	{
		printf("The number %d is the largest\n",num3);
	}
	else
	{
		printf("Invalid Input\n");
	}
}
