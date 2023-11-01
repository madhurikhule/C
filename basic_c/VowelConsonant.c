#include<stdio.h>

void main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);

 if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
 {
    printf(" Character is Vowel\n");
    
 }
else{
    printf(" Character is Consonant");
    
}
}