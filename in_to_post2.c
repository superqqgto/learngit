#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define max 100
char post[max];



void trans()
{
	char str[max];
	char stack[max];
	char ch;
	int sum,i,j,t,top = 0;

	printf( "*****************************************\n" );
	printf( "*请输入四则运算表达式，以＃结束*\n" );
	printf( "******************************************\n" );

	i = 0;										


	do{
		i++;
		scanf("%c", &str[i]);
	}while( str[i]!= '#' && i!= max );
	
	sum = i;
	t = 1;
	i = 1;
	ch = str[i];
	i++;

	while( ch!= '#')
	{
		switch( ch )
		{
		case '+':
		case '-': 
			while(top != 0 && stack[top] != '(')
			{
				post[t] = stack[top];
//                    printf("+++top:%d, stack: %c\n", top, stack[top]);
				top--;
				t++;
			}
			top++;
			stack[top] = ch;
//            printf("+++aaatop:%d, stack: %c\n", top, stack[top]);
			break;
		case '*':
		case '/':
			while(stack[top] == '*'|| stack[top] == '/')
			{
				post[t] = stack[top];
//                    printf("***top:%d, stack: %c\n", top, stack[top]);
				top--;
				t++;
			}

			top++;
			stack[top] = ch;
//            printf("***bbbtop:%d, stack: %c\n", top, stack[top]);
			break;
		case '(':
			top++;
			stack[top] = ch;
//            printf("(((top:%d, stack: %c\n", top, stack[top]);
			break;
		case ')':
			while( stack[top]!= '(' )
			{
				post[t] = stack[top];
 //           printf(")))top:%d, stack: %c\n", top, stack[top]);
				top--;
				t++;
			}
			top--;
//            printf("ccc)))top:%d, stack: %c\n", top, stack[top]);
			break;
		case ' ':break;
		default:
			while( isdigit(ch) || ch == '.' )
			{
				post[t] = ch;
				t++;
				ch = str[i];
				i++;
			}
			i--;
			post[t] = ' ';	//数字之后要加空格，以避免和后面的数字连接在一起无法正确识别真正的位数
			t++;
		}
		ch = str[i];
		i++;
	}
	while(top!= 0)
	{
		post[t] = stack[top];
		t++;
		top--;
	}
	post[t] = ' ';
	printf("\n\t原式：\t\t");
	for(j = 1; j < sum; j++)
		printf("%c",str[j]);
            printf("\n");

	printf("\n\t逆波兰式：\t");
	for(j = 1;j<t;j++)
		printf("%c",post[j]);
            printf("\n");
}




void compvalue()
{
	float stack[max];
	char ch, str[max];
	int i, t = 1,top = 0;
	ch = post[t];           //post是全局数组；
//	printf("5534%c\n",post[t]);
    t++;
	
	while(ch!= ' ')
	{
		switch(ch)
		{

		case '+':
			stack[top-1] = stack[top-1] + stack[top];
	        printf("stacktop+++:%f\n", stack[top-1]);
            printf("top:+++%d\n", top);
     		top--;
			break;
		case '-':
			stack[top-1] = stack[top-1] - stack[top];
            printf("stacktop---:%f\n", stack[top-1]);
            printf("top:---%d\n", top);
			top--;
			break;
		case '*':
			stack[top-1] = stack[top-1] * stack[top];
            printf("stacktop***:%f\n", stack[top-1]);
            printf("top:*****%d\n", top);
			top--;
			break; 
		case '/':
			if(stack[top]!= 0)
            {
				stack[top-1] = stack[top-1]/stack[top];
                printf("stacktop///:%f\n", stack[top-1]);
                printf("top:///%d\n", top);
                top--;
            }
		else
			{
				printf("\n\t除零错误！\n");
				exit(0);
			}
//			top--;
            printf("top:///%d\n", top);
			break;
		default:
			i = 0;
			while( isdigit(ch) || ch == '.' )
			{
				str[i] = ch;
				i++;
				ch = post[t];
                printf("123t:%d\n", t);
                printf("222ch:%d\n", ch);
				t++;
			}
			str[i] = '\0';
			top++;
            printf("stack:%d\n", top);
			stack[top] = atof(str);
            printf("stacktop:%f\n", stack[top]);
		}
		ch = post[t];
        printf("aaa123t:%d\n", t);
        printf("bbb222ch:%d\n", ch);
        t++;
	}
	printf("\n\t计算结果:\t%g\n", stack[top]);
}

int main()
{
	trans();
	compvalue();
	return 0;
}
