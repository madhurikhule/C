#include<stdio.h>
typedef struct Student
{

    int rollNo;
    char name[50];
    int m1, m2;

}STUD;

void display(STUD *);
void main()
{
    STUD s;

    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo );

    printf("Enter Name  of student: ");
    fflush(stdin);
    gets(s.name);

    printf("Enter the marks of m1 and m2:  ");
    scanf("%d %d", &s.m1, &s.m2);

    display( &s);

}

void display( STUD *s1)
{
    printf("Name : %s", s1 -> name);
    printf("\nRoll No : %d",s1 -> rollNo);
    printf("\nMarks of Sub M1 and M2: %d %d", s1 -> m1,s1 -> m1);
}





