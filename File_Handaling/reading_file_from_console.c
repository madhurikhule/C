
#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    char s[80];

    fp =fopen ("target.txt", "r");

    if(fp == NULL )
    {
        puts("can not open source file");
        exit(1);
    }

    printf("The file data is:\n");

    while(fgets(s,79,fp) != NULL)
    {
        printf("%s", s);

    }fclose(fp);



}   