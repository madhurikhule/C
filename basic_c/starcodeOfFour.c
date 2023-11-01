#include<stdio.h>

void main()
{
    int i=1;
    while(i<=5){
        int j=1;
        while(j<=5){

        if((i==5)|| (j==5)|| (i==1)|| (j==1)){
            printf("*");
        }
        else{
            printf(" ");
        }
        j++;
        }
        printf("\n");
        i++;

    }
}