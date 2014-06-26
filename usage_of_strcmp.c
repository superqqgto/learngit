#include<stdio.h>
#include<string.h>
int main()
{
    char username[15],pwd[15];
    printf("\npls input the username:");
    gets(username);
    printf("\n pls input the password:");
    gets(pwd);
    if((strcmp(username, "John") == 0) && (strcmp(pwd, "123456") == 0))
        printf("\n you're log in sucessfully");
    else
        printf("\n the username and the password is invalid.\n");
    return 0;
}
