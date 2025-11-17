//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
	float r,area;
	printf("Enter the value of radius: ");
	scanf("%f",&r);
	area = 3.14*r*r;
	float circumfrence = 2*3.14*r;
	printf("The area of circle is: %f\n",area);
	printf("The circumfrence of circle would be: %f\n",circumfrence);
}
