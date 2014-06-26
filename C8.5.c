#include<stdio.h>
int tip(char , int );
char judgement(void);
char get_first(void);

int main(void)
{
	int guess = 50;
    char answer;
    char ch1;
	printf("pick an integer from 1 to 100. I will try to guess");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("uh...is your number %d?\n", guess);
    ch1 = get_first();
	while(ch1 != 'y')
    {
        answer = judgement();
        guess = tip(answer, guess);
	    printf("uh...is your number %d?\n", guess);
        ch1 = get_first();
    }
	printf("I knew I could do it!\n");
	return 0;
}

int tip(char answer1, int guess1)
{
    int guess2;
    printf("ddd %d\n", guess2);
    if ((answer1 == 'l') && (guess2 > 0)&&(guess2 <= 100))
    { 
        guess1 = (guess1 + guess2) / 2;
        printf("ccc1 %d\n", guess1);
    }
    else if ((answer1 == 'b') && (guess2 > 0)&&(guess2 <= 100))
    { 
        guess1 = (guess1 + guess2) / 2;
        printf("ccc4 %d\n", guess1);
    }
     else if ((answer1 == 'l') && (guess2 > 100)&&(guess2 < 0))
//    else if (answer1 == 'l')
    { 
        guess1 = (guess1 + 100) / 2;
        printf("ccc2 %d\n", guess1);
    }
    else if ((answer1 == 'b') && (guess2 > 100)&&(guess2 < 0))
    { 
        guess1 /=2;
        printf("ccc3 %d\n", guess1);
    }
   guess2 = guess1;
    printf("ccc %d\n", guess2);
    return guess1;
}

char judgement(void)
{
    char ch;
    printf("aapls tell me is it bigger(press b) or lower(press l).\n");
    ch = get_first();
    printf("aaa %c\n", ch);
//    while ((ch != 'l') ||(ch != 'L') ||(ch != 'B') ||(ch != 'b')) 
    while ((ch != 'l')&&(ch != 'b'))
    {
        printf("pls tell me is it bigger(press b) or lower(press l).\n");
        ch = get_first();
        printf("bbb %c\n", ch);
    }
        printf("eee %c\n", ch);
    return ch;
}

char get_first(void)
{
    int ch1;
    ch1 = getchar();
    while(getchar() != '\n')
        continue;
    return ch1;
}
