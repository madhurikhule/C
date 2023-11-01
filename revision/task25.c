//Accept a number from user and print its sum of digits. e.g. if num is 123 the answer is 6.*/

#include<stdio.h>

// void main ()
// {
    // int no, sum=0, unit, ten, hundred;

    // printf("enter the no : ");
    // scanf("%d", &no);

    // unit = no % 10;
    // ten = (no/10)%10;
    // hundred = no / 100;

    // sum = ( unit + ten + hundred );

    // printf("sum of given Number: %d", sum);

// }

 //Second method using loop

void main ()
{
 int no;
 printf("no: ");
 scanf("%d", &no);

 int remainder = 0, sum = 0;
 while(no > 0)
 {
    remainder = no % 10;
    sum = remainder + sum;
    no /= 10;
 }
 printf("%d", sum);
}
