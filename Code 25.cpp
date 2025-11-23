//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
	float a,b,result;
	char op;
	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("Enter the second number: ");
	scanf("%f", &b);
	printf("Enter the operator you want: ");
	scanf("%s", &op);
	
	switch (op)
	{
		case '+': result = a+b;
		break;
		case '-' : result = a-b;
		break;
		case '*': result = a*b;
		break;
		case '/' :
		if(b !=0){
		 result = a/b;}
		 else{
		 	printf("Undefined\n");
		 }
		break;
		case '%' : result = (int)a+(int)b;
		break;
		default : printf("Invalid opertor\n");
			}
			printf("Result = %.2f\n",result);
}
