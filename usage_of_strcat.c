#include<stdio.h>
#include<string.h>
int main()
{
    char source_string[] = "is very good";
    char target_string[30] = "ZM2.0";
    strcat(target_string, source_string);
    printf("\n the source_string = %s", source_string);
    printf("\n the target_string= %s", target_string);
    return 0; 
}
