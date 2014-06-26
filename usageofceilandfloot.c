#include<stdio.h>
#include<math.h>

int main()
{
    printf("=======floor()=============");
    printf("\n floor(99.1) = %f\n", floor(99.1));
    printf("\n floor(-99.1) = %f\n", floor(-99.1));
    printf("\n floor(99.9) = %f\n", floor(99.9));
    printf("\n floor(-99.9) = %f\n", floor(-99.9));

    printf("\n=======ceil()=============");
    printf("\n ceil(99.1) = %f\n", ceil(99.1));
    printf("\n ceil(-99.1) = %f\n", ceil(-99.1));
    printf("\n ceil(99.9) = %f\n", ceil(99.9));
    printf("\n ceil(-99.9) = %f\n", ceil(-99.9));
    return 0;
}
