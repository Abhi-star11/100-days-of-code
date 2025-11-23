//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
	int num,original;
	int rev= 0,digit;
	printf("Enter a number: ");
	scanf("%d",&num);
	original=num;
	while (num!=0){
	
	 digit = num%10;
    rev = rev*10+digit;
	 num = num/10;
}
if (rev==original)
{
	printf("The number is Pallindrom\n");
}
else
{
	printf("The number is not a Pallindrom\n");
}
}
