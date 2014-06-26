#include <stdio.h>
char* my_stringcopy(char *, char *);
char *strcpy(char *des, char *source)
{
    char *r= des;
    while(*des++ = *source++);
    return r;
}

int main()
{
    char array1[20] = {"12345"};
    char array2[20] = {"ABCDE"}; 
//    char array[20];
    printf("%s\n", array1);
    printf("%s\n", array2);
//    array = my_stringcopy(array1, array2);
    my_stringcopy(array1, array2);
    printf("array1 : %s\n", array1);
    printf("array : %s\n", strcpy(array1,array2));
//    printf("original array: %s\n", array);

    return 0;
}
char* my_stringcopy(char *b, char *a)
{
      char *c; 
//    while(*(a+i) != '\0')
//    {
//        *(b+i) = *(a+i);
//        i++;
//    }
    for (c = b ; *a != '\0'; a++, b++) 
        *b = *a;
    return c; 
}
