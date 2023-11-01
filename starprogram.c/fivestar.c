#include<stdio.h>
void main()
{
    int row=1 ,col;
    while(row<=1)
    {
        col=1;
        while(col<=5){
            if(col%2==0){
                 printf("*");

            }
            
            else
            {
                printf("5");
                
            }
            col++;

        }
      printf("\n");
      row++; 
    }
}