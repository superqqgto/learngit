#include <stdio.h>
extern int rand0();
int main()
{
    int count;
    for (count = 0; count < 5; count++)
        printf("%hd\n", rand0());
    return 0;
}
