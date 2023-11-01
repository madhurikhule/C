#include<stdio.h>

//24.	Accept base and index from user and print its power. e.g. 2^3 = 8

void main()
{
    int base, index, power=1, i;
    
    printf("Accept Base & index : ");
    scanf("%d%d", &base, &index);


    for( i=1; i <= index; i++ )
    {
      power = power * base;

    }+
    printf("power is : %d", power );
    
}  