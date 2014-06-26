#include<stdio.h>
#include<string.h>
int main()
{
    char arr[] = "Beijing";
    int len1, len2;
    len1 = strlen(arr);
    len2 = strlen("Shanghai");
    printf("\n string = %s length = %d", arr, len1);
    printf("\n string = %s length = %d", "Shanghai", len2);
    return 0;
}
