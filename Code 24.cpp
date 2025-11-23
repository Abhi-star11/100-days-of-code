/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ?5/unit 
Next 100 units at ?7/unit 
Next 100 units at ?10/unit 
Above at ?12/unit */
#include<stdio.h>
int main()
{
	int unit,bill;
	printf("Enter the unit consumed: ");
	scanf("%d",&unit);
	if(unit<=100)
	{
		bill = unit*5;
		printf("The total bill would be: %d\n",bill);
	}
	else if(unit>=101&&unit<=200)
	{
		bill = unit*7;
		printf("The total bill would be: %d\n",bill);
	}
	else if(unit>=201&&unit<=300)
	{
		bill = unit*10;
		printf("The total bill would be: %d\n",bill);
	}
	else if(unit>=301)
	{
		bill = unit*12;
		printf("The total bill would be: %d\n",bill);
	}
}

