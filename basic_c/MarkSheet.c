#include<stdio.h>

void main()
{
    int s1 ,s2, s3,total;
    float per;
    printf("Enter the Marks of 3 sub:");
    scanf("%d%d%d",&s1,&s2,&s3);

    total=s1+s2+s3;
    per=(((float)total/300)*100);

    printf("percentage are %2f",per);

    if(per>=60)
    {
        printf("A Grade");

    }

    else if(per>=50)
    {
        printf("B Grade");
    }
    else if(per>=40)
    {
        printf("C Grade");
    }
    else
    {
        printf("fail");

    }
}




