//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("The two numbers are %d %d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("The two numbers are %d %d\n",a,b);
	
}

