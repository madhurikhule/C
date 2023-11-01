#include<stdio.h>

void main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);

 if(ch=='a'||'e'||'i'||'o'||'u')
 {
    printf(" Character is Vowel\n");
    
 }
else{
    printf(" Character is Consonant");
    
}
}