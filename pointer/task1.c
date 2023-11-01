//Pointer.

#include<stdio.h>

void main()
{
    int i=10, *j, **k;
    j = &i;
    k = &j;

    printf("%d", i);
    printf("\n%u", &i);
    printf("\n%d", *(&i));
    printf("\n%u", &j);
    printf("\n%d", *j);
    printf("\n%d", **k);
    printf("\n%d", &k);
    printf("\n%d", **&**&k);
    
}