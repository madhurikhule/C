//Write a program to accept base and index from user, pass them to function calculate the power and return it back to main.

#include<stdio.h>
int power(int, int);

void main()
{
   int base, index;
   printf("Enter a base");
   scanf("%d", &base);
   printf("Enter a index");
   scanf("%d", &index);

   printf("%d: is the power of %d ^ %d",power(base, index),base,index);
}
int power(int base, int index)
{
    int i, power=1;
    for(i=1;i<=index; i++)
    power*=base;
    return power;




}