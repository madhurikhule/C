#include<stdio.h>

void  main()
{
    int no1, no2, swap;
    printf("enter the  value of no1, no2");
    scanf("%d %d", &no1, &no2);

    swap = no1;
    no1 = no2;
    no2 = swap;

    printf("the swaping no1 is %d & no2 is %d", no1, no2, swap);
}    