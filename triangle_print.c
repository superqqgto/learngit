#include<stdio.h>
void display();

int main()
{
	printf("\n equilateral triangle display \"*\"");
	printf("\n--------------------\n");
	display();
	printf("\n");

	return 0;
}

void display()
{
	int i, j, k;
	for (i = 1; i <= 6; i++)
	{
		for(j = 1; j<= 6 - i; j++)
				printf(" ");
		for(k = 1; k <= 2 * i - 1; k++ )
		
				printf("*");
				printf("\n");
		
	}
}
