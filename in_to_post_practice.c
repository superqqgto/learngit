#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define max 100

char post[max];

void trans()
{
    char str[max];
    char stack[max];
    char ch;
    int sum, i, j, t, top = 0;

    printf("*******************************\n");
    printf("pls input the number and # means end");
    printf("*************\n");

    i = 0;
    do
    {
        i++;
//        str[i] = getchar();
         scanf("%c", &str[i]);
        printf("ssss");
    }while(i != max && str[i] != '#');
    printf("ssss");
    sum = i;
    t = 1;
    i = 1;
    ch = str[i];
    i++;
    while(ch != '#')
    {
        switch(ch)
        {
            case '+':        
            case '-':
                while(top != 0 && stack[top] != '(')
                {
                    post[t] = stack[top];
                    t++;
                    top--;
                }
                 printf("123456post=%c\n", post[t]);
                 top++;
                 stack[top] = ch;
                 printf("123456stack=%c\n", stack[top]);
                 break;
            case '*' :       
            case '/' :
                 while(stack[top] == '*' || stack[top] == '/')
                 {
                     post[t] = stack[top];
                     t++;
                     top--;
                 }
                  top++;
                  stack[top] = ch;
                 break;
            case '(':
                 top++;
                 stack[top] = ch;
                 break;
            case ')':
                 while (stack[top] != '(')
                 {
                     post[t] = stack[top];
                     top--;
                     t++;
                 }
                 top--;
                 break;
            case ' ':
                 break;
            default:
                 while(isdigit(ch) || ch == '.')
                 {
                     post[t] = ch;
                      printf("123post=%c\n", post[t]);
                     printf("123t=%d\n", t);
                    t++;
//                     i++;
                     ch = str[i];
                     printf("123str[i]=%c\n", str[i]);
                     printf("123i=%d\n", i);
                     i++;
                }
                 post[t] = ' ';
                 t++;
                 i--;
        }
        ch = str[i];
        i++;
    }
    while(top != 0)
    {
        post[t] = stack[top];
        top--;
        t++;
    }
    printf("ded %c", post[t-1]);
    printf("ded %d", t);
    post[t] = ' ';
    printf("the original:\n");
    for(i=1; i<sum; i++)
        printf("%c", str[i]);
    printf("\n the transform:\n");
    for(j=1; j<t; j++)
        printf("%c", post[j]);
}

void calculate()
{
    char str[100];
    float stack[100];
    int top = 0;
    int i = 0;
    int t = 1;
    char ch;
    ch = post[t];
    t++;
    while(ch != ' ')
    {
//        printf("dfdf\n");
        switch(ch)
        {
            case '+':
                stack[top-1] += stack[top];
                printf("ddd stack[top-1] : %g", stack[top-1]);
                top --;
                break;
            case '-':
                 stack[top-1] -= stack[top];
                top --;
               break;
            case '*':
                  stack[top-1] *= stack[top];
                top --;
              break;
            case '/':
              if(stack[top] != 0)
              {
                 stack[top-1] /= stack[top];
                top --;
              }
              else
                  printf("wrong!/n");
               break;
            default :
               i=0;
                while (isdigit(ch) || ch == '.')
                {
                    str[i] = ch;
                    printf("dddstr1: %c\n", str[i]);
                    i++;
                    ch = post[t];
                    printf("dddch2: %c\n", ch);
                    t++;
                }
            printf("dddch3: %c\n", post[t]);
            str[i] = '\0';
            top++;
            stack[top] = atof(str);
            printf("123stack123: %g\n", stack[top]);
        }
//        t++;
        ch = post[t];
        printf("dddch4: %c\n", ch);
        t++;
    }
    printf("the result is %g\n", stack[top]);
}

int main()
{
    trans();    
    calculate();
    return 0;
    
}
