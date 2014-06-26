#include<stdio.h>

int to_binary(int );
int main()
{
    int number;
    printf("pls input the number you wanna transform:\n");
    scanf("%d", &number);
    printf("the number after transform:\n");
    printf("%d", to_binary(number));
//    用这个会多个1出来，原因不明；
//    to_binary(number);
    printf("\n");

    return 0;
}

int to_binary(int a)
{
    int r;
    r = a % 2;
//    printf("\n%d\n", r);
    if (a >= 2)
    {
        to_binary(a/2);
//        printf("ssss" );
    }
//    return r;
//    printf("%d", r);
//    putchar(r+'0');
}
