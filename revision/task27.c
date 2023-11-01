//Print the ASCII (American Standard Code for Information Interchange) chart.

#include<stdio.h>

void main()
{
    printf("capital alphabate\n");
    for (int i = 65; i <= 90; i++)
    {
        printf("the ascii value of %c is %d\n", i, i);
    }
    printf("\nsmall alphabate\n");
    for (int i = 97; i <= 122; i++)
    {
        printf("the ascii value of %c is %d\n", i, i);
    }
}