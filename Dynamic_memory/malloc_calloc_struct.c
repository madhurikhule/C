#include<stdio.h>

#include<string.h>
#include<stdlib.h>

typedef struct student
{
    char *name;
    char *email;
    char *address;
    char *father_name;
}STUD;
void main()
{
    STUD s;

    char temp[50];

    printf("Enter your name: ");
    fflush(stdin);
    gets(temp);
    s.name = (char *)malloc((strlen(temp) + 1 * sizeof (char)));
    strcpy(s.name, temp);

    printf("Enter your Father Name: ");
    fflush(stdin);
    gets(temp);
    s.father_name= (char *)calloc(strlen(temp), sizeof (char));
    strcpy(s.father_name, temp);

    printf("Enter your email: ");
    fflush(stdin);
    gets(temp);
    s.email = (char *)malloc((strlen(temp) + 1 * sizeof (char)));
    strcpy(s.email, temp);

    printf("Enter your Address: ");
    fflush(stdin);
    gets(temp);
    s.address = (char *)calloc(strlen(temp), sizeof (char));
    strcpy(s.address, temp);

    printf("%s",s.name);
    printf("%s",s.father_name);
    printf("\n%s",s.email);
    printf("\n%s",s.address);

}