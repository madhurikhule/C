#include<stdio.h>
 void main()
{
    int len, wid, rad,area, perimeter;
    len=10;
    wid=14;
    rad=24;
    float PI=3.142;
    
    area=len*wid;
    perimeter=2*(len+wid);

    printf("the area of rectangle is %d",area);
    printf("\n");

    printf("The perimeter of rectanle is %d",perimeter);

}