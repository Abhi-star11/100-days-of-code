//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
	float cel;
	printf("Enter the value of celsius: ");
	scanf("f",&cel);
	float fahreneit = (cel*9.0/5.0)+32;
	printf("The value of fahreneit is: %2f\n",fahreneit);
}
