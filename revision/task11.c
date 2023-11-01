#include<stdio.h>

 void main()
 {
   //  int no,unit ,ten, hundred, reverse;
   //  printf("enter the  value of no");
   //  scanf("%d", &no);

   //  unit = no%10;

   //  ten = (no/10)%10;

   //  hundred = no/100;
   
   //  printf("\nthe reverse no is :  %d%d%d",unit,ten,hundred);

//secound method
    
    int no, rev=0, reminder;
    printf("enter the  value of no");
    scanf("%d", &no);
    while(no!=0)
    {
      reminder = no % 10;
      rev = rev * 10 + reminder;
      no /= 10;
    }

    printf("The Reverse No Is : %d", rev, no);


 }  