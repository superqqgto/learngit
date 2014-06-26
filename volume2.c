#include <stdio.h>

int main()
{
	float radius,high;
	double vol,pi = 3.1415926;	
	printf("pls input the radius &  high\n");

	scanf("%f%f", &radius, &high);
//you can press enter or space between 2 variable.
//	scanf("%f%f", &radius, &high); can do the same thing.
	vol = pi * radius * radius * high;

	printf("radius = %7.2f\n high = %7.2f\n vol = %7.2f\n", radius, high, vol);

	return 0;
}
