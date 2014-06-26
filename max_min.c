#include <stdio.h>

int main()
{
	int num[5], max, min, i;
	printf("pls input 5 number:\n");

	for(i=0; i<5; i++)
	{
		scanf("%d", &num[i]);	
		printf("%d /t", num[i]);
	
	}
	
	max = num[0];
	min = num[0];

	for(i = 1; i < 5; i++)
	{
//		printf("num[%d] = %d", i, num[i]);
		if(max < num[i])	
		{				
				max = num[i];
//				printf("\n the max is: %d", max);
		}							
		if(min > num[i])
		{
				min = num[i];
//				printf("\n the min is: %d\n", min);
		}
	}
	
	printf("\n the max is: %d", max);
	printf("\n the min is: %d\n", min);
	return 0;
}
