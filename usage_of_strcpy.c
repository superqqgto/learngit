#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "We change lives";
    char target[20];
    strcpy(target, source);
    printf("\n the source string = %s", source);
    printf("\n the target string = %s\n", target);
    return 0;
}
