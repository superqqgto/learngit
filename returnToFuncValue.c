#include<stdio.h>
int get_age();
int main()
{
    int age1, age2, age3;
    age1 = get_age();
    age2 = get_age();
    age3 = get_age();

    if((age1 > age2) && (age1 > age3))
        printf("\n the oldest guy is %d years old.\n", age1);
    else if((age2 > age1) && (age2 > age3))
        printf("\n the oldest guy is %d years old.\n", age2);
    else if((age3 > age1) && (age3 > age2))
        printf("\n the oldest guy is %d years old.\n", age3);
    return 0;
}

int get_age()
{
    int age;
    printf("\n pls input the age:  ");
    scanf("%d", &age);
    return age;

}
