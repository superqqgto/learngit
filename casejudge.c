#include<stdio.h>
int main()
{
	char a;

	printf("\n pls input a character:");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
			printf("\n the character what you input is lowercase.\n", a);
	else
			printf("\n the character what you input is not lowercase.\n", a);

	return 0;
}
