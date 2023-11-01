//Write a program to accept a number from user, pass it to a function calculate the factorial and return it back to main.

#include<stdio.h>
int function1(int);

void main()
{
    int no;
    printf("enter any no");
    scanf("%d",&no);


    printf("%d!=%d",no,function1(no));

}
int function1(int num) 
{
   int i, fact;
    for(i=1, fact=1; i<=num; i++)
        fact*=i;
        i++;
        return fact;
    

}