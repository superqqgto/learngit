#include<stdio.h>
int main()
{
    char *start, *end; 
    char letter[5]; 
    int flag = 1, i;

    start = letter;
    end = start + 4;
    for(i = 0; i <= 4; i++)
    {
        scanf("%c", &letter[i]);     
        //不能在输字符的时候加空格
        //scanf("%c", letter); 就出错    
        printf("letter[%d] = %c\n", i, letter[i]);
    }
    for( ; start <= end; start++, end--)
    {
        if(*start != *end) 
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("the letter is matched.\n"); 
    else
        printf("the letter is not matched.\n"); 
         
    

    return 0;
}
