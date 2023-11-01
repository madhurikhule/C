#include<stdio.h>

void main() {

int year;
printf("enter the year:\n");
scanf("%d",&year);

printf("------------------\n");

((year%400==0) || ((year%100!=0) && (year%4==0))) ? printf("%d is a Leap year.\n",year) : printf("not a leap year");


}