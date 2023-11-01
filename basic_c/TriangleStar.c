#include<stdio.h>

void main()
{
    char ch;
    int noofrows,row,col;
    printf("Enter the no of row:");

    scanf("%d", &noofrows);
    row=1;
    while(row<=noofrows){
        ch='A';
        col=1;
        while(col<=row)
        {
            printf("%c",ch++);
            col++;


        }
        printf("\n");
        row++;


    }

}