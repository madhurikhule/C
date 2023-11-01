#include<stdio.h>

void main()
{
    int no1,no2;
    no1=10;
    no2=5;
    printf("before swipe \nthe value of no1 is %d and no2 is %d",no1,no2);
    no1=no1+no2;
    no2=no1-no2;
    no1=no1-no2;
    printf("\nafter swipe \nthe value of no1 is %d and no2 is %d",no1,no2);
    
    int no3, no4,temp;
    no3=8;
    no4=4;
    temp=no3;
    no3=no4;
    no4=temp;
    printf("\nthe value of no3 is %d and no4 is %d",no3, no4);
    

}