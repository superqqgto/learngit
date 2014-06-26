#include<stdio.h>

int main()
{
		int num;
		printf("\n pls input a number:");
		scanf("%d", &num);

		if((num % 2) == 0)
				printf("%d is an even.\n", num);
		else
				printf("%d is an odd.\n", num);

	return 0;
}
