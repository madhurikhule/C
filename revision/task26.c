//Accept a number from user and reverse the number. e.g. if num is 123 the reverse number is 321.

#include<stdio.h>
void main()
{
    int no;
    int reverse=0, reminder=0;

    printf("Enter No: ");
    scanf("%d", &no);
    while(no>0)
    {
        reminder = no % 10;
        reverse = reverse * 10 + reminder;
        no /= 10;
    }
     printf("the reverse no is: %d", reverse);
}