#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""
void stsrt(char *strings[], int num);

int main()
{
    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct = 0;
    int k;

    printf("input up to %d lines, and I will sort them.\n", LIM);
    printf("to stop, press the enter key at a line'x start.\n");
    while (ct < LIM && gets(input[ct]) != NULL
                    && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }
    stsrt(ptstr, ct);
    puts("\nhere's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);

    return 0;
}

void stsrt(char * strings[], int num)
{
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
        {
            temp = strings[top];
            strings[top] = strings[seek];
            strings[seek] = temp;
        }
}
