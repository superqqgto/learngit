#include<stdio.h>

int main()
{
	int i;
	float item_rate[5], total = 0;

	printf("\n pls input the price of goods:");

	for(i = 0; i < 5; i++)
	{
		scanf("%f", &item_rate[i]);	
		total = total + item_rate[i];
	
	}
	
	printf("\n all the goods' price: %f\n", total);
	return 0;


}
