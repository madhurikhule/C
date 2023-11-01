#include<stdio.h>
void main(){
    int row=1; 
    
    
    while(row<=5){
    
    char ch = 'A';     int col=1;
        while(col<=5){
            if(row>=col){
                printf("%c ",ch);
                ch++;
                
            }
            else{
                printf("");
            }col++;

        }printf("\n");
        row++;
    }
}