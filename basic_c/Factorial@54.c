//Accept a number from user in main, pass it to a function and calculate the factorial.
#include<stdio.h>
void factorial();
void main()
{
    int no;
    printf("Enter any no");
    scanf(" %d",&no);
    factorial(no);

}

void factorial(int no)
{
    int fact=1, i=1;
    while(i<=no)
   { 
    fact=fact*i;
    i++;
    }
    printf("factorial of %d is %d", fact, no);

}