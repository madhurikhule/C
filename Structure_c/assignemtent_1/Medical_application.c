
// Medical Application for checkup.

#include<stdio.h>

void main()
{
    typedef struct patient
    {
        char name[50];
        int age;
        char symptoms[100];
        char blood_group[40];
        char disease[50];
    }PATIENT;
    
    PATIENT p1;

    printf("Enter the name of patient: ");
    gets(p1.name);

    printf("Enter the age: ");
    scanf("%d", &p1.age);

    printf("Enter the Blood Group: ");
    fflush(stdin);
    gets(p1.blood_group);

    printf("Enter the Disease: ");
    fflush(stdin);
    gets(p1.disease);

    printf("\n");
    printf("*---SHREE HOSPITAL---*");
    printf("\n");
    printf("\nDr. S.K.Nikam - BHMS");
    printf("\n");
    printf("\nPatient_Name : %s", p1.name);
    printf("\nPatient_AGE: %d", p1.age);
    printf("\nPatient_Blood_Group: %s", p1.blood_group);
    printf("\nDisease : %s", p1.disease);



}