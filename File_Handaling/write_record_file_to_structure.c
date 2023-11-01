
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    FILE *fp;
    char ch;

    struct emp 
    {
        char name[50];
        int age;
         float sal;

    };

    struct emp e;
    fp = fopen ("data.txt","w");

    if(fp == NULL)
    {
        puts(" cannot open files ");
        exit(1);
    }

    do
    {
        printf("\n Enter name ,age, sal: ");
        scanf( "%s %d %d", &e.name, &e.age, &e.sal );
        fprintf(fp, "%s %d %f\n", e.name, e.age, e.sal);

        printf("\nAdd another record <y/n>: ");
        fflush(stdin);
        ch = getche();
    }
    while(ch == 'y');
    fclose(fp);
    printf("Data written successfully:");
    
}