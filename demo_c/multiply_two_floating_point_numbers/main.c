#include <stdio.h>

float multiply(float a, float b)
{
	return a * b;
}

int main()
{
	float a = 12.34f;
	float b = 34.26f;

	float result = a * b;

	printf("result: %.3f\n", result);

	return 0;
}
