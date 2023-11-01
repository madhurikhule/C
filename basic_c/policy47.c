#include<stdio.h>
#include<stdlib.h>
    void main(){
    char user_choise;
    main_code:
    printf("*_________MENU________*\n");
    printf("1= addition of two no\n");
    printf("2=sum of digit no\n");
    printf("3=reversing the no\n");
    printf("4=exit\n");
    printf("enter your choise:\n");
    scanf("%d", &user_choise);

    //for addition
    int no1, no2, add;
    //for sum of digit
    int no, digit, num,sum;
    //for reverse no
    int no3, rev, num_copy;
     
     switch (user_choise)
     {
        case 1:
                printf("enter any two no");
                scanf("%d%d",&no1,&no2);
                add=no1+no2;
                printf("addition of %d and%d is %d",no1,no2,add);
                break;
        case 2:
                printf("enter any  no");
                
                scanf("%d",&no);
                num=no;
                sum=0;
                while(num>0){
                    digit=num%10;
                    sum+=digit;
                    num/=10;
                }printf(" sum of digit %d is :%d \n",num,sum);
                break;
         case 3:
                printf("enter any  no");
                scanf("%d",&no3);
                rev=0;
                num_copy=no3;
                while(num_copy>0)
                {
                    digit=num_copy%10;
                    rev=rev*10+digit;
                    num_copy/=10;
                }
                printf("reverse of no %d is %d", no3,rev);
                break;
         case 4:
               printf("exit\n");
               exit(0);
         default:
                printf("enter valid entry\n");
                break;

     }
      goto main_code;

}