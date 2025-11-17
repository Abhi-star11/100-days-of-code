// Write a program to input time in seconds and convert it into hours:minutes:seconds format.
#include<stdio.h>
int main()
{
	int seconds;
	printf("Enter the time you want to convert: ");
	scanf("%d",&seconds);
	int hours = seconds/3600;
	int minutes = seconds/60;
	printf("%d:%d:%d\n",hours,minutes,seconds);
	
}
