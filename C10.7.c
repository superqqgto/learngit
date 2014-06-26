#include <stdio.h>

void copy_ptr (double const * source, double * target2, int n);
void copy_arr (double const source[], double target1[], int n);
int main()
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    double source2[7] = {21.1, 2.2, 3.3, 4.4, 55.2, 3, 4};
    int i;
    copy_arr(source, target1, 5);
    for (i = 0; i < 5; i++)
        printf("%f ", target1[i]);
    putchar('\n');
    copy_ptr(source, target2, 5);
     for (i = 0; i < 5; i++)
        printf("%f ", *(target2+i));
    putchar('\n');
     copy_ptr(source2+3, target3, 3);
     for (i = 0; i < 3; i++)
        printf("%f ", *(target3+i));
     putchar('\n');
}

void copy_arr (double const source[], double target1[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        target1[i] = source[i];
    return;
}
void copy_ptr (double const * source, double * target2, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *(target2+i) = *(source+i);
    return;
}
