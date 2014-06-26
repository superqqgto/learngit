#include<stdio.h>
#include<string.h>
int main()
{
    char *names[] = {"apple", "banana", "pineapple", 
        "peach", "strawberry", "grapes"};
    char *temp;
    printf("\n the third and the fouth fruit is %s %s", names[2], names[3]);
    temp = names[2];
    names[2] = names[3];
    names[3] = temp;
    printf("\n the third and the fouth fruit is %s %s", names[2], names[3]);
    printf("\n");
    return 0;
}
