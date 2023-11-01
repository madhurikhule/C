// Basic of structure......

#include<stdio.h>
typedef  struct person
{
    int rollno;
    int age;
    char name[50];
}STUD;


void main()
{
    STUD s1;

    printf("Enter roll no of student_1: ");
    scanf("%d",&s1.rollno);

    printf("Enter the Age of student_1: ");
    scanf("%d", &s1.age);

    printf("Enter name of student_1: ");
    fflush( stdin );
    gets(s1.name);
    printf("%s your Roll No is: %d", s1.name, s1.rollno );
    printf("\nyour age : %d", s1.age);
}