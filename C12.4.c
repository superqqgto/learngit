#include <stdio.h>
int units = 0;
void critic(void);
int main()
{
    int units;
    printf("how man pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
    {
        printf("ccc%d\n", units);
        critic();
        printf("bbb%d\n", units);
    }
    printf("you must have looked it up!\n");
    return 0;
}

void critic(void)
{
    printf("no luck, chummy. try again\n");
    scanf("%d", &units);
    printf("aaa%d\n", units);
}
