//Write a program to calculate simple and compound interest for given principle,rate and time
#include<stdio.h>
int main()
{
	int principle,time;
	float rate;
	printf("Enter the principle value: ");
	scanf("%d",&principle);
	printf("Enter the rate of intrest: ");
	scanf("%f",&rate);
	printf("Enter the time: ");
	scanf("%d",&time);
	int Simpleintrest = principle*rate*time/1000;
	printf("The simple and compund intrest would be: %d\n",Simpleintrest);
	
}
