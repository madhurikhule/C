//Accept a number from user; pass it to a function and print whether it is a prime number or not in main.

#include<stdio.h>
int prime(int);
void main ()
{
    int num, i, count;
    printf("Enter any No");
    scanf("%d",&num);
    prime(num);
        if(count==0){
            printf("%d  is as prime no",num);
        }
        else{
            printf("it is not a prime no");
        }
    
        
}
int prime(int num)
{
    int i, count=0;
    for(i=2;i <= num/2; i++)
    {
         if( num%i==0)
        {
            count++;  

        }
        return count++;

    }    
}    