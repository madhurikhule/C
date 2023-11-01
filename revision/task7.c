// swaping code.

#include<stdio.h>

void  main()
{
    int no1, no2;
    printf("enter the  value of no1, no2");
    scanf("%d %d", &no1, &no2);

    no1= no1+no2;
    no2= no1-no2;
    no1= no1-no2;

    printf("the value is %d %d", no1 ,no2);
}