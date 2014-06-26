/*
 * =====================================================================================
 *
 *       Filename:  9.3_practice.c
 *
 *    Description: practice for 9.3 
 *
 *        Version:  1.0
 *        Created:  2014年06月16日 18时51分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: the king Robert
 *        Company:  
 *
 * =====================================================================================
 */
#include<stdio.h>

int imin(int , int );

int main()
{
    int evil1, evil2;
    printf("enter a pair of integers(q to quit):\n");
    while(scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("the lesser of %d and %d is %d\n", evil1, evil2, imin(evil1, evil2)); 
        printf("enter a pair of integers(q to quit):\n");
    }
    printf("bye\n");
    return 0;
}


//int imin(int a, int b)
//{
//    if (a > b)
//        return b;
//    else 
//        return a;
//}

int imin(int a, int b)
{
    return (a < b) ? a:b;
}

