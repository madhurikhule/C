
#include<stdio.h>
#include<stdlib.h>
// int * test() {

//   static int x[4];

//   for(int i=0;i<4;i++){

//     x[i] = i%2;

//   }

//   return x;

// } 

// int main() {

//   int * arr = test();

//   printf("%d", *(arr+3));

// }

void sum_sub( int*, int* );

void main()
{
  int no1, no2;

  printf (" Enter no1, no2 ");
  scanf ( "%d %d", &no1, &no2 );

  sum_sub( &no1, &no2 );

  printf("%d", no1);
  printf("\n%d", no2);

}
void sum_sub( int *a, int *s )
{
  int temp = *a;
   
  *a = *a + *s;

  *s = abs(temp - *s);

}


