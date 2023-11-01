#include<stdio.h>

void main()
{
    int no;
    printf("enter no: ");
    scanf("%d", &no);
    
    while(no<=15)
    {
        if(no<15)
        {
            printf("");
        }
        else
        {
            printf("It is Odd no");
        }
        no++;

    }
}