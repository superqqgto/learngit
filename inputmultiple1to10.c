#include<stdio.h>

int main()
{
	int a, i, j, k, tens, units ;
	int result[10];
	char title[] = "pls input a number:(1~9)";
	
	for(i = 0; i < 26; i++)
		putchar(title[i]);
	putchar('\n');
	
	
	a = getchar();
	if((a >= 48) && (a <= 57))
	{

	for(k = 1; k <= 9; k++)
		{
			putchar(a);
			putchar('*');
			k += '0';
		//    putchar('2');	
			putchar(k);
			putchar('=');
			j = a;
			j -= '0';
			k -= '0';
			j = j * k;
			if(j >= 10)
				{
					tens = j / 10;
					tens += '0';
					putchar(tens);
					units = j % 10;
					units += '0';
					putchar(units);
					
				}
			else
			{
				j += '0';
				putchar(j);
			}
		//	printf("%d", a);
			if(k % 2 == 0)
				putchar('\n');
			else
				putchar('\t');
		}
	}
	else
			printf("\n");
			printf("\n");
		//	a += '0';
//	putchar(a);
//	putchar('\n');
/*	while((a >= 48) && (a <= 57))
		{
			
			for(k = 1; k <= 10; k++)	
			{
				result[k] =  a * k;
 //				result = result -'0';
//				printf("%d\n", result);
//				putchar('result' );	
				putchar(result[k]);		
//				putchar('\n');
			
			}
*/
//	putchar(result[1]);
/*		for(k = 1; k <= 10; k++)
		{
//		printf("%d",result[k]);		
		putchar(result[k]);		
		putchar('\n');
		}
		}
*/	
//		a = a - '0';
//		putchar(a);
//		putchar('\n');
//		printf("%d\n",a);


/*		for(k = 1; k <= 10; k++)	
		{	*/	
/*			result = a * 5;	
			printf("%d\n", result);
			putchar(result);
			putchar('\n');
*/
	//	}	

	

	return 0;

}
