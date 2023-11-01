/*Accept an array and a single number from user and print whether that number is present in the 
array or not and its number of occurrences*/ 

#include<stdio.h>
void cal_no( int[], int );
void main()
{
    int arr[10], size, sn , osn = 0;

    printf("Enter Size: ");
    scanf("%d", &size);


    for( int i = 0; i < size; i++ )
    {
        printf("\nenter elements in arr[%d]", i);
        scanf("%d", &arr[i]);

    }

    printf("\nenter no to search : ");
    scanf("%d", &sn);
    
    for(int j= 0; j < size; j++ )
    {
       if (arr[j] == sn)
       {
        osn++;
       }
             
    }

    osn != 0? printf("%d is present %dtimes in given array", sn, osn) : printf("%d not found in given array", sn);       
}
