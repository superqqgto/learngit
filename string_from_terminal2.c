#include<stdio.h>

void sort(char a[80])
{
    int i, j;
    char temp;
    for(i=0; i <= (79 - j); i++) 
    {
        for(j=0; j <= 79; j++)
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

void print(char a[])
{
    printf("array after sort:");
    printf("%s\n", a); 
}
int main()
{
    char array[80], num[80], upper[80], lower[80], temp;
    char *ptr, *ptr2, *ptr3, *ptr4;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    ptr = array;


    scanf("%s", array); 
//    gets(array);
    print(array);
//    for (i=0; i<=79; i++)
    while(array[i] != '\0')
    {
        if((array[i] >= 48) && (array[i] <= 57)) 
        {
            num[j] = array[i];
//          temp = array [i];
//            num[j] = temp;
//            ++j;
//            ++i;
           printf("jjjjjjjj%d, %c\n", i, array[i]);
           printf("eeeeeeee%d, %c\n", j, num[j]);
//            i++;
            j++; 
        }        
//        if((array[i] >= 65) && (array[i] <= 90)) 
//        {        
//           upper[k] = array[i];
//           printf("jjjjjjjj%d, %c\n", i, array[i]);
//           printf("eeeeeeee%d, %c\n", k, upper[k]);
////           i++; 
//           k++; 
//        }        
//        if((array[i] >= 97) && (array[i] <= 122)) 
//        {       
//           lower[l] = array [i];
//           printf("jjjjjjjj%d, %c\n", i, array[i]);
//           printf("eeeeeeee%d, %c\n", k, lower[l]);
//           l++;
////            i++;
//        }
        i++;
   }
    for(j=0; j<=79; j++)
    {
        printf("num[%d] = %c", j, num[j]); 
    }
//    sort(num); 
//    print(num);
//    sort(upper); 
//    print(upper);
//    sort(lower); 
//    print(lower);
 
    return 0;
}
