
//Accept two numbers inside main, pass them to a function and calculate the sum of two numbers.

#include<stdio.h>

void calsum();
void main()
{
    int no1, no2;
    printf("Enter any two no");
    scanf(" %d%d",&no1, &no2);
    calsum(no1,no2);

}

void calsum(int no1, int no2)
{
    int sum;
    sum=no1+no2;
    printf("%d+%d=%d",no1,no2,sum);

}