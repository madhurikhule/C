//pointer

#include<stdio.h>

void swap_no( int * , int * );
void main()
{
    int no1, no2;

    printf("Enter No1 & No2: ");
    scanf("%d%d", &no1, &no2);

    swap_no(&no1, &no2);
    printf("swaping  No1 :%d & no2 :%d",no1, no2);
}
void swap_no(int *n1, int *n2)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

    
