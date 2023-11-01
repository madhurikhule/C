#include<stdio.h>
void main(){
    int num=0, sum=0, reminder,temp;
    printf("enter any no:");
    scanf("%d", &num);
    temp=num;
    while(num>0){
        reminder=num;
        reminder=num%10;
        sum+=(reminder*reminder*reminder);
        num/=10;
    }
    printf("sum of number %d :%d\n",temp,sum);
    
    if(sum==temp)
    {
        printf("it is Armstrong no");
    }
    else
    {
        printf("it is not a Armstrong no");
    }
    
}