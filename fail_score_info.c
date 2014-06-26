#include<stdio.h>
struct student
{
    int num;
    char *name;
    char sex;
    float score;
};

int main()
{
    static struct student stu1 = {1, "李亚鹏", 'M', 61};
    static struct student stu2 = {2, "周进京", 'F', 92.5};
    static struct student stu3 = {3, "姚光明", 'M', 59};
    printf("the list of failure student:\n");
    if(stu1.score < 60)
        printf("%d\t%s\t%c\t%5.2f\n", stu1.num, stu1.name, stu1.sex,stu1.score);
    if(stu2.score < 60)
        printf("%d\t%s\t%c\t%5.2f\n", stu2.num, stu2.name, stu2.sex,stu2.score);
    if(stu3.score < 60)
        printf("%d\t%s\t%c\t%5.2f\n", stu3.num, stu3.name, stu3.sex,stu3.score);
    if(stu1.score >= 60 && stu2.score >= 60 && stu3.score >=60)
        printf("nobody failure.\n");
    return 0;
}
