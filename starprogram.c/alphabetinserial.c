#include<stdio.h>
void main(){
    int row=1; 
    
    char ch = 'A'; 

    while(row<=5){
        int col=1;
        while(col<=5){
            if(row<=col){
                printf("%c",ch);
                ch++;
                
            }
            else{
                printf(" ");
            }col++;

        }printf("\n");
        row++;
    }
}