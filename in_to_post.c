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
//		scanf("%c",&str[i]);
        str[i] = getchar();
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
				top--;
				t++;
			}
			top++;
			stack[top] = ch;
			break;
		case '*':
		case '/':
			while(stack[top] == '*'|| stack[top] == '/')
			{
				post[t] = stack[top];
				top--;
				t++;
			}
			top++;
			stack[top] = ch;
			break;
		case '(':
			top++;
			stack[top] = ch;
			break;
		case ')':
			while( stack[top]!= '(' )
			{
				post[t] = stack[top];
				top--;
				t++;
			}
			top--;
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

	printf("\n\t逆波兰式：\t");
	for(j = 1;j<t;j++)
		printf("%c",post[j]);
}




void compvalue()
{
	float stack[max];
	char ch, str[max];
	int i, t = 1,top = 0;
	ch = post[t];t++;
	
	while(ch!= ' ')
	{
		switch(ch)
		{
		case '+':
			stack[top-1] = stack[top-1] + stack[top];
			top--;
			break;
		case '-':
			stack[top-1] = stack[top-1] - stack[top];
			top--;
			break;
		case '*':
			stack[top-1] = stack[top-1] * stack[top];
			top--;
			break; 
		case '/':
			if(stack[top]!= 0)
				stack[top-1] = stack[top-1]/stack[top];
			else
			{
				printf("\n\t除零错误！\n");
				exit(0);
			}
			top--;
			break;
		default:
			i = 0;
			while( isdigit(ch) || ch == '.' )
			{
				str[i] = ch;
				i++;
				ch = post[t];
				t++;
			}
			str[i] = '\0';
			top++;
			stack[top] = atof(str);
		}
		ch = post[t];
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
