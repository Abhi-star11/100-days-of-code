//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
	int n, product = 1;
	printf("Enter the value: ");
	scanf("%d",&n);
	if(n<2)
	{
	printf("No even number up to %d\n",n);	
	}
	printf("Even numbers: \n");
	for(int i=2;i<=n;i=i+2)
	{
		product *= i;
		printf("%d\n",i);
	}
	printf("The product of first %d even number is: %d\n",n,product);
}
