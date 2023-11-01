
#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp, *ft;
    char ch;

    fp =fopen ("source.txt", "r");

    if(fp == NULL )
    {
        puts("can not open source file");
        exit(1);
    }

    ft = fopen ("target.txt","w");
    if(ft == NULL )
    {
        puts("can not open target file");
        fclose(fp);
        exit(2);
    }

    while(1)
    {
        ch = fgetc(fp);
        if( ch == EOF )
        {
            break;

        }
        else
        {
            fputc( ch, ft );
        }
        
    }
     fclose(fp);
     fclose(fp);

    printf("File copied sucessfully");



}