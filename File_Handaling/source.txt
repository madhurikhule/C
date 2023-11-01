#include<stdio.h>

void main()
{
    int age;
    char gender;

    printf("enter the gender and age: \n");
    scanf("%c%d",&gender,&age);


if(((age>=18) && (gender=='f')) ||(( age>=21) && (gender=='m'))) 
{
    printf("the person is eligible for marriage\n");

}
else
{
    printf("the person is not eligible for marriage");

}
}

