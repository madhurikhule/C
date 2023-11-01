#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main( )
{
    FILE *fp;
    char s[80];

    fp = fopen("Target.txt", "w");

    if(fp == NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    printf("Enter few lines: ");
    while(strlen(gets(s)) > 0)
    {
        fputs(s, fp);
        fputs("\n", fp);
    }
        fclose(fp);
        printf("Data written successfully");
    
    
}