#include<stdio.h>

int main()
{
    int array[80], array1[80], a;
    int i = 0;
    int j = 0;
    int temp;
    int b = 0;
    int e = 0;
    int c = 0;
    
    printf("pls input some numbers you want, q to quit\n");
    while(scanf("%d", &array[i]) == 1)
    {
        i++; 
        if (i>=80)
            break;
    }
    temp = array[0];    
    if(i != 0)
    {
        for (a = 1; a <= i-1; a++)
        {
            if(array[a] > temp) 
            
               temp = array[a]; 
        }
        for (a = 0; a <= i-1; a++)
        {
            if(temp == array[a]) 
            {
                j++;
                array1[j] = a; 
                c = j ;
//                printf("%d\n",c);
//                printf("%d\n",a);
//                printf("%d\n", array[a]);
            }
        }
            printf("the max number is : %d\n", temp);
            printf("the index of the max number is :%d\n", a-1);
            if(j != 0)
            {
                printf("if there are some number are the same, their index is: "); 
//                printf("%d ", c);
                for(j = 1; j <= c; j++) 
                {
                        printf("%d ", array1[j] );
                }
                printf("\n");
            }
        

    }

    else
        printf("byebye\n");
    return 0;
}
