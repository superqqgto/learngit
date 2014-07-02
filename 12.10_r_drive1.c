#include <stdio.h>
extern void srand1(unsigned int x);
extern int rand1(void);

int main()
{
    int count;
    unsigned seed;
    printf("pls enter your choice for see.\n");
    while (scanf("%u", &seed) == 1)
    {
        srand1(seed);
        for (count = 0; count < 5; count++)
            printf("%hd\n", rand1());
        printf("pls enter next see (q to quit):\n");
    }
    printf("done\n");
    return 0;
}
