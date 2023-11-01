#include<stdio.h>
void main(){
    int no ;
    printf("enter any no:");
    scanf("%d",&no);
    char ch;
    if((no>=1)||(no<=7)){
        
        if(no==1){
            printf("it is monday");
        }else if(no==2){
            printf("it is tuesday");
        }else if(no==3){
            printf("it is wednesday");
        }else if(no==4){
            printf("it is thursday");
        }else if(no==5){
            printf("it is friday");
        }else if(no==6){
            printf("it is saturday");
        }else {
            printf("it is sunday");
        }

    }else {
        printf("data is not valid");
    }
}    