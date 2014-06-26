#include <stdio.h>
void square_round(float );
void print1(void);
void square_square(int ); 
void square_triangle(int , int );
void square_rect(int , int);
int main()
{
    int n, length, high, bottom_margin, width,  num_select;
    float radius, square;
    print1();
   while(scanf("%d", &n) == 1) 
    {
        switch (n)
        {
            case 0:
                printf("pls input the radius:\n");
                scanf("%f", &radius);
                square_round(radius);
                print1(); 
                break;
               case 1:
                  printf("pls input the high and bottom margin:\n");
                  scanf("%d%d", &high, &bottom_margin);
//                  square_triangle(high, bottom_margin);
                  square_triangle(high, bottom_margin);
                  print1(); 
                  break;
               case 2:
                  printf("pls input the length and width:\n");
                  scanf("%d%d", &length, &width);
                  square_rect(length, width);
                  print1(); 
                  break;
             case 3:/*{{{*/
              printf("pls input the length:\n");
                scanf("%d", &length);
                square_square(length);
                print1(); 
                break;
            default:
                printf("pls input again.\n");
                break;
        }
    }
    return 0;
}

void print1()
{
    printf("pls input a number to select the shape(q to quit) :\n");
    printf("0:round; 1:triangle; 2:rectangle; 3:square\n");
}
void square_square(int length) 
{
    int square;
    square = length * length;
    printf("the square of the square: %d.\n", square);
}
void square_round(float r)
{
    float square;
    square = 3.14 * r * r;
    printf("the square of the round is: %2.2f.\n", square);
}
void square_rect(int length, int width)
{
   int square;
   square = length * width;
   printf("the square of the rectangle: %d.\n", square);
}
/*}}}*/ 
void square_triangle(int high, int bottom_margin)
//void square_triangle(int high, int bottom_margin)
{
   int square; 
   square = (high * bottom_margin / 2); 
   printf("the square of the triangleis : %d.\n", square);
}
