#include<stdio.h>

void main()
{
    int no1, no2;
    printf("enter the numbers u wants to calculate");
    scanf("%d %d", &no1, &no2);
    
    printf("-----***-----");
    printf("\nAddition\n");
    printf("= %d\n",no1+no2);

    printf("-----***-----");
    printf("\nSubtraction\n");
    printf("= %d\n",no1-no2);

    printf("\n-----***-----");
    printf("\nMultiplication\n");
    printf("= %d\n",no1*no2);
    
    printf("-----***-----");
    printf("\nDivision\n");
    printf("= %d\n",no1/no2);

    printf("-----***-----");
    printf("\nModulus\n");
    printf("= %d\n",no1%no2);
    
    
}