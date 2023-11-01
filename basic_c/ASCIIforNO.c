#include<stdio.h>
int  main(){
    int A=65, B=97, i;
    printf("Alphabets with thier ASCII value:\n");
    for(i=0;i<=25;i++){
        printf("%c: %d\n",A+i,A+i);

    }
    for(i=0;i<=25;i++){
        printf("%c:%d\n",B+i,B+i);
    }
}