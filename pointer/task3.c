//pointer with function.

#include<stdio.h>

void cal_no(int , int, int*, int*, int*, float*);
void main()
{
    int no1, no2, add, mul, sub;
    float div;

    printf("enter any two num NO1 &No2: ");
    scanf("%d %d", &no1, &no2);

    cal_no(no1, no2, &add, &sub, &mul, &div);

    printf("%d+%d = %d\n",no1, no2, add);
    printf("%d-%d = %d\n",no1,no2, sub);
    printf("%d*%d = %d\n",no1, no2, mul);
    printf("%d/%d = %f\n",no1, no2, div);
}

void cal_no( int n1, int n2, int *a, int *s, int *m, float *d )
{
    *a = n1 + n2;
    *s = n1 - n2;
    *m = n1 * n2;
    *d = (float) n1 / n2;
}