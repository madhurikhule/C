#include<stdio.h>

void main()
{
    int quantity, price, bill, netbill;
    printf("enter the quantity and price of T-Shirts:");
    scanf("%d%d",&quantity,&price);

   

    bill=quantity*price;

if(bill>=500)   
{
    netbill=bill-(bill*0.1);
     
}    
else
{
    netbill=bill;
}
    printf("the net bill of your shopping is %d",netbill);

} 


