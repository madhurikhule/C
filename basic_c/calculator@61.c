//Write a function to accept two numbers from user and make addition of them and return addition back to main and print the answer in main.
#include<stdio.h>
int calculator(int, int, char);
void main()
{
    
    int no1, no2, sum, sub, mul;
    float div;
    printf("Enter any two no\n");
    scanf("%d%d", &no1 ,&no2);

    sum=calculator(no1,no2,'a');
    sub=calculator(no1,no2,'s');
    mul=calculator(no1,no2,'m');
    div=calculator(no1,no2,'d');

    printf("%d+%d=%d",no1,no2,sum);
    printf("\n%d-%d=%d",no1,no2,sub);
    printf("\n%d*%d=%d",no1,no2,mul);
    printf("\n%d/%d=%d",no1,no2,div);

}

int calculator(int no1,int no2, char option)
{
     if(option=='a')
    return no1+no2;
    else if(option=='s')
    return no1-no2;
    else if(option=='m')
    return no1*no2;
    else
    return (float)no1/no2;

}