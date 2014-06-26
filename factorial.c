#include<stdio.h>
int main()
{
    int fac_num; 
    int fac_result = 1;
    printf("pls input a number you wanna factorial :\n");
    scanf("%d", &fac_num); 
    {
        while (fac_num > 1)
        {
            fac_result = fac_result * fac_num ; 
            fac_num--;
//            printf("%d\n ",fac_result);
        }
        printf("%d\n ",fac_result);
    
    }
    return 0;
}
