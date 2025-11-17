//Write a program to find the roots of quadratic equation and catagorize them
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float discrimenant,root1,root2,RealPart,ImgPart;
printf("Enter the first coefficient: ");
scanf("%f",&a);
printf("Enter the second coefficient: ");
scanf("%f",&b);
printf("Enter the third coefficient: ");
scanf("%f",&c);
discrimenant = (b*b) - (4*a*c);
if (discrimenant>0)
{
	root1 = (-b+discrimenant)/2*a;
	root2 = (-b-discrimenant)/2*a;
	printf("Roots are distinct and real\n");
	printf("Root1 = %f\n",root1);
	printf("Root2 = %f\n",root2);
}
if(discrimenant==0)
{
	root1=root2=-b/2*a;
	printf("Roots are real and equal\n");
	printf("Root = %f\n",root1);
}
else{
	RealPart = -b/2*a;
	ImgPart = sqrt(-discrimenant/2*a);
	printf("Roots are imaginary and complex\n");
	printf("Root1 = %f + %fi\n",RealPart,ImgPart);
	printf("Root2 = %f - %fi\n",RealPart,ImgPart);
}
}
