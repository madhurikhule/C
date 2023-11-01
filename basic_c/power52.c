#include<stdio.h>
//Accept base and index from user and calculate the power using function.
void Power();
void main()
{
    Power();

}

void Power()
{
    int power = 1, no, exponent, i;
    printf("enter any no ");
    scanf("%d",&no);
    printf("enter any exponent");
    scanf("%d", &exponent);
    i=1;
    while(i<=exponent){
        power*=no;
        i++;
        
    }
    printf("%d : is the power of %d^%d\n",power,no,exponent);
}