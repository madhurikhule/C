//Accept base and index from user in main, pass it to a function and calculate the power.

#include<stdio.h>
void Power();
void main()
{
    int no, exponent;
    printf("enter any no");
    scanf("%d", &no);
    printf("enter any exponent");
    scanf("%d", &exponent);
    Power(no,exponent);

}
void Power(int no, int exponent)
{
    int i=1, power=1;
    while(i<=exponent)
    {
        power=power*no;
        i++;
    }
    printf("%d : is the power of %d ^ %d", power,no,exponent);
}