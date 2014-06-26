#include<stdio.h>

void addNumbers()
{
    int num1, num2, sum;
    printf("\n pls input 2 numbers:");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("value of sum in the subfunction is %d\n", sum);
}

int main()
{
    int sum = 0;
    addNumbers();
    printf("value of sum in the main function is %d\n", sum);
    return 0;
}
