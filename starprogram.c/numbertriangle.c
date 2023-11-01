#include<stdio.h>
void main(){
    int row=1, col ,c=1;
    while(row<=5)
    {
        col=1;
        while(col<=5){
            if(row>=col){
                printf(" %d",c);
            c++;
            }col++;
            
        }printf("\n");
         row++;
    }
}