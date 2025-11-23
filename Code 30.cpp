//Write a program to reverse a number
#include<stdio.h>
int main()
{
	int num;
	int rev= 0,digit;
	printf("Enter a number: ");
	scanf("%d",&num);
	while (num!=0){
	
	 digit = num%10;
    rev = rev*10+digit;
	 num = num/10;
}
printf("The reversed number is: %d",rev);
}
