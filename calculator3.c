#include<stdio.h>
#include<stdlib.h>

int main()
{
	char array[15];
	char num[15], sec_num[15], symbol[15];
	int j, k, i, num1, num2, arry2[15], symbol2[15];
    int *ptr_sym;
    ptr_sym = symbol2;
	scanf("%s", array);
    for (i = 0, j = 0; i < 14; j++;i++)
    {
//        if(array[i] == '(' || array[i] ==')' || array[i] =='*' ||array[i] =='/' ||array[i] =='+' ||array[i] =='-' ) 
        if(array[i] == '(' || array[i] ==')') 
            symbol2[j] = i;
    }

    for (i = symbol2[0]+1; i < symbol2[1]; j++)
    {
        if (array[i] == '/' || array[i] == '*')
        {
            for ()
            if(array[symbol2[j]] == '/' || array[symbol2[j]] == '*')
            {
                if (array[symbol2[j]+1])
                for (i = symbol2[j]+1, k = 0; i < symbol2[j+1]; k++; i++)
                    num[k] = array[i];
            }
        }
    }
        {
            num[j] = array[i];
            j++;
        }

        if((array[i] =='*') ||(array[i] == '/'))
            symbol[i] = i;

        arry2[0] = atoi(num);
        arry2[1] = array[i];  
        i = i + 1;
     for(j=0; j<14, i <= 14; i++, j++)
	 {
		if((array[i] >= 48) && (array[i] <= 57))	
            num[j] = array[i];
     }
       arry2[2] = atoi(num);
       arry2[3] = array[i];  
       i = i + 1;
	
    if(arry2[1] == 42)
    {
        printf("= %d \n", (arry2[0] * arry2[2])); 
    }
    else if (arry2[1] == 43)
    {
        printf("= %d \n",  (arry2[0] + arry2[2])); 
    }
    else if (arry2[1] == 45)
    {
        printf("= %d \n",  (arry2[0] - arry2[2])); 
    }
    else if (arry2[1] == 47)
    {
        printf("= %d \n",  (arry2[0] / arry2[2])); 
    }


//	for (i=0; i<5; i++)
	

	

//	printf("%s", array);

	return 0;
}
