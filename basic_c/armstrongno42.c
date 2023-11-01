#include<stdio.h>
void main(){
    int num, sum=0, reminder,temp;
    printf("enter any no:");
    scanf("%d", &num);
    temp=num;
    while(temp>0){
        
        reminder=temp%10;
        sum=sum+(reminder*reminder*reminder);
        temp/=10;
    }
    
    
    if(sum==num)
    {
        printf("%d is Armstrong no.",num);
    }
    else
    {
        printf("%d is not a Armstrong no.",num);
    }
    
}