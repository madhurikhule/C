#include<stdio.h>
void main()
{
    int no1, no2, sum;
    char option;
    do{
        printf("enter two no");
        scanf("%d%d",&no1, &no2);
        sum=no1+no2;
        printf("sum of %d+%d = %d", no1, no2, sum);
        printf("\ndo yo want to continue?<y/n>:");

        scanf(" %c",&option);
        printf("y/n");

    }
        while(option=='y');
}