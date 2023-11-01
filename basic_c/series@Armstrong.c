#include<stdio.h>
void main(){
    int num, sum=0, reminder,count;
    while(count<=500);{
        num=count;
        sum=0; 
        while(num>=0){
            reminder=num%10;
            sum=sum+(reminder*reminder*reminder);
            num/=10;
        }
        if(count==sum){
            printf("%d is Armstrong no\n",count,sum);
        }count++;
    }
    


    
}