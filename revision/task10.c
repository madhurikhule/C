 // Sum of indivisual no ex=123 = 6.

 #include<stdio.h>

 void main()
 {
    int no,unit ,ten, hundred, sum;
    printf("enter the  value of no");
    scanf("%d", &no);

    unit = no%10;
    ten = (no/10)%10;
    hundred = no/100;
   
    sum = unit + ten + hundred;
   
    printf("%d ",sum);

//  second method

    int sum = 0;
    printf("enter the  value of no");
    scanf("%d", &no);

    sum = (no%10)+((no/10)%10)+(no/100);

    printf("the sum id %d", sum);

 }