#include <stdio.h>

int main()
{
//    char * p1 = "Klingon";//运行时异常中断；
    char p1[50] ="Klingon";//可正常运行；
    p1[0] = 'F';
    printf("Klingon");
    printf(": Beware the %ss!\n", "Klingon");

    return 0;
}
