//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main()
{
	int n, factorial = 1;
	printf("Enter the value: ");
	scanf("%d",&n);
	if(n<0)
	{
	printf("Factorial of negative number does not exist\n");	
	}
	else if(n==0||n==1)
	{
		printf("The factorail of %d would be: 1\n",n);
	}
	else{
	
	for(int i=1;i<=n;i=i+1)
	{
		factorial *= i;
		
	}
	printf("The factorial of %d is: %d\n",n,factorial);
}

}
