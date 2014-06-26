#include <stdio.h>
#include <ctype.h>
int main(int argc, char * argv[])
{
    char c, d;
    int ok = 1;
    
    if (argc > 3)
    {
        printf("just input 2 number\n");
        ok = 0;
    }
    else if (argc == 2)
    {
        if (argv[1][0] != '-')
            printf("pls input - at first\n");
        else
            switch(argv[1][1])
            {
                case 'p': 
                case 'u': 
                case 'l': d = argv[1][1];
                         break; 
                default:
                          ok = 0;
                          printf("fuck\n");
            }
        if (ok)
            while ((c = getchar()) != EOF)
            {
                switch(d)
                {
                    case 'p': putchar(c);
                              break;
                    case 'u': putchar(toupper(c));
                              break;
                    case 'l': putchar(tolower(c));
                              break;
               }
            }
    }
    return 0;
}
