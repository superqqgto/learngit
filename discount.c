#include<stdio.h>

int main()
{
	float rate1, rate2, rate3;
	double discount, total;

	printf("\n pls input the price of first commodity:");
	scanf("%f", &rate1);	
	printf("\n pls input the price of second commodity:");
	scanf("%f", &rate2);	
	printf("\n pls input the price of third commodity:");
	scanf("%f", &rate3);	

	total = rate1 + rate2 + rate3;

	if((rate1 > 50) ||(rate2 > 50) ||(rate3 > 50) || (total > 100))
	{
		discount = 0.15 * total;
		total = total - discount;
		printf("\n price after discount: %.2f\n", total);	
	
	}
	else
		printf("\n the total price: %6.2f\n", total);



	return 0;
}
