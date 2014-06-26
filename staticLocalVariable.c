#include<stdio.h>
void format();
int main()
{
    int i;
    for(i = 0; i < 50; i++)
    {
        printf("%d", i); 
        format();
    }
    return 0;
}

void format()
{
    static int m = 0;
    //如果去掉static就输出不了还行
    m++;
    if (m % 10 == 0)
        putchar('\n');
    else
        putchar(' ');

}
