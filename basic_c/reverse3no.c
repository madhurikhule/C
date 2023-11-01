#include<stdio.h>

void main()
{
    int num, unit, tens, hundred;
    // considering any Three Digit Number
    num=123;

    // Unit place
    unit=num % 10;
    printf("value of %d",unit);

    printf("\n");

    // tens place
    tens=(num / 10) % 10;
    printf("value of %d",tens);

    printf("\n");

    // hundred place
    hundred=(num /100);
    printf("value of %d",hundred);

    printf("\n");

    printf("reverse value is  = %d%d%d",unit,tens,hundred);
}