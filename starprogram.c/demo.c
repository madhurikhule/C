#include<stdio.h>
void main()
{
    int row=1, col;
    while(row<=4){
        col=1;
        while(col<=4){
            if(row>=col){
                if(col%2==0){
                    printf("! ");
                }
                else{
                    printf("? ");
                }
            }col++;
        }printf("\n");
        row++;
    }
}