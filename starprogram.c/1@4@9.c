#include<stdio.h>
void main()
{
    int row=1, col,i;
    while(row<=1){
        col=1;i=1;
        while(col<=8){
            if(col%2==0){
                printf("@");
            }
            else{
                printf("%d",i*i);
                i++;
            }
            col++;
            
        row++;
    }
}
}