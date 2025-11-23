//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
	int num;
	int sum= 0,digit;
	printf("Enter a number: ");
	scanf("%d",&num);
	while (num>0){
	
	 digit = num%10;
    sum += digit;
	 num = num/10;
}
printf("The sum of two digits = %d\n",sum);
}
