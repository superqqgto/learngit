#include<stdio.h>

int main()
{
	int i, score[5], exchange;
	
	printf("pls input the scores of 5 students:\n");	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);	
	}
		for (i = 0; i < 5; i++)
		printf("%d\n", score[i]);


	for (i = 0; i < 4; i++)
//开始是i<5,结果越界了；
	{
		if(score[i] > score[i+1])		
//			continue;
			{
				exchange = score[i];
				score[i] = score[i+1]; 
				score[i+1] = exchange;
			}
//		continue;
	}

	printf("the score after arrange:\n");

	for (i = 0; i < 5; i++)
		printf("%d\n", score[i]);

	return 0;
}
