#include<stdio.h>
#include<string.h>

void rev(char []);
void main()
{
    char str[50];
    puts("enter a string");
    gets(str);

    rev(str);
}

void rev(char s[])
{
    puts(strrev(s));
}