#include<stdio.h>
void main()
{
    int i,sum=0;
    i=1;
    while(i<=10)
    {
        sum+=i;
        printf("%d\n",i);
        i++;

    }
    printf("Sum of 10 number:%d",sum);
}
