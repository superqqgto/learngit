#include <stdio.h>

int main()
{
	int i,j,k,num;

	printf("pls input the number:\n");
	
	while(scanf("%d", &num) == 1)	
	{
	
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num-i; j++)
			printf(" ");	

		for(k=1; k<=2*i-1; k++)	
			printf("*");
			printf("\n");

	}
	for(i=1; i<=num-1; i++)
	{
		for(j=1; j<i+1; j++)
			printf(" ");
		for(k=1; k<=(2*num-1-2*i); k++)
			printf("*");
		printf("\n");

	}




	}


	return 0;
}
