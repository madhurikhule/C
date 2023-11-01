#include<stdio.h>
//Accept a number from user and calculate the factorial using function.
void factorial();
void main(){


    factorial();
    
}

void factorial(){
    int no, fact, i;
    printf("enter any no");
    scanf("%d",&no);
    fact=1 , i=1;
    while(i<=no)
    {
        fact*=i;
        i++;
        
    }printf("factorial of %d is %d\n",no,fact);


}