/*Accept a number from user and check whether it is a strong number or not. 
(A strong number is a number whose sum of individual digit's factorial is equal to the original number.
 e.g. 145 is a strong number because it's individual digit's factorial’s sum is equal to 145).*/

#include<stdio.h>

 void main()
 {
    int no;
   
    int reminder, sum = 0,i;

    for(int i=0; i<=1000; i++ )
    {
        while( i> 0 )
    {
        
        reminder = i % 10;
        int fact =1;
        while( reminder > 0 )
        {
            fact  = fact * reminder;
            reminder--;
           
        } 

         sum = sum + fact; 
         i /= 10;
             
    }  printf("%d",i);
       
        // if(sum==temp)
        // {
        //     printf("%d : It is Strong no", sum);
        // }
        // else
        // {
        //     printf("It is not strong no");
        // }
 } 
    }
    