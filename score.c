#include<stdio.h>

int main()
{
	int i, j, student[3][2];
	for (i = 0; i < 3; i++)
	{
		printf("\n pls input your ID number %d the score of two terms:", i+1);	
		for (j = 0; j < 2; j++)
				scanf("%d", &student[i][j]);
	}

	printf("\n pls input your ID number and the score of two terms:\n");	
	printf("\n \t ID number \t the first term \t the second term");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t");	
		printf("%d\t", i + 1);
		for (j = 0; j < 2; j++)
			printf("%d \t\t", student[i][j]);
		printf("\n");
	}
	return 0;
}
