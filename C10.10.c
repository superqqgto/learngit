#include<stdio.h>
void double_it (int a[][5], int lines);
void show(int a[][5], int lines);
int main()
{
    int arr[3][5];
//    int i, j;

//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 5; j++)
//        {
//            arr[i][j] = j + i;
//            printf("arr[%d][%d] = %d", i, j, arr[i][j]);
//            if(j == 4)
//                putchar('\n');
//            else 
//                putchar('\t');
//        }
    show(arr, 3);
    putchar('\n');
    double_it (arr, 3);
    return 0;
}

void show(int a[][5], int lines)
{
    int i, j;
     for (i = 0; i < lines; i++)
        for (j = 0; j < 5; j++)
        {
            a[i][j] = j + i;
            printf("a[%d][%d] = %d", i, j, a[i][j]);
            if(j == 4)
                putchar('\n');
            else 
                putchar('\t');
        }
}

void double_it (int a[][5], int lines)
{
     int i, j;
     for (i = 0; i < lines; i++)
        for (j = 0; j < 5; j++)
        {
            a[i][j] *= 2;
            printf("a[%d][%d] = %d", i, j, a[i][j]);
            if(j == 4)
                putchar('\n');
            else 
                putchar('\t');
        }
   
}


