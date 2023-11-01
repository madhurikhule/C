#include<stdio.h>

void display( char*);
void main()
{
    char str[30];

    printf("enter your name: ");

    fflush(stdin);
    gets(str);

    display(str);
}

void display( char *s)
{
    printf("\n your name: %s", s);

    for( s=0; *s!= '\0'; s++ )
    {
        printf("%c", *s);
    }
}