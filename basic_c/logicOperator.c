#include<stdio.h>

void main()
{
    int a,b,c,min;

    printf("Enter Three Number\n");
    scanf("%d%d%d",&a,&b,&c);

    if((a<b)&&(a<c))
    {
        min=a;
    }
    else if((b<c)&&(b<a))
    {
        min=b;
        
    }
    else if((c<a)&&(c<b))
    {
        min=c;
    }

    printf("minimun no between a= %d,  b= %d and c= %d is : %d\n",a,b,c,min);
}