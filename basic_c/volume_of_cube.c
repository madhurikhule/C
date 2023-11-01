#include<stdio.h>

void main()
{
    int v, l, b, h;
    printf("Enter the lenght, base and height");
    scanf("%d%d%d", &l, &b, &h);

    v=l*b*h;

    printf("the volume of cube :: %d",v);

}