#include<stdio.h>
void main()
{
    int num, i, count=0;
    printf("Enter any No");
    scanf("%d",&num);
     
    for(i=2;i <= num/2; i++)
    {
         if( num%i==0)
        {
            count++;
            break;
        }
    }
       
        if(count==0 && num!=1){
            printf("%d  is  prime no",num);
        }
        else{
            printf("it is not a prime no");
        }

    

}