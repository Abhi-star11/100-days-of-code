//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
	int CP,SP;
	printf("Enter the cost price: ");
	scanf("%d",&CP);
	printf("Enter the selling price: ");
	scanf("%d",&SP);
	if (SP>CP)
	{
		float profit = SP-CP;
		float percentage = (profit/CP)*100;
		printf("Profit = %f\n",profit);
		printf("Profit Percentage = %f\n",percentage);
	}
	else if(CP>SP)
	{
		
		float loss = CP-SP;
		float percentage = (loss/CP)*100;
		printf("loss = %f\n",loss);
		printf("loss Percentage = %f\n",percentage);
	}
	else
	{
		printf("No Profit and Loss\n");
	}
}
