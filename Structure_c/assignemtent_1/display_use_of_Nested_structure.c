
//	Write a program to display use of nested structures

#include<stdio.h>

void main()
{
    typedef struct children
    {
        char city[10];
        char age_group[30];
        int count;
        int year; 

    }CHILDREN;

    typedef struct old_people
    {
        int total;
        float per;
        CHILDREN c1;

    }OLD_PEOPLE;

    OLD_PEOPLE p1;

    printf("Enter city Name: ");
    gets(p1.c1.city);

    printf("Enter Age group for children: ");
    fflush(stdin);
    gets(p1.c1.age_group);

    printf("Enter the year:  ");
    scanf("%d", &p1.c1.year);

    printf("Enter count of New Born Children: ");
    scanf("%d", &p1.c1.count);

    p1.total = p1.c1.count;
    p1.per = (((float) p1.total / 300) * 100);

    printf("\n");
    printf("In  %s year: %d",p1.c1.city, p1.c1.year);
    printf("\nage group : %s",p1.c1.age_group);
    printf("\nTotal Count of New Born Children is: %f", p1.per);
    
    printf("\n");

    printf("Enter city Name: ");
    fflush(stdin);
    gets(p1.c1.city);

    printf("Enter Age group for Old_People: ");
    fflush(stdin);
    gets(p1.c1.age_group);


    printf("Enter the year:  ");
    scanf("%d", &p1.c1.year);

    printf("Enter count of New Old_people: ");
    scanf("%d", &p1.c1.count);

    p1.total = p1.c1.count;
    p1.per = ((float)(p1.total/300)*100);

    printf("\n");
    
    printf("In  %s year: %d",p1.c1.city, p1.c1.year );
    printf("age group : %s",p1.c1.age_group);
    printf("Total Count of New Born Children is: %f", p1.per);

}