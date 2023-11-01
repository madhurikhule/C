// Reverse the no.

#include<stdio.h>

void main()
{
    int no,unit ,ten, hundred;
    printf("enter the  value of no");
    scanf("%d", &no);

    unit = no%10;
    ten = (no%10)/10;
    hundred = no/100;

}
