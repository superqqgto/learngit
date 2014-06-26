#include <stdio.h>
void main()
{
    int i,j,z;
    int a[][4]={{1,2,0,0},{3,4,0,0},{5,6,0,0}};
    for(i=0;i<4;i++)
    {
    if(a[0][i]!=0)
    {//if语句用来判断数组元素是否为0
        for(j=0;j<4;j++)
            if(a[1][j]!=0)
            {
                for(z=0;z<4;z++)
                if(a[2][z]!=0)
                {
                    printf("%3d%d%d",a[0][i],a[1][j],a[2][z]);
                }
    }
            }
    printf("\n");//每次循环完之后就换行一次，即可原样输出楼主想要的模式
        }
}
