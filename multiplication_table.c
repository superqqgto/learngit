#include<stdio.h>
int main()
{
    int multiplier1, multiplier2;
    printf("the multiplication table as below:\n");
    multiplier1 = 1;
    do
    {
        for (multiplier2 = 1; multiplier2 <= multiplier1 ; multiplier2++ ) 
        {
           printf("%d * %d = %d\t", multiplier1, multiplier2, multiplier1 * multiplier2); 
        }
        printf("\n");
        multiplier1++; 
    } while (multiplier1 <=9);
    return 0;
}
