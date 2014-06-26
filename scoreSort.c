#include<stdio.h>
#define N 5
void sort(float a[N])
{
    int i, j;
    float temp;
    for(i=0; i< N; i++)
    {
        for(j=0; j<N-i-1; j++) 
        {
            if(a[j] > a[j+1]) 
            {
                temp = a[j+1];
                a[j+1] =  a[j];
                a[j] = temp;
            }
        }
    }
}
 int main()
{
    float grade[N];
    int i;
    printf("\n input %d students' score:\n", N);
    for(i=0; i<N; i++)
    {
        scanf("%f", &grade[i]); 
    }
    sort(grade);
    printf("\n score after sort:\n");
    for(i=0; i<N; i++)
    {
        printf("%10.2f", grade[i]); 
    }
    printf("\n");

}
