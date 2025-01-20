#include <stdio.h>

/*
Example
	Input: a = 10, b = 5, op = +
	Output: 15.00
	Explanation: Chosen operation is addition, so 10 + 5 = 15

	Input: a = 12, b = 3, op = /
	Output: 4.00
	Explanation: The chosen operation is division, so 12 / 3 = 4
*/

void calculator()
{
	printf("Input: \n");
	
	int a,b;
	printf("\ta = ");
	scanf("%lf", &a);
	printf("\n\tb = ");
	scanf("%lf", &b);
}

int main(void)
{
	calculator();
	return 0;
}
