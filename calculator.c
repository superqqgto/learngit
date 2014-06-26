#include<stdio.h>
#include<stdlib.h>

int main()
{
	char array[15];
	char num[15], sec_num[15], symbol[15];
	int j, i, num1, num2;

	scanf("%s", array);
	for(i=0; i<14; i++)
	{
		if((array[i] >= 48) && (array[i] <= 57))	
		{
			num[i] = array[i];
		}
		else if(array[i] == 42)
				break;	
						
		else if(array[i] == 43)
				break;
		
		else if(array[i] == 45)
				break;
		
		else if(array[i] == 47)
				break;
			
		else
		{
//			printf("wrong!\n");
			break;
		}

	}
    j = i;
    symbol[0] = array[i];
    num1 = atoi(num);
    printf("%d%c", num1, array[i]);

	for(j = j + 1, i = 0; j<14; i++,j++)
	{
		if((array[j] >= 48) && (array[j] <= 57))	
		{
			sec_num[i] = array[j];
		}
//		else if(array[j] == 42)
//				break;	
//						
//		else if(array[j] == 43)
//				break;
//		
//		else if(array[j] == 45)
//				break;
//		
//		else if(array[j] == 47)
//				break;
			
		else
		{
//			printf("wrong!\n");
			break;
		}

	}
    num2 = atoi(sec_num);
    printf("%d", num2);

    if(symbol[0] == 42)
    {
        printf("= %d \n", (num1 * num2)); 
    }
    else if (symbol[0] == 43)
    {
        printf("= %d \n",  (num1 + num2)); 
    }
    else if (symbol[0] == 45)
    {
        printf("= %d \n",  (num1 - num2)); 
    }
    else if (symbol[0] == 47)
    {
        printf("= %d \n",  (num1 / num2)); 
    }


//	for (i=0; i<5; i++)
	

	

//	printf("%s", array);

	return 0;
}
