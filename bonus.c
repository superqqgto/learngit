#include<stdio.h>

int main()
{
	int age;
	char gender;
	printf("\n pls input you gender:\n");
	scanf("%c", &gender);
	printf("\n pls input your age:");
	scanf("%d", &age);
	if ((gender == 'm') && (age >= 25))
			printf("\n you're qualified to have the bonus\n");
	else
			printf("\n you are not qualified to have the bonus\n");

	return 0;
}
