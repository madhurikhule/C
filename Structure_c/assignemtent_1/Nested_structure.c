
//Nested Structure in c.....


#include<stdio.h>

typedef struct person
{
    int age;
    char name[50];
   
}SPER;

typedef struct student 
{
    int roll_no;
    int sub1, sub2, sub3, sub4, total;
    float per;
    SPER p1;
}STUD;

void main()
{
    STUD s1;

    printf("enter the name of student_1:  ");
    gets(s1.p1.name);

    printf("Enter Roll_No: ");
    scanf("%d", &s1.roll_no);

    printf("enter the age of student_1: ");
    scanf("%d",&s1.p1.age);

    printf("Enter the marks of sub1: ");
    scanf("%d", &s1.sub1);

    printf("Enter the marks of sub2: ");
    scanf("%d", &s1.sub2);

    printf("Enter the marks of sub3: ");
    scanf("%d", &s1.sub3);

    printf("Enter the marks of sub4: ");
    scanf("%d", &s1.sub4);

    s1.total = s1.sub1 +s1.sub2 +s1.sub3 +s1.sub4;
    s1.per =(((float)s1.total / 400) * 100);


    printf("%s your Roll_No : %d",s1.p1.name, s1.roll_no);
    printf("\nAge: %d",s1.p1.age );
    printf("\nFinal year percentage : %.2f", s1.per);


}