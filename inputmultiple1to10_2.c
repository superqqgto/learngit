#include<stdio.h>

/*		void array_output(char n)
		{
			int  i;
			for(i = 0; i <= (sizeof n) / (sizeof n[0]); i++ )
				putchar(n);
				putchar('\n');


		}
*/

char num_to_char(int m)
{
	m += '0';
	return m;
}

char char_to_num(int m)
{
	m -= '0';
	return m;
}

int split_tens(int t)
{


}
int main()
{
	int a, i, j, k, tens, units ;
	int result[10];
	char title[] = "pls input a number:(1~9)";
	
	for(i = 0; i < 26; i++)
		putchar(title[i]);
	putchar('\n');
	
//	array_output(title);

	a = getchar();
	if((a >= 48) && (a <= 57))
	{

	for(k = 1; k <= 9; k++)
		{
			putchar(a);
			putchar('*');
//			k += '0';
			k = num_to_char(k);
			putchar(k);
			putchar('=');
			j = a;
			j = char_to_num(j);
			k = char_to_num(k);
			j = j * k;
			if(j >= 10)
				{
					tens = j / 10;
					tens = num_to_char(tens);
					putchar(tens);
					units = j % 10;
					units = num_to_char(units);
					putchar(units);
					
				}
			else
			{
				j += '0';
				putchar(j);
			}
			if(k % 2 == 0)
				putchar('\n');
			else
				putchar('\t');
		}
	}
	else
			printf("\n");
			printf("\n");

	return 0;

}
