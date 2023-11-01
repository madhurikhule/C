#include<stdio.h>
void main()
{

    int n1, n2, n3;
    printf("enter any three no");
    scanf("%d%d%d",&n1, &n2, &n3);

    if((n1<n2)&&(n1<n3)){
        printf("%d is a minimum no",n1);
    }
    else if((n2<n1)&&(n2<n3)){
        printf("%d is a minimum no",n2);
    }
    else if((n3<n1)&&(n3<n2)){
    
        printf("%d is a minimum no",n3);
    }

}