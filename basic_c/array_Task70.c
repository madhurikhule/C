//Accept an array from user and calculate and print the sum of array elements.

#include<stdio.h>

void main()
{
    int num[30], i, sum, size;

    printf("how many numbers you want to calculate?<arr[30]>:");
    scanf("%d", &size);
    printf("Enter a %d no :",size);
    for( i=0; i<size; i++ )
    {
        scanf("%d", &num[i]);

       
            sum+=num[i];
        
        
    }
        printf( "the sum of no:");
        for(i=0; i<size; i++)
        {
        }
        printf("%d",sum);
    

    
}