#include<stdio.h>
void main()
{
    int row=1, col;
    while(row<4)
    {
        col=1;
        while(col<4)
        {
            printf("*");
            col++;

        }
    printf("\n");
    row++;
    }
}