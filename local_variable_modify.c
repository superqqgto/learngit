#include<stdio.h>
int sum = 0;
void addNumbers()
{
    int num1, num2;
   // int num1, num2, sum;�������д�Ļ���main�ǱߵĽ������0���ͽ�ԭ��
    printf("\n pls input 2 numbers:");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("value of sum in the subfunction is %d\n", sum);
}

int main()
{
    addNumbers();
    printf("value of sum in the main function is %d\n", sum);
    return 0;
}
