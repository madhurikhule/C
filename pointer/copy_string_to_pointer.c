
#include<stdio.h>

void copy_astring(char *, char * );
void main()
{
    char astring[50];
    char copy_string[50];

    printf("Enter the string: ");
    fflush(stdin);
    gets(astring);

    copy_astring( astring, copy_string);
    puts(copy_string);
}

void copy_astring( char *s , char *c)
{
    
    int i;

    for( i=0; *(s + i) != '\0'; i++)
    {
        *(c + i) = *(s + i);    
    }
}