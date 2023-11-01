#include<stdio.h>

void main(){
   int  i, j, count=0 , no;
   printf("enter any no:    ");
   scanf("%d",&no);
   for(i=1; i<=100; i++)
   {
    count=0;
    
    
    for(j=2; j<=i; j++){
        
        if(i%j==0){
            count++;
        
            break;
            
        }
        if(count==2){
            printf("prime no :%d\n",i);
        }

    }
   }

}