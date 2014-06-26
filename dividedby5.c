#include<stdio.h>

int main()
{
	int num;
	
	printf("\n pls input a number:");
	scanf("%d", &num);

	if(!(num % 5))
			printf("\n the number can be divided by 5\n");
	else
			printf("\n the number can not be divided by 5\n");

	return 0;
}
