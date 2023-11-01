//Write a program to print sum of first 10 numbers.

#include<stdio.h>

void main()
{
    int no=0, sum;
    while(no<=10)
    {
        sum=no+sum;
        no++;
    }
    printf("sum is :%d", sum, no);
}