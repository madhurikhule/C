//calloc
//envidion Branch.

#include<stdio.h>

void main()
{
    char name;
    char temp;

    printf("Enter the name");
    name = (char *)calloc(strlen(temp), sizeof (char));

    name = (char*)calloc( strlen(temp), sizeof (char) );
    name = (char*)malloc( strlen(temp) + 1 * sizeof (char));
}