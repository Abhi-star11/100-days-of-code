//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
	int length,breadth;
	printf("Enter the value of length: ");
	scanf("%d",&length);
	printf("Enter the value of breadth: ");
	scanf("%d",&breadth);
	int perimetre = 2*(length+breadth);
	int Area = length*breadth;
	printf("The perimetre would be: %d\n",perimetre);
	printf("The area would be: %d\n",Area);
	
}
