//Accept a number from user and print reverse no 

#include<stdio.h>

void reverse_no(int);
void main()
{
    int num;

    printf("enter the no : ");
    scanf("%d", &num);

    reverse_no(num);

}
void reverse_no(int no)
{
     int  reverse = 0, reminder;
    while(no > 0)
    {
        reminder = no % 10;
        reverse = reverse * 10 + reminder;
        no /= 10;
    }
    printf("the reverse  no : %d",reverse);

}