#include<stdio.h>
//Write a function to accept two numbers from user and calculate addition
void Sum();
void main(){
    Sum();
}

void Sum()
{
    int no1, no2;
    printf("enter any two no");
    scanf("%d%d", &no1, &no2);
    printf("%d+%d=%d",no1,no2,no1+no2);

}