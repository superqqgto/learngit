#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	FILE * fp;
	char fname[50];
	
	printf("enter the name of the file: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("failed to open file. bye\n");	
		exit(1);
	}
	
	while((ch = getc(fp)) != EOF)
			putchar(ch);
	fclose(fp);
	return 0;

}
