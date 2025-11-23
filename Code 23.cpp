/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ?2/day 
Next 5 days late: ?4/day 
Next 20 days days late: ?6/day 
More than 30 days: Membership Cancelled.*/
#include<stdio.h>
int main()
{
	int numberofdays,fine;
	printf("Enter the number of days the book has not been returned: ");
	scanf("%d",&numberofdays);
	if(numberofdays<=5)
	{
		fine = numberofdays*2;
		printf("Your fine would be: %d\n",fine);
	}
	else if(numberofdays>=6&&numberofdays<=10)
	{
		fine = numberofdays*4;
		printf("Your fine would be: %d\n",fine);
	}
	else if(numberofdays>=11&&numberofdays<=30)
	{
		fine = numberofdays*6;
		printf("Your fine would be: %d\n",fine);
	}
	else if(numberofdays>=31)
	{
		printf("Your Membership has been cancelled.\n");
	}
}

