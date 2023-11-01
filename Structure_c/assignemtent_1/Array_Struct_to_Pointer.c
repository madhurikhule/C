//Demo solve example.

#include<stdio.h>

typedef struct person
{
    int age;
    int Adhar_No;
    char name[50];
    char Address[50];
    float per;

}PERSON;

void display(PERSON *, int );
void main()
{
    PERSON p[100];
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    for( int i = 0 ; i < size; i++ )
    {
        printf("Enter Age of person: ");
        scanf("%d", &p[i].age);

        printf("Enter Name of person: ");
        fflush(stdin);
        gets(p[i].name);

        printf("Enter Adhar No of person: ");
        scanf("%d", &p[i].Adhar_No);

        printf("Enter address of that person: ");
        fflush(stdin);
        gets(p[i].Address);

        printf("Enter the percentage: ");
        scanf("%f", p[i].per);

        printf("\n");

    }

    display( p, size );

}

void display(PERSON *p1, int s)
{
    int Max_per = p1[0].per;
    for( int i = 0 ; i< s; i++ )
    {
        if ( p1[i].per > Max_per )
        {
            Max_per = p1[i].per;

            printf("Nmae: %s",(p1 + i) -> name );
            printf("\nAge: %d",(p1 + i) -> age );
            printf("\nAdhar No: %d", (p1 + i) -> Adhar_No );
            printf("\nAddress : %s", (p1 + i) -> Address );
            printf("\nPercentage : %.2f",(p1 + i) -> per);

    
        }

       
    } printf(" \nHe is Eligible for UPSC Exam ");
        
}
