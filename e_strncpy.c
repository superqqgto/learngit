#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = {"sting string"};
    char arr2[] = {"sting"};

    strncpy(arr+1, arr2, 5);
    puts(arr);
    return 0;
    
}
