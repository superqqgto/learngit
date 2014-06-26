#include<stdio.h>

int main()
{
    int var = 10;
    int* ptr_var;
    ptr_var = &var;

    printf("the value of var is %d", var);
    printf("\n the address of var is: %x", &var);
    printf("\n the address of prv_var is: %x\n", &ptr_var);
    printf("\nthe address of the pointer ptr_var is");
    printf("\n make the pointer to the value var.");
    printf("\n value of var is %d", *ptr_var);
    printf("\n address of var is %x\n", ptr_var);


    return 0;
}
