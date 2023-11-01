//Write a program to print sum of even numbers and odd numbers between a given range.

#include<stdio.h>

void sum(int, int);
void main()
{
    int  start, end;

    printf("enter the starting and ending range: ");
    scanf("%d%d", &start, &end);

    sum(start, end);
}

void sum(int start, int end)
{
    int sum_odd_no = 0, sum_even_no = 0;
    for(; start <= end; start++ )
    {
        if( start%2 == 0 )
        {
            sum_even_no = sum_even_no + start;
        }
        else if(start%2 != 0 )
        {
            sum_odd_no = sum_odd_no + start;
        }
    
    }
    printf("Sum of even no is :%d ",sum_even_no );
    printf("\nSum of Odd no is : %d ",sum_odd_no );
       
}