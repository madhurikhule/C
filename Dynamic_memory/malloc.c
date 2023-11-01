#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct mobile
{
    char *brand_Name;
    char *colour;
    int *model_no;
    int *ram; 
    int *rom;
}MOBILE;

void main()
{
    MOBILE m1;
    char temp[50];

    printf("Enter the Brand Name of Mobile: ");
    fflush( stdin );
    gets( temp );
    m1.brand_Name = (char*) malloc ( strlen (temp) + 1 * sizeof (char) );
    strcpy( m1.brand_Name, temp );

    printf("Enter the Color of Mobile: ");
    fflush( stdin );
    gets( temp );
    m1.colour = (char*) malloc ( strlen (temp) + 1 * sizeof (char) );
    strcpy( m1.colour, temp );

    printf("Enter the Model_NO: ");
    scanf("%d",&m1.model_no );

    printf("Enter the Rom: ");
    scanf("%d",&m1.rom );

    printf("Enter the Ram: ");
    scanf("%d",&m1.ram );

    printf("\n");
    printf( "Brand Name: %s", m1.brand_Name );
    printf( "\nColour: %s", m1.colour );
    printf( "\nModel No : %d", m1. model_no);
    printf( "\nROM : %d", m1.rom );
    printf( "\nRAM: %d", m1.ram );


}


