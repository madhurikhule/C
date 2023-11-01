//Accept a string from user and print it's string length.


#include<stdio.h>

int strlength(char *);
void main()
{
    char str[5];
    fgets(str, 5, stdin);
    // gets(str);
    puts(str);
    printf("%d", strlength(str));
}

int strlength(char *str)
{
    int i = 0;
    for (; *(str + i) != '\0'; i++);
    return i - 1;
    
}