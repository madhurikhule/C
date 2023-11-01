#include<stdio.h>
void main(){
    int no,exponent,power=1,i;
    char option;
    do{
        printf("enter any no:");
        scanf("%d",&no);
        printf("enter the exponent value:");
        scanf("%d",&exponent);
        i=1;
        while(i<=exponent){
            
            power=power*no;
            i++;
            
        } printf("%d : is the power of  %d ^ %d",power, no, exponent);
          printf("\ndo you want to continue?<y/n>: ");
          scanf(" %c",&option);     
    }while(option=='y');
}