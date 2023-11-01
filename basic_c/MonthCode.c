#include<stdio.h>

void main(){
int m;

printf("Enter the number\n");
scanf("%d",&m);

if((m>=1)||(m<=12))
{
    if (m==1){
        printf("it is jan");

    }
    else if(m==2){
        printf("it is feb");
    }
     else if(m==3){
        printf("it is mar");
    }
     else if(m==4){
        printf("it is april");
    }
     else if(m==5){
        printf("it is may");
    }
     else if(m==6){
        printf("it is jun");
    }
     else if(m==7){
        printf("it is jully");
    }
     else if(m==8){
        printf("it is ogas");
    }
     else if(m==9){
        printf("it is sep");
    }
     else if(m==10){
        printf("it is oct");
    }
     else if(m==11){
        printf("it is nov");
    }
     else {
        printf("it is dec");
    }
}
else {
    printf("data is not valid");
}
}


