//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main()
{
	int num,original,digit,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	original = num;
	while(num>0)
	{
		digit = num%10;
		sum += digit*digit*digit;
		num = num/10;
	}
	if(sum==original)
	{
		printf("The number is an Armstrong number.\n");
	}
	else
	{
		printf("The number is not an Armstrong number.\n");
	}
}
