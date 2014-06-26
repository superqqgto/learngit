#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    int i, j;
    double k;
    k = atof(argv[1]);
    j = atoi(argv[2]); 
//    puts(argv[0]);
//    putchar('\n');
//    puts(argv[1]);
    for (i = 1; i < j; i++)
        k *= k;
    printf("k = %f\n", k);
    return 0;
}
