#include <stdio.h>
void delete_space(char * a);
int main()
{
    char array[] = "superqq i o u";
    delete_space(array);
    return 0;
}
#include <ctype.h>
void delete_space(char * a)
{
    int i = 0;
    int j = 0;
    char  b[80];
    while (*(a+i) != '\0')
    {
       if (isspace(*(a+i))) 
           i++;
       else
        {
           *(b+j) = *(a+i);
           i++;
           j++;
        }
    }
    *(b+j) = '\0';
    puts(b);
    return;
}

