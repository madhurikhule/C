//factorial of any no ex - 5!= 120
#include<stdio.h>
int factorial_no(int);
int main()
{
    int no;
    printf("enter the no : ");
    scanf("%d", &no);

    factorial_no(no);
    printf("factorial is: %d ",factorial_no(no));
    return 0;
}

int factorial_no(int num)
{
    int i=1, factorial=1;
    while(i<=num)
    {
        factorial = factorial * i;
        i++;
    }
    return factorial;
   
}