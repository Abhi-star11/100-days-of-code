//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first side of triangle: ");
	scanf("%d",&a);
	printf("Enter the second side of triangle: ");
	scanf("%d",&b);
	printf("Enter the third side of triangle: ");
	scanf("%d",&c);
	if(a+b>c||b+c>a||c+a>b)
	{
		printf("The given triangle is Valid \n");
	}
	if(a==b&&b==c)
	{
		printf("The triangle is an equilateral triangle \n");
	}
	else if(a==b||b==c|| a==c)
	{
		printf("The triangle is an isoscles triangle \n");
	}
	else if(a!=b!=c)
	{
		printf("The traingle is scalene triangle \n");
		printf("The triangle is also an right-angled triangle \n");
	}
	else if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
	{
	printf("The triangle is right-angled triangle \n");
	printf("The triangle is a scalene triangle \n");	
	}
	
}
