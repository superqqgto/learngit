#include <stdio.h>
void to_base(int a, int b);
void to_base2(int a, int b);
int main()
{
    int num1, num2;
    printf("pls input two numbers, the second number must 2~10:\n");
    scanf("%d %d", &num1, &num2);
    to_base(num1, num2);
    printf("\n");
    to_base2(num1, num2);
    printf("\n");
   return 0;
}

void to_base(int a, int b)
{
    int r;
    r = a % b;
//    printf("\n%d\n", r);
    if (a >= b)
        to_base(a/b, b);
    printf("%d", r);
//   if ( a >= 2 )
//        to_base(a/b, b);
//    printf("\n%d\n", r);
    return ;
}
void to_base2(int a, int b)
{
    int r;
    r = a % b;
//    printf("\n%d\n", r);
//    if (a >= b)
//        to_base(a/b, b);
//    printf("\n%d\n", r);
   if ( a >= 2 )
        to_base2(a/b, b);
    printf("%d", r);
    return ;
}
