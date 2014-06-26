#include<stdio.h>

int main()
{
    int *ptrnum1, *ptrnum2;
    int value = 1;

    ptrnum1 = &value;
    printf("the address of ptrnum1 is %x\n", ptrnum1);
    printf("the address of ptrnum1 is %d\n", ptrnum1);
    value += 10;
    ptrnum1 += value;
    printf("the address of ptrnum1 is %x\n", ptrnum1);
    printf("the address of ptrnum1 is %d\n", ptrnum1);
    ptrnum2 = &value;
    if(ptrnum1 == ptrnum2)
        printf("\n two pointers direct the same address\n");
    else
        printf("\n two direct different address\n ");

    return 0;
}
