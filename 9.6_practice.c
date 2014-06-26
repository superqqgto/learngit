/*
 * =====================================================================================
 *
 *       Filename:  9.6_practice.c
 *
 *    Description:  just for practice
 *
 *        Version:  1.0
 *        Created:  2014年06月16日 19时06分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: the king robert 
 *        Company:  DT Research
 *
 * =====================================================================================
 */
#include <stdio.h>

void level(int a);

int main()
{
   level(1); 
    return 0;
}

void level(int a)
{
    printf("liiiiievel %d: n location %x\n", a, &a); 
    while(a < 2)
    
        level(a+1);
        printf("level %d: n location %x\n", a, &a); 
    
}

