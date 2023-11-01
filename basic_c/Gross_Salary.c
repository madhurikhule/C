#include<stdio.h>

void main()
{
    int gs, da, ta, bs;
    printf("Enter basic salary");
    scanf("%d",&bs);

    da=(10*bs)/100;
    ta=(12*bs)/100;
    gs=bs + da + ta;

    printf("gross salary=%d",gs);

}