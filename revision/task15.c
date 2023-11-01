//Accept a single alphabet from user and check whether it is a vowel or consonant character.
#include<stdio.h>

void main()
{
    char ch;

    printf("Enter the alphabet : ");
    scanf("%c", &ch);

    if((ch =='a')||(ch =='i')||(ch =='o')||(ch =='u')||(ch =='e'))
    {
        printf("%c It is a Vowel");
    }
    else
    {
        printf("It is consonant");
    }

}