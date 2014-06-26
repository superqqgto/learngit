#include <stdio.h>
char *strstr(const char *s1, const char *s2)
{
    int n;
    if(*s2)
    {
        while (*s1) 
        {
            for(n=0; *(s1+n) == *(s2+n); n++) 
            {
                if(!*(s2+n+1)) 
                    return (char*)s1;
            }
//            printf("aaa%c\n", *s1);
//            用来测试上面的return以后还会不会往下走，结果证明不会
            s1++;
        }
            return NULL;
    }
    else
        return (char*)s1;
 }


int main()
{
    char array1[20] = {"12345"};
    char array2[20] = {"3"};
    printf("%s\n", strstr(array1, array2));

    return 0;
}
