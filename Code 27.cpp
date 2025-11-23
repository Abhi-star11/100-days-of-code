//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum += 2*i-1;
	}
	printf("The sum of first %d odd numbers is: %d\n",n,sum);
}
