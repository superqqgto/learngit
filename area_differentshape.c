#include<stdio.h>
void AreaOfTriangle();
void AreaOfRect();
void AreaOfRound();

int main()
{
    int select;

    do
    {
        printf("func of area\n"); 
        printf("0, exit\n 1, rectangle\n 2, triangle\n 3, round\n ");
        printf("pls select the func");
        scanf("  %d", &select);

        if(select == 0)
            break;
        switch(select)
        {
            case 1: AreaOfRect(); 
                    break;
            case 2: AreaOfTriangle();
                    break;
            case 3: AreaOfRound();
                    break;
            default: printf("input error, pls input 0~3 to select\n");
        }
    }
    while(1);
    return 0;
}

void AreaOfRect()
{
    int x, y;
    printf("pls input the length of rectangle:");
    scanf("%d", &x);
    printf("pls input the width of rectangle:");
    scanf("%d", &y);
    printf("the area is %d\n", (x * y));
}

void AreaOfTriangle()
{
    int x, y;
    printf("pls input the bottom margin of triangle:");
    scanf("%d", &x);
    printf("pls input the high of triangle:");
    scanf("%d", &y);
    printf("the area is %d\n", (x * y)/2);
}

void AreaOfRound()
{
    int r; 
    printf("pls input the radius of round:");
    scanf("%d", &r);
    printf("the area is %2.2f\n", (3.14 * r * r) );
}
