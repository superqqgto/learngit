#include<stdio.h>

int main()
{
	int a, b, c, d;
	int sum, product;
	float quetient;
	int remainder, minus, increase, decrease;
	a = 15;
	b = 11;
	c = 25;
	d = 12;
	sum = a + b;
	minus = a - b;
	product = a * b;
	remainder = a % b;
	increase = ++c;
	decrease = --d;

	printf("sum = %d\n", sum);
	printf("minus = %d\n", minus);
	printf("product = %d\n", product );
	printf("remainder = %d\n", remainder);
	printf("increase = %d\n", increase);
	printf("decrease = %d\n", decrease);
	


	return 0;
}
