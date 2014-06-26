#include <stdio.h>
void larger_of(double* , double* );
int main()
{
//    double num1, num2;
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);
//    num1 = 23;
//    num2 = 34.1;
    printf("num1:%f\n", num1);
    printf("num2:%f\n", num2);
    larger_of(&num1, &num2);
    printf("num1:%f\n", num1);
    printf("num2:%f\n", num2);
    return 0;
}

void larger_of(double* x, double* y)
//void larger_of(int* x, int* y)
{
//    if (*x > *y)
//    {
//        *y = *x;
//        return *y;
//    }
//    else
//        return *y;
//    double temp = *x > *y ? *x : *y;
//    *x = *y = temp;   
    printf("num1:%f\n", (*x > *y) ? *x : *y);
    printf("num2:%f\n", (*y > *x) ? *y : *x);
    return ;
//    return(*x > *y) ? *x : *y;
//    return(*y > *x) ? *y : *x;
}
