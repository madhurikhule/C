#include<stdio.h>

void main()
{
    int no = 15;
    if (no % 5==0 && no % 3==0 )
    {
        printf("the no is divisible by 5 and 3");

    }
    else if(no%5==0)
    {
        printf("the no is divisible by 5");
    }
    else
    {
        printf("the no is divisible by 3");
    }
}