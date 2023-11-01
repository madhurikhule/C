

#include<stdio.h>

void display( char *, int, int );
void main()
{
    char name[10][20];
    int i, size;

    printf("Enter no of strings: ");
    scanf("%d",&size);

    printf("enter %d name: ",size );

    for( i=0; i<size; i++ )
    {
        fflush(stdin);
        gets(name[i]);

    }
    display ( name, size, 50 );
}

void display(char *a, int s, int m)
{
    printf("the names are: ");
    for( int i=0; i<s; i++ )
    {
        puts( a+(i*m));
    }
}