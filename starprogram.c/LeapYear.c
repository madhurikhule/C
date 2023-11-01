 #include<stdio.h>
   void main()
   {
    // Leap year using LOGICAL OPERATOR:

    int year;

    printf("enter any no ");
    scanf("%d",&year);

    ((year%400==0)||(year%100!=0)&&(year%4==0))?printf("%d  is a Leap Year\n",year):printf("It is Not a Leap Year");
       
    }
   