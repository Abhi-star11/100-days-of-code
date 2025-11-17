/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include<stdio.h>
int main()
{
	float marks;
	printf("Enter the marks: ");
	scanf("%f",&marks);
	if(marks>=90&&marks<=100){
		printf("Your Grade is A\n");
	}
	else if(marks>=80&&marks<=89)
	{
		printf("Your Grade is B\n");
		
	}
	else if(marks>=70&&marks<=79)
	{
		printf("Your Grade is C\n");
		
	}
	else if(marks>=60&&marks<=69){
		printf("Your Grade is D\n");
		
	}
	else if(marks<60)
	{
		printf("Your Grade is F\n");
	}
	else {
		printf("Invalid Input\n");
	}
}
