// Write a program to find and display the sum of the first n natural numbers
#include<stdio.h>
int main()
{
	int i,n;
	int sum = 0;
	printf("Enter the number you want to calculate the sum till: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum += i;
	}
	printf("The sum of first %d natural number is: %d\n",n,sum);
	
}
