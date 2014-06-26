#include <stdio.h>

void binary(unsigned long );
int main()
{
    unsigned long number;
        
    printf("enter an integer(q to quit):\n");
    while (scanf("%ul", &number) == 1)
    {
        printf("binary equivalent: ");
        binary(number);
        putchar('\n');
        printf("enter an integer (q to quit):\n");
    }
    return 0;
}

void binary(unsigned long a)
{
   int r;
   r = a % 2;
   if (a >= 2)
       binary(a/2);
   putchar(r ? '1': '0');
    return; 
}
