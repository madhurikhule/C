//Accept a number from user and print its factors. e.g. factors of 6 are: 1 2 3

#include<stdio.h>

void main()
{
    int num; 
    int i;

    printf("enter the no: ");
    scanf("%d", &num);

    for ( i=1; i<=(num / 2); i++ )
    {
        if ( num%i==0 )
        {
           printf("\nfactors of no : %d",i );
        }
    
    }

}