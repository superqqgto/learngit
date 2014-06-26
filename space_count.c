#include<stdio.h>
int main()
{
    char line[30];
    int i, count = 0;
    printf("\n pls input a line of string: ");
    gets(line);
    i = 0;
    while(line[i] != '\0')
    {
        if(line[i] == ' ') 
        {   
            count++; 
        }
        i++;
    }
    printf("\n the count of space is %d\n", count);

    return 0;
}
