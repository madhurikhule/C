#include<stdio.h>
void main(){
    int no, fact=1, i;
    
        printf("enter any no");
        scanf("%d",&no);
        i=1;
        while(i<=0){
        
            fact=fact*i;
            i++;
            if(no==fact){
                printf("%d it is a perfect no ",no,fact);

            }
            else {
                printf("it is not a perfect no");
                
                

            }printf("\n");
            
             
        } 
}
