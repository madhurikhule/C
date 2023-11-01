#include<stdio.h>

void main ()
{
    int x=11;
    int y=6;

    printf("%d\n",x>y && y<x);
    printf("%d\n",x>y || y<x);
    printf("%d\n",!(x>y && y<x));

}