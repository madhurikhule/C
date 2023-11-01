#include<stdio.h>
int factorial (int no);
void main(){
    int no , fact;
    printf("enter any no");
    scanf("%d", &no);
    
    fact=factorial(no);
    printf("\nfactorial is : %d", fact );

}

int factorial(int no)
{
    int f;
    if (no==1)
    return(1);
    else
    f=no*factorial(no-1);
    return(f);

}