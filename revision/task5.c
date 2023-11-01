#include<stdio.h>

void main()
{
    int no;
    printf("Enter the no ");
    scanf("%d", &no);

    if(no%2==0)
    {
        printf("No is Even");
    }
    else
    {
        printf("No is Odd");
    }

}