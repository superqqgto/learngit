#include<stdio.h>
void sort1(int a[80], int x)
{
    int i, j;
    int temp;
    for(i=0; i <= (x - 1); i++) 
    {
        for(j=0; j <= (x - i - 1); j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];        
                a[j+1] = temp;
            }
        }
    }
}

void print1(int a[80], int x)
{
    int i;
    for(i = 0; i <= x-1; i++)
    {
        printf("%d", a[i]); 
    }
}
void sort(char a[80], int x)
{
    int i, j;
    char temp;
    for(i=0; i <= (x - 1); i++) 
    {
        for(j=0; j <= (x - i - 1); j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];        
                a[j+1] = temp;
            }
        }
    }
}

void print(char a[80], int x)
{
    int i;
    for(i = 0; i <= x-1; i++)
    {
        printf("%c", a[i]); 
    }
}
int main()
{
    char array[80], num[80], upper[80], lower[80], temp;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int x, y, z, num1[80];

    scanf("%s", array); 
//    print(array);
    while(array[i] != '\0')
    {
        if((array[i] >= 48) && (array[i] <= 57)) 
        {
            num[j] = array[i];
//           printf("jjjjjjjj%d, %c\n", i, array[i]);
//           printf("eeeeeeee%d, %c\n", j, num[j]);
            j++; 
        }        
        if((array[i] >= 65) && (array[i] <= 90)) 
        {        
           upper[k] = array[i];
//           printf("jjjjjjjj%d, %c\n", i, array[i]);
//           printf("eeeeeeee%d, %c\n", k, upper[k]);
//           i++; 
           k++; 
        }        
        if((array[i] >= 97) && (array[i] <= 122)) 
        {       
           lower[l] = array [i];
//           printf("jjjjjjjj%d, %c\n", i, array[i]);
//           printf("eeeeeeee%d, %c\n", k, lower[l]);
           l++;
//            i++;
        }
        i++;
   }
    x = j;
    y = k;
    z = l;
//    for(j=0; j<=x-1; j++)
//    {
//        printf("num[%d] = %c", j, num[j]); 
//    }
//    sort(num, x); 
//    print(num, x);
    printf("\n");
    sort(upper, y); 
    print(upper, y);
    printf("\n");
    sort(lower, z); 
    print(lower, z);
    printf("\n");

    printf("char to integer.\n");
    for(i=0; i<=x-1; i++)
    {
        num1[i] = num[i] - '0';
//        printf("%d", num1[i]);
    }
    sort1(num1, x); 
    printf("\n");
    print1(num1, x);
    printf("\n");
    return 0;
}
