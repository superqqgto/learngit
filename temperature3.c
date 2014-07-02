#include <stdio.h>
#include <stdlib.h>
/* C = (5/9)(F-32) */
int atoi_myself(char * );
int main(int argc, char ** argv)
{
    float fahr, celsius;
    float lower, upper, step;
    fahr = 32 + (9.0 / 5.0) * (atoi_myself(argv[1]));
    printf("%3.3f\n", fahr);
    return 0;
}

int atoi_myself(char * a)
{
   int i_num = 0;
   float i_num2 = 0;
   float i_sum;
   int i = 0;
   for (i = 0; a[i] != '\0' && a[i] != '.' ; i++)
   {
       i_num += a[i] -'0';
        i_num *=  10; 
   }
   i_num /= 10;

   for (i=i+1; a[i] != '\0'; i++)
   {
       i_num2 += a[i] -'0';
        i_num2 /=  10; 
   }
   i_sum = i_num + i_num2;
    return i_sum;
}
