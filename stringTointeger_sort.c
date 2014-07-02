#include<stdio.h>
#include<stdlib.h>
int CharToInt(char charint[]);
int main(int argc, char **argv)
{
    int j = 0;
    int i;
    char * temp;
//    for (i = 1; i < argc; i++)
//        j += atoi(argv[i]); 
//        printf("sum  = %d\n", j);
    for (i = 1; i < argc; i++)
        j += CharToInt(argv[i]); 
        printf("sum  = %d\n", j);
//    for (i = 1; i < 5; i++)        
//    {
//        for(j = 1; j <= 5-i-1; j++ )
//        {
//            if (CharToInt(argv[j]) > CharToInt(argv[j+1]))
//            {
//                 temp = argv[j];
//                argv[j] = argv[j+1];
//                argv[j+1] = temp;
//            }    
//        }
//    }
//    for (i = 1; i < 5; i++)        
//        printf("%s\t", argv[i]);
//    printf("\n");
   return 0;
}

int CharToInt(char charint[])
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int tmp = 1;
    for (i=0; charint[i] != '\0'; i++)
    {
        sum *= tmp;
        sum += charint[i] - '0';
//        tmp *= 10;  
        tmp = 10;
    }
//     for (i=0; charint[i] != '\0'; i++)
//    {
//        sum += charint[i] - '0';
//        sum *= 10;  
//    }
//     sum /= 10;
   
    return sum;
}

