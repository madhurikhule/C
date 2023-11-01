
#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    char ch;

    fp =fopen ("source.txt", "r");

    if(fp == NULL )
    {
        puts("can not open source file");
        exit(1);
    }

    while(1)
    {
        ch = fgetc(fp);
        if( ch == EOF )
        {
            break;

        }
        
        printf("%c", ch);

    }fclose(fp);


}