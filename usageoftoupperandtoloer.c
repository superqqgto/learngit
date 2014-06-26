#include<stdio.h>
#include<ctype.h>

int main()
{
    char msg1, msg2, to_upper, to_lower;

    printf("pls input a lower letter:");
    msg1 = getchar();
    to_upper = toupper(msg1);
    printf("transform to upper: %c\n", to_upper);

    printf("pls input a upper letter:");
    getchar();
    msg2 = getchar();
    to_lower = tolower(msg2);
    printf("transform to lower: %c\n", to_lower);

    return 0;

}
