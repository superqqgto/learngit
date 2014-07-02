#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12.12_diceroll.h"

int main()
{
    int dice, roll;
    int sides;
//    srand((unsigned int) time(0));
    printf("enter the number of sides per die, 0 to stop.\n");
    while (scanf("%d", &sides) == 1 && sides > 0)
    {
        printf("how many dice?\n");
        scanf("%d", &dice);
        roll = roll_n_dice(dice, sides);
        printf("you have rolled a %d using %d %d-sided dice.\n",
                roll, dice,sides);
        printf("how many sides? enter 0 to stop.\n");
    }
    printf("the rollem() function was called %d times.\n",
            roll_count);
    printf("good fortune to you\n");
    return 0;
}
