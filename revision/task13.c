//Find minimum number between three numbers using logical operators.

#include<stdio.h>
void main()
{
    int no1, no2, no3;
    printf("enter the  value of no1, no2, no3\n");
    scanf("%d%d%d", &no1, &no2, &no3);

    ( no1<no2 && no1<no3)  ? (( no2<no1 && no2<no3 ) ? printf("no2 is minimum no") : printf("no1 is min")) :(( no3<no1 && no3<no2) ? printf("no3 is minimum no"): printf("no2 is min"));

}