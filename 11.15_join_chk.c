#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13

int main()
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("what is your favorite flower?");
    gets(flower);
    if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
        strcat(flower, addon);
    puts(flower);
    puts("what is your favorite bug?");
    gets(bug);
    available = BUGSIZE - strlen(bug) -1;
    strncat(bug, addon, available);
    puts(bug);

    return 0;
}
