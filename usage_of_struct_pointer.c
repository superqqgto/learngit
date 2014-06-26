#include<stdio.h>
struct student
{
    int num;
    char *name;
    char sex;
    float score;
}stu = {1, "张宾", 'F', 55}, *pstu;

int main()
{
    pstu = &stu;
    printf("NO.: %d name: %s\n", stu.num, stu.name);
    printf("sex: %c score: %5.2f\n\n", stu.sex, stu.score);
    printf("NO.: %d name: %s\n", (*pstu).num, (*pstu).name);
    printf("sex: %c score: %5.2f\n\n", (*pstu).sex, (*pstu).score);
    printf("NO.: %d name: %s\n", pstu->num, pstu->name);
    printf("sex: %c score: %5.2f\n\n", pstu->sex, pstu->score);
    return 0;
}
