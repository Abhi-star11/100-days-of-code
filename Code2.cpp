//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("Enter the first integer: ");
	scanf("%d",&a);
	printf("Enter the second integer: ");
	scanf("%d",&b);
	int sum = a+b;
	int diffrence = a-b;
	int product = a*b;
	int quotient = a%b;
	printf("The value of sum is: %d\n",sum);
	printf("The value of diffrence is: %d\n",diffrence);
	printf("The value of product is: %d\n",product);
	printf("The value of quotient is: %d\n",quotient);
}
