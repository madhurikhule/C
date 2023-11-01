#include<stdio.h>

// void main()
// {
//     int no1, no2,no3,total;
//     float per;

//     printf("enter no:   ");
//     scanf("%d%d%d", &no1, &no2,&no3);

//     total=no1+no2+no3; 
//     per = (( (float) total/300 )* 100 );

//     printf("%.2f%%",per);
    

// }

typedef struct student
{
    int roll_No;
    
}STUD;

void main()
{
    STUD s[50];

    int i, size;

    printf("Enter the record: ");
    scanf("%d", &size);

    

    for( i=0; i<size; i++ )
    {
        printf("Enter Roll_No: ");
        scanf("%d", &s[i].roll_No);
    }

    printf("\n\nRecords are: ");
    
    for( i=0; i<size; i++ )
    {
        printf("%d", s[i].roll_No);
    }
}