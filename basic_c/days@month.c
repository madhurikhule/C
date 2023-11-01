#include<stdio.h>
void main(){
    int month;
    printf("enter any month");
    scanf ("%d", &month);
    (month==2)?printf("28 Days"):(month==4)||(month==6)||(month==9)||(month==11)?printf("30 Days"):printf("31 Days");
}