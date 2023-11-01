//Write a function to accept two numbers from user and make addition of them and return
//addition back to main and print the answer in main.

#include<stdio.h>
int calculator();
void main()
{
    
    int temp=calculator();


    printf("%d",calculator());
}

int calculator()
{

    int no1, no2, add;
    printf("Enter any Two no\n");
    scanf("%d%d",&no1, &no2);
    add=no1+no2;
    return add;

}
