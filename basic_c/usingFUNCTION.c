#include <stdio.h>
void addition();
void sum();
void reverse();
void main(){


    addition();
    sum();
    reverse();
    
}
void addition()
{
    int add, no1,no2;
    printf("Enter any  Two no");
    scanf("%d%d", &no1,&no2);
    add=no1+no2;
    printf("%d and %d =%d\n",no1,no2,add);

}
void sum()
{
    int sum=0,no, unit,tenth,hundred;
    printf("Enter any three digit  no");
    scanf("%d", &no); 
        unit=no%10;
        tenth=(no/10)%10;
        hundred=no/100;
        sum=(unit+tenth+hundred);
        
        printf(" the sum of no is %d\n",sum);
    
     
}
void reverse()
{
    int no, rev, sum;
    printf("Enter any three digit no");
    scanf("%d", &no);

        
        rev=no%10*100+((no/10)%10)*10+no/100;
    
        printf("reverse of no is %d\n",rev);

    
}