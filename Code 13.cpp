//Write a program to input a year and check whether it is a leap year or not using conditional statement
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year you want to check: ");
	scanf("%d",&year);
	if((year%400==0)||(year%4==0&&year%100 !=0))
	{
		printf("The year %d is a leap year\n",year);
	}
	else
	{
		printf("The year is not a leap year\n");
	}
}
