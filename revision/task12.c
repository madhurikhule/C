//Accept a year whether it is leap year or not a leap year

#include<stdio.h>

void main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);

    // if((year%400==0) || (year%100!=0) && (year%4==0))
    // {
    //     printf("%d  is the Leap Year",year);
    // }
    // else
    // {
    //     printf("These is not Leap Year");

    // }

    //Second Method. 

    (year%400==0) || (year%100!=0) && (year%4==0)? printf("%d  is the Leap Year",year): printf("These is not Leap Year");
   
}

