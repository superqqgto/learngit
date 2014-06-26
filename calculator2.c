#include<stdio.h>

int main()
{
	int array[15];
//	char num1[15];
	int i, num1, num2;
    char symbol;

//    scanf("%d%c%d", &num1, &symbol, &num2);	
    gets(array); 
    
    for(i = 0; i <= 14; i++)
    {
        if(array[i] >=)
        num1[i] = array[i]; 
    
    }


    if(symbol == 42)
    {
        printf("%d * %d = %d\n", num1, num2, (num1 * num2)); 
    }
    else if (symbol == 43)
    {
        printf("%d + %d = %d\n", num1, num2, (num1 + num2)); 
    }
    else if (symbol == 45)
    {
        printf("%d - %d = %d\n", num1, num2, (num1 - num2)); 
    }
    else if (symbol == 47)
    {
        printf("%d / %d = %d\n", num1, num2, (num1 / num2)); 
    }



	

//	printf("%s", array);

	return 0;
}
