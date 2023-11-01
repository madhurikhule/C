
//Student Datasheet

#include<stdio.h>

typedef struct student
{  
        int roll_No;
        char name[50]; 
        int date_of_Birth;
        char email[40];
        int physics, chemistry, math, total;
        float per;

}STUD;

void display( STUD [] , int);
void main()
{
    STUD s[50];
   
    int i, size, store;

    printf("Enter the size :  ");
    scanf("%d", &size);

    for( i=0; i< size; i++ )
    {
        printf("\n\nEnter Roll No Of Student[%d]: ",i);
        scanf("%d", &s[i].roll_No);

        printf("Enter Name Of Student[%d]: ",i);
        fflush(stdin);
        gets( s[i].name );

        printf("Enter Email_Id Of Student[%d]: ",i);
        fflush(stdin);
        gets(s[i].email);

        printf("Enter marks of physics[%d]: ",i);
        scanf("%d", &s[i].physics);

        printf("Enter marks of Chemistry[%d]: ",i);
        scanf("%d", &s[i].chemistry);

        printf("Enter marks of math[%d]: ",i);
        scanf("%d", &s[i].math);

        s[i].total = s[i].physics + s[i].chemistry +  s[i].math;

        s[i].per = (((float)s[i].total / 300)*100);

   
    }

    display(s, size);
   
}

void display( STUD s1[] , int size)
{
    int i;
    int max_index = 0;
    float Max_per = s1[0].per;

    for( i = 0; i < size; i++ )
    {
        
        if( s1[i].per > Max_per)
        {
            max_index =i;
            Max_per = s1[i].per; 

            printf("*-----Final Result-----*");
            printf("\n\n%s Roll_No : %d",s1[i].name, s1[i].roll_No);

            printf("\nEmail Id : %s", s1[i].email);

            printf("\nMarks Of sub : %d %d %d", s1[i].physics, s1[i].chemistry, s1[i].math);

            printf("\nFinal Year Percentage : %.2f%%",s1[i].per);
        }

    }
    
    printf("\n");
    printf("\nTopper of the class is: %.2f%% ",Max_per);

     
}

