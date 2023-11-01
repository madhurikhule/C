//Mobile Datasheet.

#include<stdio.h>

typedef struct mobile
{
    char brand_name[50];
    int rom;
    int ram;
    int camera;

}MOBILE;

void display(MOBILE *, int);
void main()
{
    MOBILE m[50];
    int size;

    printf("Enter size: ");
    scanf("%d", &size );

    for( int i = 0; i < size; i++ )
    {
        printf("Enter The Brand Name of Mobile: ");
        fflush(stdin);
        gets(m[i].brand_name);

        printf("Enter Rom of Mobile: ");
        scanf("%d", & m[i].rom);

        printf("Enter Ram of Mobile: ");
        scanf("%d", & m[i].ram);
    }
    display( m, size );
}

void display( MOBILE *m, int s)
{
    for( int i=0; i< s; i++ )
    {
        
        printf("Brand Name : %s", (m + i) -> brand_name );
        printf("\nROM : %d gb", (m + i) -> rom );
        printf("\nRAM : %d gb", (m + i) -> ram );
        printf("camera : %d MP",(m + i) -> rom );

    }

}