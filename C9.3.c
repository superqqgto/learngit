#include <stdio.h>

void output_char(char , int , int );
int main()
{
    char a;
    int line1, row2; 
    printf("pls input one char and 2 numbers.\n");
    scanf("%c %d %d", &a, &line1, &row2);
    output_char(a, line1, row2);
    return 0;
}

void output_char(char a, int line, int row)
{
    int i, j;
    for(j = 0; j < row; j++)
    {
        for (i = 0; i < line; i++) 
        {
            printf("%c", a);
        }
        printf("\n");

    }
    return;
}
