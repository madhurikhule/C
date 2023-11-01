#include<stdio.h>
void main()
{
    
    int no, fact, i;
    char option;
    do{
    printf("Enter any no: ");
    scanf("%d",&no);
    fact = 1, i = 1;
    
    while(i<=no){
    fact=fact*i;    
    i++;    
    }
    printf("factorial of %d is %d", no, fact);
    printf("\ndo you want to continue?<y/n>: ");
    scanf(" %c",&option);

    }
    while(option=='y');
}
