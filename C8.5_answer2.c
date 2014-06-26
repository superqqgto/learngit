#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int high = 100;
    int low = 1;
    int guess = (high + low) / 2;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right, with");
    printf("\na h if it is high, and with an l if it is low.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        printf("aaa%c %c\n", response, response);
        if(response == '\n') 
        {
            printf("bbb%c\n", response);
            continue;
        }
            printf("ldb%c\n", response);
        if ((response != 'h')&& (response != 'l'))
        {
            printf("dddddddddd"); 
            continue;
        }
        if (response == 'h')
            high = guess;
        else if (response == 'l')
            low = guess;
        guess = (high + low) / 2;
        printf("Uh...is your number %d?\n", guess);
    }
    printf("I knew I could do it!\n");
    return 0;
}
