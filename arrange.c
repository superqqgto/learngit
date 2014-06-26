#include<stdio.h>
#define N 5

int main()
{
	int i, j;
	int grade[N], temp;
	printf("\n input %d grades of the students:\n", N);

	for(i=0; i<N; i++)
	{
		scanf("%d", &grade[i]);	
	}
	for (i=0; i<N; i++)
	{
		for(j=0; j< N-i-1; j++)	
		{
			if(grade[j] > grade[j+1])	
			{
				temp = grade[j+1];	
				grade[j+1] = grade[j];
				grade[j] = temp;
			}
		}
	}
	printf("\n the scores after arrange:\n");

	for(i=0; i<N; i++)
	{
		printf("%d ", grade[i]);	
	}
	printf("\n");

	return 0;
}
