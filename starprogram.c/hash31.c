#include<stdio.h>
void main(){
    int row=1, col;
    while(row<=5){
        col=1;
        while(col<=5){
            if(row>=col){
                printf("#");
            }
            else{
                printf(" ");
                
            }col++;
            


        }printf("\n");
            row++;
        
    }
    
}