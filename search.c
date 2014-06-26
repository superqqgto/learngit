#include <stdio.h>
#define N 10
int main()
{
	int i;
	int num[N], search;	

	printf("\n pls input %d elements of array: \n ", N);
	for (i = 0; i < N; i++)
			scanf("%d", &num[i]);
	printf("\n pls input the number what you wanna search:");
	scanf(" %d", &search);

	for (i = 0; i < N; i++)
	{
		if(num[i] == search)	
		{
			break;	
		}
	}
	if(i<N)
		printf("\n we found the number %d in the place of NO.%d of the array!\n", i + 1, search);
	else
		printf("\n no found.\n");
	return 0;
}
