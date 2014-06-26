#include <stdio.h>
#define MAX 81
int main()
{
    char name[MAX];
    char * ptr;

    printf("hi, what's your name?\n");
    ptr = fgets(name, MAX, stdin);
    printf("%s? ah! %s!\n", name, ptr);

    return 0;
}
