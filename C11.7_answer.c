#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN 20
char * string_in(const char * s1, const char * s2);
int main()
{
    char orig[LEN] = "transportationg";
    char * find;
    puts(orig);
    find = string_in(orig, "port");
    if (find)
        puts(find);
    else
        puts("not found");
    find = string_in(orig, "part");
    if (find)
        puts(find);
    else 
        puts("not foud");
    return 0;
}

char * string_in(const char * s1, const char * s2)
{
    int l2 = strlen(s2);
    int tries;
    int nomatch = 1;
    tries = strlen(s1) + 1 -l2;
    if (tries > 0)
        while ((nomatch = strncmp(s1, s2, l2) && tries--))
            s1++;
    if (nomatch)
        return NULL;
    else 
        return (char *) s1;
}
