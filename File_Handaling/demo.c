
#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *a;
    char ch;

    a =fopen ("source.txt", "r");

    if(a == NULL )
    {
        puts("can not open source file");
        exit(1);
    }

    while(1)
    {
        ch = fgetc(a);
        if( ch == EOF )
        {
            break;

        }
        
        printf("%c", ch);

    }
    fclose(a);

}