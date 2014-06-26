#include<stdio.h>
#include<math.h>

int main()
{
    int x = 1;
    double squareroot, power;
    while(x <= 10)
    {
        squareroot = sqrt(x);
        power = pow(x, 3);
        printf("%d's squareroot: %5.2f\t %d 's cube: %5.0f\n",
            x, squareroot, x, power);
        x++;
    
    }

    return 0;
}
