#include <stdio.h>
#include <float.h>

void calculater()
{
	char op;
	double a, b, res;

	printf("Enter an operator (+ , - , * , /): ");
	scanf("%c", &op);

	printf("Enter the first operand: ");
	scanf("%lf", &a);
	
	printf("Enter the second operand: ");
	scanf("%lf", &b);

	switch(op)
	{
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			res = a / b;
			break;
		default :
			printf("Error! Incorrect Operator Value\n");
			res = -DBL_MAX;
	}

	if(res != -DBL_MAX)
	{
		printf("%.2lf\n", res);
	}
}

int main()
{
	calculater();
	return 0;
}
